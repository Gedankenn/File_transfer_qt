#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_treeView_doubleClicked(const QModelIndex &index);

    void on_progressBar_valueChanged(int value);

    void on_lineEdit_returnPressed();

    void on_Connect_clicked();

    void on_create_server_clicked();

private:
    Ui::MainWindow *ui;

    QFileSystemModel *dirmodel;
    QFileSystemModel *listmodel;

};
#endif // MAINWINDOW_H
