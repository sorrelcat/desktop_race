#include "mainwindow.h"
#include <QApplication>
#include "track.h"
#include "racewindow.h"
#include "constants.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RaceWindow w;

    w.setFixedSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    w.setWindowTitle("Crazy Race");
    w.show();

    return a.exec();
}
