/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QTabWidget *Login;
    QWidget *tab;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPlainTextEdit *plainTextEdit_6;
    QPlainTextEdit *plainTextEdit_7;
    QPushButton *pushButton_3;
    QWidget *tab_2;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;
    QPlainTextEdit *plainTextEdit_3;
    QPlainTextEdit *plainTextEdit_4;
    QPlainTextEdit *plainTextEdit_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1202, 639);
        MainWindow->setContextMenuPolicy(Qt::ActionsContextMenu);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-10, 10, 301, 601));
        QFont font;
        font.setFamilies({QString::fromUtf8("Palatino Linotype")});
        font.setPointSize(24);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color:#003049;\n"
"color:white\n"
""));
        Login = new QTabWidget(centralwidget);
        Login->setObjectName(QString::fromUtf8("Login"));
        Login->setGeometry(QRect(290, 20, 891, 581));
        Login->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 80, 361, 81));
        label_7->setFont(font);
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 250, 381, 81));
        label_8->setFont(font);
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(440, 100, 281, 51));
        label_9->setFont(font);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 400, 541, 61));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 460, 851, 61));
        pushButton_2->setFont(font);
        plainTextEdit_6 = new QPlainTextEdit(tab);
        plainTextEdit_6->setObjectName(QString::fromUtf8("plainTextEdit_6"));
        plainTextEdit_6->setGeometry(QRect(400, 100, 351, 41));
        plainTextEdit_6->setStyleSheet(QString::fromUtf8("border: 3px solid #fcbf49;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        plainTextEdit_7 = new QPlainTextEdit(tab);
        plainTextEdit_7->setObjectName(QString::fromUtf8("plainTextEdit_7"));
        plainTextEdit_7->setGeometry(QRect(430, 280, 351, 41));
        plainTextEdit_7->setStyleSheet(QString::fromUtf8("border: 3px solid #fcbf49;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 330, 261, 61));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"background-color:#F77100;\n"
"color: white;\n"
"padding: 5px;"));
        Login->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 440, 261, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Palatino Linotype")});
        font1.setPointSize(16);
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("background-color:#eae2b7;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 60, 71, 51));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("background-color:#eae2b7;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(0, 160, 121, 51));
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("background-color:#eae2b7;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(0, 260, 211, 51));
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("background-color:#eae2b7;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 350, 271, 41));
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("background-color:#eae2b7;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(280, 70, 351, 41));
        plainTextEdit->setStyleSheet(QString::fromUtf8("border: 3px solid #fcbf49;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        plainTextEdit_2 = new QPlainTextEdit(tab_2);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(280, 170, 351, 41));
        plainTextEdit_2->setStyleSheet(QString::fromUtf8("border: 3px solid #fcbf49;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        plainTextEdit_3 = new QPlainTextEdit(tab_2);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(280, 260, 351, 41));
        plainTextEdit_3->setStyleSheet(QString::fromUtf8("border: 3px solid #fcbf49;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        plainTextEdit_4 = new QPlainTextEdit(tab_2);
        plainTextEdit_4->setObjectName(QString::fromUtf8("plainTextEdit_4"));
        plainTextEdit_4->setGeometry(QRect(290, 350, 351, 41));
        plainTextEdit_4->setStyleSheet(QString::fromUtf8("border: 3px solid #fcbf49;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        plainTextEdit_5 = new QPlainTextEdit(tab_2);
        plainTextEdit_5->setObjectName(QString::fromUtf8("plainTextEdit_5"));
        plainTextEdit_5->setGeometry(QRect(300, 440, 351, 41));
        plainTextEdit_5->setStyleSheet(QString::fromUtf8("border: 3px solid #fcbf49;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        Login->addTab(tab_2, QString());
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 70, 261, 61));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"background-color:#003049;\n"
"color: white;\n"
"padding: 5px;"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 170, 261, 61));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
"background-color:#003049;\n"
"color: white;\n"
"padding: 5px;"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 280, 261, 61));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("\n"
"background-color:#003049;\n"
"color: white;\n"
"padding: 5px;"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 390, 261, 61));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("\n"
"background-color:#003049;\n"
"color: white;\n"
"padding: 5px;"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(20, 490, 261, 61));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("\n"
"background-color:#003049;\n"
"color: white;\n"
"padding: 5px;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1202, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        Login->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "donnez votre identifiant", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "donnez votre mot de passe", nullptr));
        label_9->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Vous avez oubli\303\251 le mot de passe ?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "D\303\251sol\303\251 cet cet identifiant n'existe pas. Creez une compte", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        Login->setTabText(Login->indexOf(tab), QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Choisir un identifiant", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Pr\303\251nom", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Date de naissance", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Choisir un mot de passe", nullptr));
        Login->setTabText(Login->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Creer une compte", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Employ\303\251s", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Clients", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Fournisseurs", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Produits", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Promotions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
