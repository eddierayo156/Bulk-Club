/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QLabel *label_username;
    QLabel *label_password;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QLabel *label_status;
    QWidget *page_2;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_members;
    QPushButton *pushButton_inventory;
    QPushButton *pushButton_memberships;
    QPushButton *pushButton_logout_admin;
    QWidget *page_3;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_sales;
    QPushButton *pushButton_purchases;
    QPushButton *pushButton_qty;
    QPushButton *pushButton_rebates;
    QPushButton *pushButton_expirations;
    QPushButton *pushButton_item_lookup;
    QPushButton *pushButton_member_lookup;
    QPushButton *pushButton_convert;
    QPushButton *pushButton_logout_manager;
    QWidget *page_4;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_back;
    QWidget *page_5;
    QGroupBox *groupBox_5;
    QPushButton *pushButton_back_inventory;
    QWidget *page_6;
    QGroupBox *groupBox_6;
    QPushButton *pushButton_back_memberships;
    QWidget *page_7;
    QGroupBox *groupBox_7;
    QPushButton *pushButton_back_report;
    QWidget *page_8;
    QGroupBox *groupBox_8;
    QPushButton *pushButton_back_purchases;
    QWidget *page_9;
    QGroupBox *groupBox_9;
    QPushButton *pushButton_back_qty;
    QWidget *page_10;
    QGroupBox *groupBox_10;
    QPushButton *pushButton_back_rebates;
    QWidget *page_11;
    QGroupBox *groupBox_11;
    QPushButton *pushButton_back_expirations;
    QWidget *page_12;
    QGroupBox *groupBox_12;
    QPushButton *pushButton_back_item_lookup;
    QWidget *page_13;
    QGroupBox *groupBox_13;
    QPushButton *pushButton_back_member_lookup;
    QWidget *page_14;
    QGroupBox *groupBox_14;
    QPushButton *pushButton_back_convert;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(809, 736);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(120, 100, 531, 401));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(120, 80, 281, 171));
        label_username = new QLabel(groupBox);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setGeometry(QRect(40, 50, 47, 13));
        label_password = new QLabel(groupBox);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setGeometry(QRect(40, 80, 47, 13));
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(90, 50, 113, 20));
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(90, 80, 113, 20));
        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(100, 120, 75, 23));
        label_status = new QLabel(groupBox);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(10, 150, 261, 16));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(120, 80, 271, 191));
        pushButton_members = new QPushButton(groupBox_2);
        pushButton_members->setObjectName(QStringLiteral("pushButton_members"));
        pushButton_members->setGeometry(QRect(20, 30, 101, 61));
        pushButton_inventory = new QPushButton(groupBox_2);
        pushButton_inventory->setObjectName(QStringLiteral("pushButton_inventory"));
        pushButton_inventory->setGeometry(QRect(150, 30, 101, 61));
        pushButton_memberships = new QPushButton(groupBox_2);
        pushButton_memberships->setObjectName(QStringLiteral("pushButton_memberships"));
        pushButton_memberships->setGeometry(QRect(20, 110, 101, 61));
        pushButton_logout_admin = new QPushButton(groupBox_2);
        pushButton_logout_admin->setObjectName(QStringLiteral("pushButton_logout_admin"));
        pushButton_logout_admin->setGeometry(QRect(180, 150, 75, 23));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(80, 40, 331, 341));
        pushButton_sales = new QPushButton(groupBox_3);
        pushButton_sales->setObjectName(QStringLiteral("pushButton_sales"));
        pushButton_sales->setGeometry(QRect(20, 30, 141, 51));
        pushButton_purchases = new QPushButton(groupBox_3);
        pushButton_purchases->setObjectName(QStringLiteral("pushButton_purchases"));
        pushButton_purchases->setGeometry(QRect(20, 100, 141, 51));
        pushButton_qty = new QPushButton(groupBox_3);
        pushButton_qty->setObjectName(QStringLiteral("pushButton_qty"));
        pushButton_qty->setGeometry(QRect(20, 170, 141, 51));
        pushButton_rebates = new QPushButton(groupBox_3);
        pushButton_rebates->setObjectName(QStringLiteral("pushButton_rebates"));
        pushButton_rebates->setGeometry(QRect(20, 240, 141, 51));
        pushButton_expirations = new QPushButton(groupBox_3);
        pushButton_expirations->setObjectName(QStringLiteral("pushButton_expirations"));
        pushButton_expirations->setGeometry(QRect(170, 30, 141, 51));
        pushButton_item_lookup = new QPushButton(groupBox_3);
        pushButton_item_lookup->setObjectName(QStringLiteral("pushButton_item_lookup"));
        pushButton_item_lookup->setGeometry(QRect(170, 100, 141, 51));
        pushButton_member_lookup = new QPushButton(groupBox_3);
        pushButton_member_lookup->setObjectName(QStringLiteral("pushButton_member_lookup"));
        pushButton_member_lookup->setGeometry(QRect(170, 170, 141, 51));
        pushButton_convert = new QPushButton(groupBox_3);
        pushButton_convert->setObjectName(QStringLiteral("pushButton_convert"));
        pushButton_convert->setGeometry(QRect(170, 240, 141, 51));
        pushButton_logout_manager = new QPushButton(groupBox_3);
        pushButton_logout_manager->setObjectName(QStringLiteral("pushButton_logout_manager"));
        pushButton_logout_manager->setGeometry(QRect(240, 300, 75, 23));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        groupBox_4 = new QGroupBox(page_4);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(90, 60, 341, 261));
        pushButton_back = new QPushButton(groupBox_4);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(250, 220, 75, 23));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        groupBox_5 = new QGroupBox(page_5);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(60, 50, 361, 271));
        pushButton_back_inventory = new QPushButton(groupBox_5);
        pushButton_back_inventory->setObjectName(QStringLiteral("pushButton_back_inventory"));
        pushButton_back_inventory->setGeometry(QRect(260, 230, 75, 23));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        groupBox_6 = new QGroupBox(page_6);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(40, 40, 451, 311));
        pushButton_back_memberships = new QPushButton(groupBox_6);
        pushButton_back_memberships->setObjectName(QStringLiteral("pushButton_back_memberships"));
        pushButton_back_memberships->setGeometry(QRect(350, 260, 75, 23));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        groupBox_7 = new QGroupBox(page_7);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(70, 50, 411, 281));
        pushButton_back_report = new QPushButton(groupBox_7);
        pushButton_back_report->setObjectName(QStringLiteral("pushButton_back_report"));
        pushButton_back_report->setGeometry(QRect(320, 240, 75, 23));
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        groupBox_8 = new QGroupBox(page_8);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(70, 50, 361, 281));
        pushButton_back_purchases = new QPushButton(groupBox_8);
        pushButton_back_purchases->setObjectName(QStringLiteral("pushButton_back_purchases"));
        pushButton_back_purchases->setGeometry(QRect(270, 240, 75, 23));
        stackedWidget->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        groupBox_9 = new QGroupBox(page_9);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(40, 30, 431, 301));
        pushButton_back_qty = new QPushButton(groupBox_9);
        pushButton_back_qty->setObjectName(QStringLiteral("pushButton_back_qty"));
        pushButton_back_qty->setGeometry(QRect(340, 260, 75, 23));
        stackedWidget->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        groupBox_10 = new QGroupBox(page_10);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(70, 50, 401, 271));
        pushButton_back_rebates = new QPushButton(groupBox_10);
        pushButton_back_rebates->setObjectName(QStringLiteral("pushButton_back_rebates"));
        pushButton_back_rebates->setGeometry(QRect(300, 230, 75, 23));
        stackedWidget->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        groupBox_11 = new QGroupBox(page_11);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(50, 40, 431, 291));
        pushButton_back_expirations = new QPushButton(groupBox_11);
        pushButton_back_expirations->setObjectName(QStringLiteral("pushButton_back_expirations"));
        pushButton_back_expirations->setGeometry(QRect(330, 250, 75, 23));
        stackedWidget->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        groupBox_12 = new QGroupBox(page_12);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(50, 30, 431, 301));
        pushButton_back_item_lookup = new QPushButton(groupBox_12);
        pushButton_back_item_lookup->setObjectName(QStringLiteral("pushButton_back_item_lookup"));
        pushButton_back_item_lookup->setGeometry(QRect(330, 260, 75, 23));
        stackedWidget->addWidget(page_12);
        page_13 = new QWidget();
        page_13->setObjectName(QStringLiteral("page_13"));
        groupBox_13 = new QGroupBox(page_13);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setGeometry(QRect(50, 40, 441, 311));
        pushButton_back_member_lookup = new QPushButton(groupBox_13);
        pushButton_back_member_lookup->setObjectName(QStringLiteral("pushButton_back_member_lookup"));
        pushButton_back_member_lookup->setGeometry(QRect(340, 260, 75, 23));
        stackedWidget->addWidget(page_13);
        page_14 = new QWidget();
        page_14->setObjectName(QStringLiteral("page_14"));
        groupBox_14 = new QGroupBox(page_14);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        groupBox_14->setGeometry(QRect(40, 20, 441, 311));
        pushButton_back_convert = new QPushButton(groupBox_14);
        pushButton_back_convert->setObjectName(QStringLiteral("pushButton_back_convert"));
        pushButton_back_convert->setGeometry(QRect(340, 260, 75, 23));
        stackedWidget->addWidget(page_14);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 809, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Signin", 0));
        label_username->setText(QApplication::translate("MainWindow", "Username", 0));
        label_password->setText(QApplication::translate("MainWindow", "Password", 0));
        pushButton_login->setText(QApplication::translate("MainWindow", "Login", 0));
        label_status->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Admin", 0));
        pushButton_members->setText(QApplication::translate("MainWindow", "Manage members", 0));
        pushButton_inventory->setText(QApplication::translate("MainWindow", "Manage inventory", 0));
        pushButton_memberships->setText(QApplication::translate("MainWindow", "Memberships", 0));
        pushButton_logout_admin->setText(QApplication::translate("MainWindow", "Logout", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Manager", 0));
        pushButton_sales->setText(QApplication::translate("MainWindow", "Sales report (day)", 0));
        pushButton_purchases->setText(QApplication::translate("MainWindow", "Total purchases by number", 0));
        pushButton_qty->setText(QApplication::translate("MainWindow", "Qty sold by item name", 0));
        pushButton_rebates->setText(QApplication::translate("MainWindow", "Rebates", 0));
        pushButton_expirations->setText(QApplication::translate("MainWindow", "Membership expirations", 0));
        pushButton_item_lookup->setText(QApplication::translate("MainWindow", "Item lookup", 0));
        pushButton_member_lookup->setText(QApplication::translate("MainWindow", "Member lookup", 0));
        pushButton_convert->setText(QApplication::translate("MainWindow", "Convert membership", 0));
        pushButton_logout_manager->setText(QApplication::translate("MainWindow", "Logout", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Admin: Manage Members", 0));
        pushButton_back->setText(QApplication::translate("MainWindow", "Back", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Admin: Manage Inventory", 0));
        pushButton_back_inventory->setText(QApplication::translate("MainWindow", "Back", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Admin: Manage Memberships", 0));
        pushButton_back_memberships->setText(QApplication::translate("MainWindow", "Back", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Manager: Sales Report", 0));
        pushButton_back_report->setText(QApplication::translate("MainWindow", "Back", 0));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Manager: Total Purchases sorted by number", 0));
        pushButton_back_purchases->setText(QApplication::translate("MainWindow", "Back", 0));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Manager: Quantity sold by item name", 0));
        pushButton_back_qty->setText(QApplication::translate("MainWindow", "Back", 0));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "Manager: Rebates", 0));
        pushButton_back_rebates->setText(QApplication::translate("MainWindow", "Back", 0));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "Manager: Manage membership expirations", 0));
        pushButton_back_expirations->setText(QApplication::translate("MainWindow", "Back", 0));
        groupBox_12->setTitle(QApplication::translate("MainWindow", "Manager: Item Lookup", 0));
        pushButton_back_item_lookup->setText(QApplication::translate("MainWindow", "Back", 0));
        groupBox_13->setTitle(QApplication::translate("MainWindow", "Manager: Member Lookup", 0));
        pushButton_back_member_lookup->setText(QApplication::translate("MainWindow", "Back", 0));
        groupBox_14->setTitle(QApplication::translate("MainWindow", "Manager: Convert Membership", 0));
        pushButton_back_convert->setText(QApplication::translate("MainWindow", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
