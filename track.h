#ifndef TRACK_H
#define TRACK_H

#include <QBasicTimer>
#include <QFrame>
#include <QPointer>
#include <vector>
#include "driver.h"

class Track : public QFrame
{
    Q_OBJECT
public:
    Track(QWidget* parent = 0);
public slots:
    void start();
    void pause();
signals:
    void scoreChanged(int score);
    void levelChanged(int level);
    void linesRemovedChanged(int numLines);

protected:
    void paintEvent(QPaintEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
    void timerEvent(QTimerEvent *event) override;

private:
    void clearTrack();
    int timeoutTime();

    bool isStarted;
    bool isPaused;
    int level;
    int score;

    std::vector<Driver> drivers;
    QBasicTimer timer;

};

#endif // TRACK_H
