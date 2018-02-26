#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore/QCoreApplication>
#include <QDebug>
#include <iostream>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "databasemanager.h"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_members_clicked();

    void on_pushButton_inventory_clicked();

    void on_pushButton_memberships_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_sales_clicked();

    void on_pushButton_purchases_clicked();

    void on_pushButton_qty_clicked();

    void on_pushButton_rebates_clicked();

    void on_pushButton_expirations_clicked();

    void on_pushButton_item_lookup_clicked();

    void on_pushButton_member_lookup_clicked();

    void on_pushButton_convert_clicked();

    void on_pushButton_back_inventory_clicked();

    void on_pushButton_back_memberships_clicked();

    void on_pushButton_back_report_clicked();

    void on_pushButton_back_purchases_clicked();

    void on_pushButton_back_qty_clicked();

    void on_pushButton_back_rebates_clicked();

    void on_pushButton_back_expirations_clicked();

    void on_pushButton_back_item_lookup_clicked();

    void on_pushButton_back_member_lookup_clicked();

    void on_pushButton_back_convert_clicked();

    void on_pushButton_logout_admin_clicked();

    void on_pushButton_logout_manager_clicked();

private:
    Ui::MainWindow *ui;
    DatabaseManager myDB;
};

#endif // MAINWINDOW_H
