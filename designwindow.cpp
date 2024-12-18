#include "designwindow.h"
#include "ui_designwindow.h"

DesignWindow::DesignWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DesignWindow)
{
    ui->setupUi(this);

    // 連接按鈕信號與槽函數
    connect(ui->pushButton, &QPushButton::clicked, this, &DesignWindow::copyTextToFile);
}

DesignWindow::~DesignWindow()
{
    delete ui;
}

void DesignWindow::copyTextToFile()
{
    QString text = ui->lineEdit->text();  // 從輸入框獲取文字

    QFile file("C:/qt_hw/designwindow/test.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream stream(&file);
        stream << text;  // 將文字寫入文件
        file.close();
    }
}
