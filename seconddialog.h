#ifndef SECONDDIALOG_H
#define SECONDDIALOG_H

#include <QDialog>

namespace Ui {
class SecondDialog;
}

class SecondDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecondDialog(QWidget *parent = nullptr);
    explicit SecondDialog(const QString& username, QWidget *parent = nullptr);
    ~SecondDialog();

private slots:
    void on_close_clicked();

private:
    Ui::SecondDialog *ui;
};

#endif // SECONDDIALOG_H
