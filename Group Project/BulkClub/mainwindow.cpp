#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    if(DatabaseManager::instance().isOpen())
    {
        ui->label_status_2->setText("Success! Connected to database");
    }
    else
    {
        ui->label_status_2->setText("Failed to connect to database");
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString username;
    QString password;

    username = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();

    if(username == "admin123" && password == "saddleback123")
    {
        ui->lineEdit_username->setText("");
        ui->lineEdit_password->setText("");
        ui->label_status->setText("");
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if(username == "manager123" && password == "password123")
    {
        ui->lineEdit_username->setText("");
        ui->lineEdit_password->setText("");
        ui->label_status->setText("");
        ui->stackedWidget->setCurrentIndex(2);
    }
    else
    {

        ui->label_status->setText("Invalid Username or Password");
        ui->lineEdit_password->setText("");
    }
}
// ADMIN FUNCTIONS
// admin to add/ delete club members
void MainWindow::on_pushButton_members_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);   
}

// admin to add/ delete items in inventory list
void MainWindow::on_pushButton_inventory_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

// determine membership status (reg/executive)
void MainWindow::on_pushButton_memberships_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

// STORE MANAGER FUNCTIONS
// display sales of any given day
void MainWindow::on_pushButton_sales_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

// display total purchases for all members sorted by membership number
void MainWindow::on_pushButton_purchases_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

// display qty of each item sold sorted by item name
void MainWindow::on_pushButton_qty_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

// display reabtes for executive members
void MainWindow::on_pushButton_rebates_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

// enter month to recieve memberships that are expiring
void MainWindow::on_pushButton_expirations_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

// enter item to display qty sold and revenue
void MainWindow::on_pushButton_item_lookup_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}

// enter membership number or name to display total purchases for that member
void MainWindow::on_pushButton_member_lookup_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}

// convert reg status to executive
void MainWindow::on_pushButton_convert_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);
}

// BACK FUNCTIONS TO RETURN TO HUBS
void MainWindow::on_pushButton_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_back_inventory_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_back_memberships_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_back_report_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_back_purchases_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_back_qty_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_back_rebates_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_back_expirations_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_back_item_lookup_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_back_member_lookup_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_back_convert_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_logout_admin_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_logout_manager_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_addItem_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);

}

// add item button in add item window
void MainWindow::on_pushButton_clicked()
{
    QString name;
    QString price;

    name = ui->itemName->text();
    price = ui->itemPrice->text();

    if(!DatabaseManager::instance().ItemExists(Item(name,price)))
    {
        if(DatabaseManager::instance().AddItem(Item(name, price)))
        {
            ui->message->setText("Item Added");
        }
        else
        {
            ui->message->setText("Failed To Add Item'");
        }
    }
    else
    {
        ui->message->setText("Item already exists");
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    QString name;
    QString price;

    name = ui->itemName_2->text();
    price = ui->itemPrice->text();

    if(DatabaseManager::instance().ItemExists(Item(name,price)))
    {
        if(DatabaseManager::instance().RemoveItem(Item(name,price)))
        {
            ui->message_2->setText("Item Removed");
        }
        else
        {
            ui->message_2->setText("Failed To Remove Item'");
        }
    }
    else
    {
        ui->message_2->setText("Item Could Not Be Found");
    }
}

//ADMIN - add member button, pushed
void MainWindow::on_addMemberButton_clicked()
{
        ui->stackedWidget->setCurrentIndex(16);
}

void MainWindow::on_pushButton_addFinish_clicked()
{
    QString name;
    QString id;
    QString memType;
    QString expDate;

    name    = ui->lineEdit_newName->text();
    id      = ui->lineEdit_newId->text();
    memType = ui->lineEdit_newMemType->text();
    expDate = ui->lineEdit_newExpDate->text();

    ui->lineEdit_newName->setText("");
    ui->lineEdit_newId->setText("");
    ui->lineEdit_newMemType->setText("");
    ui->lineEdit_newExpDate->setText("");

    if(!DatabaseManager::instance().MemberExists(id))
    {
        if(DatabaseManager::instance().AddMember(name, id, memType, expDate))
        {
            ui->label_newMemStatus->setText("MEMBER ADDED!");
        }
        else
        {
            ui->label_newMemStatus->setText("ERROR: MEMBER ALREADY EXISTS");
        }
    }
}


void MainWindow::on_SearchMembDowngrade_clicked()
{

}

void MainWindow::on_SearchMembUpgrade_clicked()
{

}

void MainWindow::on_pushButton_Exit_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_Delete_clicked()
{
    QString id;
    QString name;

    id = ui->lineEdit_memberID->text();

    if(DatabaseManager::instance().deleteMember(id))
    {
        ui->label_deleted->setText("Member has been succesfully deleted");
    }
    else
    {
        ui->label_deleted->setText("Member failed to delete");
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_removeItem_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}
