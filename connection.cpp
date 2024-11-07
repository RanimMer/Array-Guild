#include <QApplication>
#include <QMessageBox>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "connection.h"



Connection::Connection(){}

bool Connection::createconnection()
{
db=QSqlDatabase::addDatabase("QODBC");
bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("projetCPP2A39");//inserer le nom de la source de données
db.setUserName("projetCPP2A39");//inserer nom de l'utilisateur
db.setPassword("esprit24");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}

void Connection::closeConnection(){db.close();}
