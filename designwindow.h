#ifndef DESIGNWINDOW_H
#define DESIGNWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>

QT_BEGIN_NAMESPACE
namespace Ui { class DesignWindow; }
QT_END_NAMESPACE

class DesignWindow : public QMainWindow
{
    Q_OBJECT

public:
    DesignWindow(QWidget *parent = nullptr);
    ~DesignWindow();

private slots:
    void copyTextToFile();

private:
    Ui::DesignWindow *ui;
};

#endif // DESIGNWINDOW_H
