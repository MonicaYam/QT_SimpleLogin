#ifndef SIMPLELOGIN_H
#define SIMPLELOGIN_H

#include <QMainWindow>
#include "seconddialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class SimpleLogin; }
QT_END_NAMESPACE

class SimpleLogin : public QMainWindow
{
    Q_OBJECT

public:
    static QString username;
    static QString password;
    SimpleLogin(QWidget *parent = nullptr);
    ~SimpleLogin();

private slots:
    void loginClicked();
    void signupClicked();

private:
    Ui::SimpleLogin *ui;
    SecondDialog *secondDialog;
};
#endif // SIMPLELOGIN_H
