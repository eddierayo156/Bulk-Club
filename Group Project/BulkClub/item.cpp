#include "item.h"

Item::Item()
{
    itemName = "";
    itemPrice = 0.00;
}
Item::Item(QString name, QString price)
{
    itemName = name;
    itemPrice = price;
}

QString Item::GetItemName() const
{
    return itemName;
}

QString Item::GetItemPrice() const
{
    return itemPrice;
}
