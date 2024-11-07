#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <QApplication>
#include <QMessageBox>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class employe
{
    QString nom,prenom,date_embauche,mot_de_passe;
    int id;
public:
    employe(){};
    employe(QString,QString,QString,QString,int);
    QString getNom(){return nom;}
    QString getPrenom(){return prenom;}
    QString getDate_naissance(){return date_embauche;}
    QString getMot_de_passe(){return mot_de_passe;}
    int getId(){return id;}

    void setNom(QString n){nom=n;}
    void setPrenom(QString p){prenom=p;}
    void setDate_naissance(QString d){date_embauche=d;}
    void setMot_de_passe(QString m){mot_de_passe=m;}
    void setId(int id){this->id=id;}

    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
};

#endif // EMPLOYE_H
