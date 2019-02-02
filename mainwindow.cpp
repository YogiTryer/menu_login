#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow:: on_LoginButton_clicked()
{
   QString Susername = ui->Username->text();
   QString Spassword = ui->Password->text();

   if(Susername ==  "test" && Spassword == "test") {
          // QMessageBox::information(this, "Login", "Username and password is correct");
           //hide();
           secDialog = new SecDialog(this);
           secDialog->show();
       }
       else {
           QMessageBox::warning(this,"Login", "Username and password is not correct");
       }
}
