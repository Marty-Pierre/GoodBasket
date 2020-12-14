#include <QApplication>
#include <QMainWindow>

using namespace std;

int main(int argc, char *argv[]){
    QApplication app(argc,argv);
    QMainWindow* appli = new QMainWindow();
    appli->show();

    return app.exec();
}
    

