#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QtSql>
#include <QList>
#include "item.h"

class DatabaseManager
{
    public:
            DatabaseManager();
            DatabaseManager(const QString& databaseName);
            bool isOpen() const;

            // inventory functions for database
            bool AddItem(const Item& newItem);
            bool RemoveItem(const Item& item);
            bool ItemExists(const Item& item) const;
    private:
            QSqlDatabase myDB;

};
#endif // DATABASEMANAGER_H
