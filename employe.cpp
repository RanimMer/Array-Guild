#include <QApplication>
#include <QApplication>
#include <QMessageBox>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "employe.h"



employe::employe(QString nom,QString prenom,QString date_embauche,QString mot_de_passe,int id)
{
   this->nom=nom;
   this->prenom=prenom;
   this->date_embauche=date_embauche;
   this->mot_de_passe=mot_de_passe;
   this->id=id;
}


bool employe::ajouter()
{
    QSqlQuery query;
    QString res=QString::number(id);
    query.prepare("ajouter un employé (nom,prenom,date,mot de passe,id)");
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":date",date_embauche);
    query.bindValue(":mot_de_passe",mot_de_passe);
    query.bindValue(":id",res);

    return query.exec();
}


bool employe::supprimer(int id)
{
    QSqlQuery query;
    QString res=QString::number(id);

    query.prepare("Delete from employe where ID= :id");
    query.bindValue(":id",res);

    return query.exec();
}

QSqlQueryModel * employe::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setHeaderData(0,QT::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(1,QT::Horizontal,QObject::tr("Prenom"));
    model->setHeaderData(2,QT::Horizontal,QObject::tr("Date_d'embauche"));
    model->setHeaderData(3,QT::Horizontal,QObject::tr("Mot de passe"));
    model->setHeaderData(4,QT::Horizontal,QObject::tr("Id"));

    return  model;
}
