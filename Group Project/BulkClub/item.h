#ifndef ITEM_H
#define ITEM_H

#include <QObject>

class Item
{
private:
    QString itemName;
    QString  itemPrice;
public:
    Item();
    Item(QString name, QString price);

    QString GetItemName() const;
    QString GetItemPrice() const;
};

#endif // ITEM_H
