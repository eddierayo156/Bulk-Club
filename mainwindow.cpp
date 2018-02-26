#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    myDB(DatabaseManager("myDB.db"))
{
    ui->setupUi(this);

    if(!myDB.isOpen())
    {
        ui->label_status_2->setText("Failed to connect to database");
    }
    else
    {
        ui->label_status_2->setText("Success! Connected to database");
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
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if(username == "manager123" && password == "password123")
    {
        ui->stackedWidget->setCurrentIndex(2);
    }
    else
    {
        ui->label_status->setText("Invalid Username or Password");
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
