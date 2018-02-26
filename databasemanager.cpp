#include "databasemanager.h"

// https://katecpp.wordpress.com/2015/08/28/sqlite-with-qt/ helps a lot

DatabaseManager::DatabaseManager()
{
    myDB = QSqlDatabase::database();
}

DatabaseManager::DatabaseManager(const QString& databaseName)
{
    myDB = QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName(databaseName);

    if(!myDB.open())
    {
//        ui->label_status_2->setText("Failed! Can't connect to database");
        qDebug() << "Failed! Can't connect to database";
    }
    else
    {
//        ui->label_status_2->setText("Success! Connected to database");
        qDebug() << "Success! Connected to database";
    }
}

bool DatabaseManager::isOpen() const
{
    return myDB.isOpen();
}

bool DatabaseManager::ItemExists(const Item& item) const
{
    bool exists = false;
    QSqlQuery query;
    QString itemName = item.GetItemName();
    query.prepare("SELECT FROM inventory WHERE item_name = (:name)");
    query.bindValue(":name", itemName);

    if(query.exec())
    {
        if(query.next())
        {
            exists = true;
        }
    }

    return exists;
}

bool DatabaseManager::AddItem(const Item& newItem)
{
    QSqlQuery query;
    bool success = false;
    QString itemName;
    double price;

    itemName = newItem.GetItemName();
    price = newItem.GetItemPrice();

    query.prepare("INSERT INTO inventory (itemName, price) VALUES (:iName, :iPrice)");
    query.bindValue(":iName", itemName);
    query.bindValue(":iPrice", price);

    if(query.exec())
    {
        success = true;
    }
    else
    {
        qDebug() << "addItem error:"
                 << query.lastError();
    }

    return success;
}

bool DatabaseManager::RemoveItem(const Item& item)
{
    QSqlQuery query;
    bool success = false;
    QString itemName = item.GetItemName();

    if(ItemExists(item))
    {
        query.prepare("DELETE FROM inventory WHERE item_name = (:name)");
        query.bindValue(":name", itemName);

        success = query.exec();

        if(!success)
        {
           qDebug() << "RemoveItem error:"
                 << query.lastError();
        }
    }

    return success;
}
