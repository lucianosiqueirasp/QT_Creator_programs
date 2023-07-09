#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_calcular_clicked()
{
    double resultado; //variável criada

    resultado=(ui->txt_valora->text().toDouble() + ui->txt_valorb->text().toDouble())/2;
    ui->txt_resultado->setText(QString::number(resultado));
}





void MainWindow::on_btn_fechar_clicked()
{
    this->close();
}

