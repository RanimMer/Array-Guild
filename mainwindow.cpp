#include <QApplication>
#include <QMessageBox>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "employe.h"


/*MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}*/

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_ajouter_clicked()
{
    int id=ui->plainTextEdit_Id->QPlainTextEdit().toInt();

    employe E(nom,prenom,date_embauche,mot_de_passe,id);

    bool test =E.ajouter();

    if(test)
    {
        ui->tableView->setModel(E.afficher());
        QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("ajout effectué\n""click cancel to exit"),QMessageBox::Cancel);
    }

    else
    {

        QMessageBox::critical nullptr, QObject::tr(("Not OK"),QObject::tr("Ajout non effectué\n""click cancel to exit"), QMessageBox::Cancel);
    }


}


void MainWindow::on_pushButton_supprimer_clicked()
{
    int id=ui->plainTextEdit_Id->QPlainTextEdit().toInt();
    bool test=E.supprimer(id);

    if(test)
    {
        ui->tableView->setModel(E.afficher());

        QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("suppression effectuée\n""click cancel to exit"),QMessageBox::Cancel);
    }

    else
    {
         QMessageBox::critical nullptr, QObject::tr(("Not OK"),QObject::tr("Suppression non effectuée\n""click cancel to exit"), QMessageBox::Cancel);
    }
}


MainWindow::MainWindow(QWidget *parent):
{
    QMainWindow(parent),
    ui(new Ui::MainWindow);

    {
        ui->setupUi(this);
        ui->tableView->setModel(E.afficher());
    }
}
