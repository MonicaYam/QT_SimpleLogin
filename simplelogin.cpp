#include "simplelogin.h"
#include "ui_simplelogin.h"
#include <QMessageBox>


//set default value
QString SimpleLogin::username="test";
QString SimpleLogin::password="test";

SimpleLogin::SimpleLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SimpleLogin)
{
    ui->setupUi(this);
    connect(ui->signup, SIGNAL(clicked()), this,
            SLOT(signupClicked()));

    connect(ui->login, SIGNAL(clicked()), this,
            SLOT(loginClicked()));
}

SimpleLogin::~SimpleLogin()
{
    delete ui;
}



void SimpleLogin::signupClicked()
{
    username = ui->userNameForm->text();
    password = ui->passwordForm->text();
    QMessageBox::information(this, "Signup", "username and password is registered!");
}


void SimpleLogin::loginClicked()
{
    QString name = ui->userNameForm_l->text();
    QString pass = ui->passwordForm_l->text();

    if(username == name && password == pass){
        //
        QMessageBox::information(this, "Login", "username and password is correct");
        hide();
        secondDialog = new SecondDialog(username, this); //parent class is this class
        secondDialog->show();
    }else{
        QMessageBox::warning(this, "Login", "username and password is incorrect");
    }

}
