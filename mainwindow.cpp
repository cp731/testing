#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("/Users/clarephelps/login/sqlite-amalgamation-3150000/test.db");

    if(!mydb.open())
        ui->label->setText("Failed to open the database");
    else
        ui->label->setText("Connected....");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username, password;
    username =ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();

    if(!mydb.isOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }

    QSqlQuery qry;
    if(qry.exec("select * from users where username='"+username+"' and password='"+password+"'")){
        int count=0;
        while(qry.next()){
            count++;
        }
        if(count ==1){
            ui->label->setText("username and password is correct");
            ui->label->setText(username);

            this->hide();//hide login page
            EmployeeInfo e;
            e.setUser(username);
            e.setModal(true);
            e.exec();



        }
        if(count >1)
            ui->label->setText("Duplicate username and password");
        if(count <1)
            ui->label->setText("Incorrect username or password, please re-enter");
    }

}
