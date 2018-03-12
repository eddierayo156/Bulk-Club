#include "databasemanager.h"

// https://katecpp.wordpress.com/2015/08/28/sqlite-with-qt/ helps a lot

DatabaseManager::DatabaseManager()
{
    myDB = QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName(DB_PATH);

    if( QFile::exists(DB_PATH) )
    {
        if (!myDB.open()) //be careful, SQLITE will create the db if it doesn't exist and return true.
        {
            qDebug() << "Error: could not open connection to database.";
        }
        else
        {
            qDebug() << "Database connection opened.";
        }
    }
    else
    {
        qDebug() << "Cannot open database because the DB Path does not exist.";
    }
}

DatabaseManager::~DatabaseManager()
{
     myDB = QSqlDatabase::addDatabase("QSQLITE");
    if (myDB.isOpen())
    {
        myDB.close();
    }

    qDebug() << "Destroying Databasemanager";
}

bool DatabaseManager::isOpen() const
{
    return myDB.isOpen();
}

DatabaseManager& DatabaseManager::instance()
{
    static DatabaseManager dmInstance;

    return dmInstance;
}

bool DatabaseManager::ItemExists(const Item& item) const
{
    bool exists = false;
    QSqlQuery query;
    QString itemName = item.GetItemName();
    query.prepare("SELECT itemName FROM inventory WHERE itemName = (:itemName)");
    query.bindValue(":itemName", itemName);

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
    QString itemName;
    QString itemPrice;

    itemName = newItem.GetItemName();
    itemPrice = newItem.GetItemPrice();

    //edit to match up with the column names of the in the SQL db
    query.prepare("INSERT INTO inventory (itemName, itemPrice) VALUES (:itemName, :itemPrice)");
    query.bindValue(":itemName", itemName);
    query.bindValue(":itemPrice", itemPrice);

    if(query.exec())
    {
        qDebug() << "addItem worked:";
        return true;
    }
    else
    {
        qDebug() << "addItem error:"
                 << query.lastError();
        return false;
    }
}

bool DatabaseManager::RemoveItem(const Item& item)
{
    QSqlQuery query;
    QString itemName = item.GetItemName();

    if(ItemExists(item))
    {
        query.prepare("DELETE FROM inventory WHERE itemName = (:itemName)");
        query.bindValue(":itemName", itemName);

        if( query.exec() )
        {
            qDebug() << "Item deleted!";
            return true;
        }
        else
        {
            qDebug() << "Delete item failed: " << query.lastError();
            return false;
        }
    }
    return false;
}

// Member functions for the Database
bool DatabaseManager::MemberExists(QString& newId)
{
    bool exists = false;
    QSqlQuery query;

    query.prepare("SELECT id FROM members WHERE newId = (:mId)");
    query.bindValue(":mId", newId);

    if(query.exec())
    {
        if(query.next())
        {
            exists = true;
        }
    }

    return exists;
}

bool DatabaseManager::AddMember(QString name, QString id, QString memberType, QString expirationDate)
{
    QSqlQuery query;

    query.prepare("INSERT INTO members (name, id, memberType, expirationDate) VALUES (:name, :id, :memType, :expDate)");
    query.bindValue(":name", name);
    query.bindValue(":id", id);
    query.bindValue(":memType", memberType);
    query.bindValue(":expDate", expirationDate);

    if(query.exec())
    {
        qDebug() << "addMember success:";
        return true;
    }
    else
    {
        qDebug() << "addMember fail:"
                 << query.lastError();
        return false;
    }
}

bool DatabaseManager::deleteMember(QString memberId)
{
    QSqlQuery query;
    query.prepare("DELETE FROM members WHERE id = :id");
    query.bindValue(":id", memberId);

    if( query.exec() )
    {
        qDebug() << "Member deleted!";
        return true;
    }
    else
    {
        qDebug() << "Delete member failed: " << query.lastError();
        return false;
    }
}
