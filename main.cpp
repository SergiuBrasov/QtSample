#include <QApplication>
#include <QFrame>
#include <QSvgWidget>
#include <QVBoxLayout>

//================================================================
int main(int argc, char** argv){
    QApplication app(argc, argv);

    QFrame mainWnd;

    //QSvgWidget svgWgt(R"(C:\Prj\QtSvg\tst\01.svg)");
    QSvgWidget svgWgt(R"(C:\Prj\QtSvg\tst\anime-girl.svg)");

    QVBoxLayout lay(&mainWnd);
    lay.addWidget(&svgWgt);

    mainWnd.show();

    return app.exec();
}