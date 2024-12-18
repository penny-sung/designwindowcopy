#include "designwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DesignWindow w;  // 創建 DesignWindow 物件
    w.show();
    return a.exec();
}
