#include <guiekspedisi.h>
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    guiEkspedisi g;
    g.show();
    return a.exec();
}
