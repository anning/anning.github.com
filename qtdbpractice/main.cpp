#include "connectdatabase.h"
#include <QApplication>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    connectdatabase();

    return app.exec();
}
