#include "seconddialog.h"
#include "ui_seconddialog.h"

SecondDialog::SecondDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondDialog)
{
    ui->setupUi(this);
}
SecondDialog::SecondDialog(const QString& username, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondDialog)
{
    //set window size
    this->setFixedSize(397,277);
    ui->setupUi(this);
    //set username in usernameForm
    ui->usernameForm->setText(username);
}

SecondDialog::~SecondDialog()
{
    delete ui;
}

void SecondDialog::on_close_clicked()
{
    //close window
    close();
}

