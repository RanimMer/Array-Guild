#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "employe.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void on_pushButton_ajouter_clicked();
    void on_pushButton_supprimer_clicked();

private:
    Ui::MainWindow *ui;
    employe E;
};

#endif // MAINWINDOW_H
