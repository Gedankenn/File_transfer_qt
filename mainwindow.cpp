#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString sPath = "C:/";
    dirmodel = new QFileSystemModel(this);
    dirmodel->setRootPath(sPath);

    ui->treeView->setModel(dirmodel);

    listmodel = new QFileSystemModel(this);

    ui->listView->setModel(listmodel);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_treeView_doubleClicked(const QModelIndex &index)
{
    QString sPath = dirmodel->fileInfo(index).absoluteFilePath();

}


void MainWindow::on_progressBar_valueChanged(int value)
{

}


void MainWindow::on_lineEdit_returnPressed()
{
    QString str_ip = ui->lineEdit->text();
    qDebug() << str_ip;
    ui->lineEdit->clear();
}

void MainWindow::on_Connect_clicked()
{
    Socket sc;
    sc.Connect();
}


void MainWindow::on_create_server_clicked()
{

}

