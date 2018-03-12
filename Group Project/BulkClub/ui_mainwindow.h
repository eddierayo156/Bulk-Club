/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *SignIn;
    QGroupBox *groupBox;
    QLabel *label_username;
    QLabel *label_password;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QLabel *label_status;
    QLabel *label_status_2;
    QWidget *AdminBase;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_members;
    QPushButton *pushButton_inventory;
    QPushButton *pushButton_memberships;
    QPushButton *pushButton_logout_admin;
    QWidget *ManagerBase;
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
    QWidget *ManagerMembers;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_back;
    QPushButton *addMemberButton;
    QPushButton *pushButton_4;
    QWidget *ManageInventory;
    QGroupBox *groupBox_5;
    QPushButton *pushButton_back_inventory;
    QPushButton *pushButton_addItem;
    QPushButton *pushButton_removeItem;
    QWidget *ManageMemberships;
    QGroupBox *groupBox_6;
    QPushButton *pushButton_back_memberships;
    QWidget *SalesReport;
    QGroupBox *groupBox_7;
    QPushButton *pushButton_back_report;
    QWidget *TotPurchasesByNum;
    QGroupBox *groupBox_8;
    QPushButton *pushButton_back_purchases;
    QWidget *QtySold;
    QGroupBox *groupBox_9;
    QPushButton *pushButton_back_qty;
    QWidget *Rebates;
    QGroupBox *groupBox_10;
    QPushButton *pushButton_back_rebates;
    QWidget *MembExp;
    QGroupBox *groupBox_11;
    QPushButton *pushButton_back_expirations;
    QWidget *ItemLookup;
    QGroupBox *groupBox_12;
    QPushButton *pushButton_back_item_lookup;
    QWidget *MemberLookup;
    QGroupBox *groupBox_13;
    QPushButton *pushButton_back_member_lookup;
    QWidget *ConvertMembership;
    QGroupBox *groupBox_14;
    QPushButton *pushButton_back_convert;
    QPushButton *SearchMembUpgrade;
    QPushButton *SearchMembDowngrade;
    QWidget *AddItem;
    QGroupBox *groupBox_15;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *item;
    QLabel *label;
    QLineEdit *itemName;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *itemPrice;
    QLabel *message;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QWidget *RemoveItem;
    QGroupBox *groupBox_16;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *item_2;
    QLabel *label_3;
    QLineEdit *itemName_2;
    QPushButton *pushButton_2;
    QLabel *message_2;
    QPushButton *pushButton_6;
    QWidget *AddMember;
    QGroupBox *groupBox_17;
    QLineEdit *lineEdit_newName;
    QLabel *label_4;
    QLineEdit *lineEdit_newId;
    QLabel *label_5;
    QLineEdit *lineEdit_newMemType;
    QLabel *label_6;
    QLineEdit *lineEdit_newExpDate;
    QLabel *label_7;
    QLabel *label_newMemStatus;
    QPushButton *pushButton_addFinish;
    QPushButton *pushButton_Exit;
    QWidget *RemoveMember;
    QGroupBox *groupBox_19;
    QLineEdit *lineEdit_memberID;
    QLabel *label_8;
    QPushButton *pushButton_Delete;
    QLabel *label_deleted;
    QPushButton *pushButton_3;
    QWidget *RecommendUpgrade;
    QGroupBox *groupBox_18;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(855, 633);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(200, 80, 551, 421));
        SignIn = new QWidget();
        SignIn->setObjectName(QStringLiteral("SignIn"));
        groupBox = new QGroupBox(SignIn);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(130, 90, 281, 171));
        label_username = new QLabel(groupBox);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setGeometry(QRect(40, 50, 47, 13));
        label_password = new QLabel(groupBox);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setGeometry(QRect(40, 80, 47, 13));
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(90, 50, 113, 20));
        lineEdit_username->setClearButtonEnabled(true);
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(90, 80, 113, 20));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(100, 120, 75, 23));
        label_status = new QLabel(groupBox);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(10, 140, 261, 21));
        label_status_2 = new QLabel(SignIn);
        label_status_2->setObjectName(QStringLiteral("label_status_2"));
        label_status_2->setGeometry(QRect(120, 260, 261, 16));
        stackedWidget->addWidget(SignIn);
        AdminBase = new QWidget();
        AdminBase->setObjectName(QStringLiteral("AdminBase"));
        groupBox_2 = new QGroupBox(AdminBase);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(140, 100, 271, 191));
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
        stackedWidget->addWidget(AdminBase);
        ManagerBase = new QWidget();
        ManagerBase->setObjectName(QStringLiteral("ManagerBase"));
        groupBox_3 = new QGroupBox(ManagerBase);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(100, 40, 331, 341));
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
        stackedWidget->addWidget(ManagerBase);
        ManagerMembers = new QWidget();
        ManagerMembers->setObjectName(QStringLiteral("ManagerMembers"));
        groupBox_4 = new QGroupBox(ManagerMembers);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(160, 60, 261, 211));
        pushButton_back = new QPushButton(groupBox_4);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(180, 180, 75, 23));
        addMemberButton = new QPushButton(groupBox_4);
        addMemberButton->setObjectName(QStringLiteral("addMemberButton"));
        addMemberButton->setGeometry(QRect(60, 50, 121, 51));
        pushButton_4 = new QPushButton(groupBox_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(60, 110, 121, 51));
        stackedWidget->addWidget(ManagerMembers);
        ManageInventory = new QWidget();
        ManageInventory->setObjectName(QStringLiteral("ManageInventory"));
        groupBox_5 = new QGroupBox(ManageInventory);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(140, 80, 261, 241));
        pushButton_back_inventory = new QPushButton(groupBox_5);
        pushButton_back_inventory->setObjectName(QStringLiteral("pushButton_back_inventory"));
        pushButton_back_inventory->setGeometry(QRect(180, 210, 75, 23));
        pushButton_addItem = new QPushButton(groupBox_5);
        pushButton_addItem->setObjectName(QStringLiteral("pushButton_addItem"));
        pushButton_addItem->setGeometry(QRect(60, 60, 131, 51));
        pushButton_removeItem = new QPushButton(groupBox_5);
        pushButton_removeItem->setObjectName(QStringLiteral("pushButton_removeItem"));
        pushButton_removeItem->setGeometry(QRect(60, 130, 131, 51));
        stackedWidget->addWidget(ManageInventory);
        ManageMemberships = new QWidget();
        ManageMemberships->setObjectName(QStringLiteral("ManageMemberships"));
        groupBox_6 = new QGroupBox(ManageMemberships);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(40, 40, 451, 311));
        pushButton_back_memberships = new QPushButton(groupBox_6);
        pushButton_back_memberships->setObjectName(QStringLiteral("pushButton_back_memberships"));
        pushButton_back_memberships->setGeometry(QRect(350, 260, 75, 23));
        stackedWidget->addWidget(ManageMemberships);
        SalesReport = new QWidget();
        SalesReport->setObjectName(QStringLiteral("SalesReport"));
        groupBox_7 = new QGroupBox(SalesReport);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(70, 50, 411, 281));
        pushButton_back_report = new QPushButton(groupBox_7);
        pushButton_back_report->setObjectName(QStringLiteral("pushButton_back_report"));
        pushButton_back_report->setGeometry(QRect(320, 240, 75, 23));
        stackedWidget->addWidget(SalesReport);
        TotPurchasesByNum = new QWidget();
        TotPurchasesByNum->setObjectName(QStringLiteral("TotPurchasesByNum"));
        groupBox_8 = new QGroupBox(TotPurchasesByNum);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(70, 50, 361, 281));
        pushButton_back_purchases = new QPushButton(groupBox_8);
        pushButton_back_purchases->setObjectName(QStringLiteral("pushButton_back_purchases"));
        pushButton_back_purchases->setGeometry(QRect(270, 240, 75, 23));
        stackedWidget->addWidget(TotPurchasesByNum);
        QtySold = new QWidget();
        QtySold->setObjectName(QStringLiteral("QtySold"));
        groupBox_9 = new QGroupBox(QtySold);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(40, 30, 431, 301));
        pushButton_back_qty = new QPushButton(groupBox_9);
        pushButton_back_qty->setObjectName(QStringLiteral("pushButton_back_qty"));
        pushButton_back_qty->setGeometry(QRect(340, 260, 75, 23));
        stackedWidget->addWidget(QtySold);
        Rebates = new QWidget();
        Rebates->setObjectName(QStringLiteral("Rebates"));
        groupBox_10 = new QGroupBox(Rebates);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(70, 50, 401, 271));
        pushButton_back_rebates = new QPushButton(groupBox_10);
        pushButton_back_rebates->setObjectName(QStringLiteral("pushButton_back_rebates"));
        pushButton_back_rebates->setGeometry(QRect(300, 230, 75, 23));
        stackedWidget->addWidget(Rebates);
        MembExp = new QWidget();
        MembExp->setObjectName(QStringLiteral("MembExp"));
        groupBox_11 = new QGroupBox(MembExp);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(50, 40, 431, 291));
        pushButton_back_expirations = new QPushButton(groupBox_11);
        pushButton_back_expirations->setObjectName(QStringLiteral("pushButton_back_expirations"));
        pushButton_back_expirations->setGeometry(QRect(330, 250, 75, 23));
        stackedWidget->addWidget(MembExp);
        ItemLookup = new QWidget();
        ItemLookup->setObjectName(QStringLiteral("ItemLookup"));
        groupBox_12 = new QGroupBox(ItemLookup);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(50, 30, 431, 301));
        pushButton_back_item_lookup = new QPushButton(groupBox_12);
        pushButton_back_item_lookup->setObjectName(QStringLiteral("pushButton_back_item_lookup"));
        pushButton_back_item_lookup->setGeometry(QRect(330, 260, 75, 23));
        stackedWidget->addWidget(ItemLookup);
        MemberLookup = new QWidget();
        MemberLookup->setObjectName(QStringLiteral("MemberLookup"));
        groupBox_13 = new QGroupBox(MemberLookup);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setGeometry(QRect(50, 40, 441, 311));
        pushButton_back_member_lookup = new QPushButton(groupBox_13);
        pushButton_back_member_lookup->setObjectName(QStringLiteral("pushButton_back_member_lookup"));
        pushButton_back_member_lookup->setGeometry(QRect(340, 260, 75, 23));
        stackedWidget->addWidget(MemberLookup);
        ConvertMembership = new QWidget();
        ConvertMembership->setObjectName(QStringLiteral("ConvertMembership"));
        groupBox_14 = new QGroupBox(ConvertMembership);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        groupBox_14->setGeometry(QRect(120, 90, 321, 231));
        pushButton_back_convert = new QPushButton(groupBox_14);
        pushButton_back_convert->setObjectName(QStringLiteral("pushButton_back_convert"));
        pushButton_back_convert->setGeometry(QRect(240, 200, 75, 23));
        SearchMembUpgrade = new QPushButton(groupBox_14);
        SearchMembUpgrade->setObjectName(QStringLiteral("SearchMembUpgrade"));
        SearchMembUpgrade->setGeometry(QRect(70, 40, 171, 61));
        SearchMembDowngrade = new QPushButton(groupBox_14);
        SearchMembDowngrade->setObjectName(QStringLiteral("SearchMembDowngrade"));
        SearchMembDowngrade->setGeometry(QRect(70, 120, 171, 61));
        stackedWidget->addWidget(ConvertMembership);
        AddItem = new QWidget();
        AddItem->setObjectName(QStringLiteral("AddItem"));
        groupBox_15 = new QGroupBox(AddItem);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        groupBox_15->setGeometry(QRect(100, 90, 351, 211));
        verticalLayoutWidget = new QWidget(groupBox_15);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 30, 171, 61));
        item = new QVBoxLayout(verticalLayoutWidget);
        item->setSpacing(6);
        item->setContentsMargins(11, 11, 11, 11);
        item->setObjectName(QStringLiteral("item"));
        item->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        item->addWidget(label);

        itemName = new QLineEdit(verticalLayoutWidget);
        itemName->setObjectName(QStringLiteral("itemName"));

        item->addWidget(itemName);

        verticalLayoutWidget_2 = new QWidget(groupBox_15);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(90, 100, 171, 61));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        itemPrice = new QLineEdit(verticalLayoutWidget_2);
        itemPrice->setObjectName(QStringLiteral("itemPrice"));

        verticalLayout->addWidget(itemPrice);

        message = new QLabel(groupBox_15);
        message->setObjectName(QStringLiteral("message"));
        message->setGeometry(QRect(110, 170, 131, 31));
        pushButton = new QPushButton(groupBox_15);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 170, 81, 31));
        pushButton_5 = new QPushButton(groupBox_15);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(270, 10, 75, 23));
        stackedWidget->addWidget(AddItem);
        RemoveItem = new QWidget();
        RemoveItem->setObjectName(QStringLiteral("RemoveItem"));
        groupBox_16 = new QGroupBox(RemoveItem);
        groupBox_16->setObjectName(QStringLiteral("groupBox_16"));
        groupBox_16->setGeometry(QRect(100, 140, 331, 161));
        verticalLayoutWidget_3 = new QWidget(groupBox_16);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(80, 40, 171, 61));
        item_2 = new QVBoxLayout(verticalLayoutWidget_3);
        item_2->setSpacing(6);
        item_2->setContentsMargins(11, 11, 11, 11);
        item_2->setObjectName(QStringLiteral("item_2"));
        item_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        item_2->addWidget(label_3);

        itemName_2 = new QLineEdit(verticalLayoutWidget_3);
        itemName_2->setObjectName(QStringLiteral("itemName_2"));

        item_2->addWidget(itemName_2);

        pushButton_2 = new QPushButton(groupBox_16);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 120, 101, 23));
        message_2 = new QLabel(groupBox_16);
        message_2->setObjectName(QStringLiteral("message_2"));
        message_2->setGeometry(QRect(20, 150, 131, 31));
        pushButton_6 = new QPushButton(groupBox_16);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(250, 10, 75, 23));
        verticalLayoutWidget_3->raise();
        pushButton_2->raise();
        message_2->raise();
        label_3->raise();
        itemName_2->raise();
        label_3->raise();
        pushButton_6->raise();
        stackedWidget->addWidget(RemoveItem);
        AddMember = new QWidget();
        AddMember->setObjectName(QStringLiteral("AddMember"));
        groupBox_17 = new QGroupBox(AddMember);
        groupBox_17->setObjectName(QStringLiteral("groupBox_17"));
        groupBox_17->setGeometry(QRect(40, 50, 381, 271));
        lineEdit_newName = new QLineEdit(groupBox_17);
        lineEdit_newName->setObjectName(QStringLiteral("lineEdit_newName"));
        lineEdit_newName->setGeometry(QRect(180, 50, 113, 20));
        label_4 = new QLabel(groupBox_17);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 50, 47, 13));
        lineEdit_newId = new QLineEdit(groupBox_17);
        lineEdit_newId->setObjectName(QStringLiteral("lineEdit_newId"));
        lineEdit_newId->setGeometry(QRect(180, 90, 113, 20));
        label_5 = new QLabel(groupBox_17);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 90, 91, 16));
        lineEdit_newMemType = new QLineEdit(groupBox_17);
        lineEdit_newMemType->setObjectName(QStringLiteral("lineEdit_newMemType"));
        lineEdit_newMemType->setGeometry(QRect(180, 130, 113, 20));
        label_6 = new QLabel(groupBox_17);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 130, 111, 16));
        lineEdit_newExpDate = new QLineEdit(groupBox_17);
        lineEdit_newExpDate->setObjectName(QStringLiteral("lineEdit_newExpDate"));
        lineEdit_newExpDate->setGeometry(QRect(180, 170, 113, 20));
        label_7 = new QLabel(groupBox_17);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 170, 141, 16));
        label_newMemStatus = new QLabel(groupBox_17);
        label_newMemStatus->setObjectName(QStringLiteral("label_newMemStatus"));
        label_newMemStatus->setGeometry(QRect(20, 240, 111, 21));
        pushButton_addFinish = new QPushButton(groupBox_17);
        pushButton_addFinish->setObjectName(QStringLiteral("pushButton_addFinish"));
        pushButton_addFinish->setGeometry(QRect(180, 220, 111, 31));
        pushButton_Exit = new QPushButton(groupBox_17);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(300, 10, 75, 23));
        stackedWidget->addWidget(AddMember);
        RemoveMember = new QWidget();
        RemoveMember->setObjectName(QStringLiteral("RemoveMember"));
        groupBox_19 = new QGroupBox(RemoveMember);
        groupBox_19->setObjectName(QStringLiteral("groupBox_19"));
        groupBox_19->setGeometry(QRect(150, 120, 281, 131));
        lineEdit_memberID = new QLineEdit(groupBox_19);
        lineEdit_memberID->setObjectName(QStringLiteral("lineEdit_memberID"));
        lineEdit_memberID->setGeometry(QRect(30, 70, 113, 20));
        label_8 = new QLabel(groupBox_19);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 40, 181, 31));
        pushButton_Delete = new QPushButton(groupBox_19);
        pushButton_Delete->setObjectName(QStringLiteral("pushButton_Delete"));
        pushButton_Delete->setGeometry(QRect(160, 60, 81, 31));
        label_deleted = new QLabel(groupBox_19);
        label_deleted->setObjectName(QStringLiteral("label_deleted"));
        label_deleted->setGeometry(QRect(10, 100, 191, 21));
        pushButton_3 = new QPushButton(groupBox_19);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 10, 75, 23));
        stackedWidget->addWidget(RemoveMember);
        RecommendUpgrade = new QWidget();
        RecommendUpgrade->setObjectName(QStringLiteral("RecommendUpgrade"));
        groupBox_18 = new QGroupBox(RecommendUpgrade);
        groupBox_18->setObjectName(QStringLiteral("groupBox_18"));
        groupBox_18->setGeometry(QRect(140, 100, 261, 191));
        stackedWidget->addWidget(RecommendUpgrade);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 855, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Signin", Q_NULLPTR));
        label_username->setText(QApplication::translate("MainWindow", "Username", Q_NULLPTR));
        label_password->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        pushButton_login->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        label_status->setText(QString());
        label_status_2->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Admin", Q_NULLPTR));
        pushButton_members->setText(QApplication::translate("MainWindow", "Manage members", Q_NULLPTR));
        pushButton_inventory->setText(QApplication::translate("MainWindow", "Manage inventory", Q_NULLPTR));
        pushButton_memberships->setText(QApplication::translate("MainWindow", "Memberships", Q_NULLPTR));
        pushButton_logout_admin->setText(QApplication::translate("MainWindow", "Logout", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Manager", Q_NULLPTR));
        pushButton_sales->setText(QApplication::translate("MainWindow", "Sales report (day)", Q_NULLPTR));
        pushButton_purchases->setText(QApplication::translate("MainWindow", "Total purchases by number", Q_NULLPTR));
        pushButton_qty->setText(QApplication::translate("MainWindow", "Qty sold by item name", Q_NULLPTR));
        pushButton_rebates->setText(QApplication::translate("MainWindow", "Rebates", Q_NULLPTR));
        pushButton_expirations->setText(QApplication::translate("MainWindow", "Membership expirations", Q_NULLPTR));
        pushButton_item_lookup->setText(QApplication::translate("MainWindow", "Item lookup", Q_NULLPTR));
        pushButton_member_lookup->setText(QApplication::translate("MainWindow", "Member lookup", Q_NULLPTR));
        pushButton_convert->setText(QApplication::translate("MainWindow", "Convert membership", Q_NULLPTR));
        pushButton_logout_manager->setText(QApplication::translate("MainWindow", "Logout", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Admin: Manage Members", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        addMemberButton->setText(QApplication::translate("MainWindow", "Add New Member", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Delete Member", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Admin: Manage Inventory", Q_NULLPTR));
        pushButton_back_inventory->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        pushButton_addItem->setText(QApplication::translate("MainWindow", "Add Item", Q_NULLPTR));
        pushButton_removeItem->setText(QApplication::translate("MainWindow", "Remove Item", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Admin: Manage Memberships", Q_NULLPTR));
        pushButton_back_memberships->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Manager: Sales Report", Q_NULLPTR));
        pushButton_back_report->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Manager: Total Purchases sorted by number", Q_NULLPTR));
        pushButton_back_purchases->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Manager: Quantity sold by item name", Q_NULLPTR));
        pushButton_back_qty->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "Manager: Rebates", Q_NULLPTR));
        pushButton_back_rebates->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "Manager: Manage membership expirations", Q_NULLPTR));
        pushButton_back_expirations->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("MainWindow", "Manager: Item Lookup", Q_NULLPTR));
        pushButton_back_item_lookup->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        groupBox_13->setTitle(QApplication::translate("MainWindow", "Manager: Member Lookup", Q_NULLPTR));
        pushButton_back_member_lookup->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        groupBox_14->setTitle(QApplication::translate("MainWindow", "Manager: Convert Membership", Q_NULLPTR));
        pushButton_back_convert->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        SearchMembUpgrade->setText(QApplication::translate("MainWindow", "Search Members for Upgrade", Q_NULLPTR));
        SearchMembDowngrade->setText(QApplication::translate("MainWindow", "Search Members for Downgrade", Q_NULLPTR));
        groupBox_15->setTitle(QApplication::translate("MainWindow", "Add Item", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Item Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Price", Q_NULLPTR));
        message->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Add Item", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        groupBox_16->setTitle(QApplication::translate("MainWindow", "Remove Item", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Item Name", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Delete Item", Q_NULLPTR));
        message_2->setText(QString());
        pushButton_6->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        groupBox_17->setTitle(QApplication::translate("MainWindow", "Add New Member", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "NAME", Q_NULLPTR));
        lineEdit_newId->setText(QApplication::translate("MainWindow", "EX. 12345", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "MEMBER TYPE", Q_NULLPTR));
        lineEdit_newExpDate->setText(QApplication::translate("MainWindow", "EX. MM/DD/YYYY", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "EXP. DATE", Q_NULLPTR));
        label_newMemStatus->setText(QString());
        pushButton_addFinish->setText(QApplication::translate("MainWindow", "Add Member", Q_NULLPTR));
        pushButton_Exit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        groupBox_19->setTitle(QApplication::translate("MainWindow", "Admin: delete member", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Enter member ID to delete", Q_NULLPTR));
        pushButton_Delete->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        label_deleted->setText(QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        groupBox_18->setTitle(QApplication::translate("MainWindow", "Upgrade Recommendations", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
