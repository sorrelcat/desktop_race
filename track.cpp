#include "track.h"
#include <QtWidgets>

Track::Track(QWidget *parent)
    : QFrame(parent)
{
    setFrameStyle(QFrame::Panel | QFrame::Sunken);
    setFocusPolicy(Qt::StrongFocus);
    isStarted = false;
    isPaused = false;
    clearTrack();
}

int Track::timeoutTime() {
    return 1000 / (1 + level);
}

void Track::start() {
    if(isPaused) {
        return;
    }

    isStarted = true;
    score = 0;
    level = 0;

    clearTrack();
    timer.start(timeoutTime(), this);
}

void Track::pause() {
    if (!isStarted)
            return;

        isPaused = !isPaused;
        if (isPaused) {
            timer.stop();
        } else {
            timer.start(timeoutTime(), this);
        }
        update();
}

void Track::paintEvent(QPaintEvent *event) {
        QFrame::paintEvent(event);
        QPainter painter(this);
        QRect rect = contentsRect();

        if (isPaused) {
                painter.drawText(rect, Qt::AlignCenter, tr("Pause"));
                return;
        }
}


void Track::keyPressEvent(QKeyEvent *event)
{
    if (!isStarted || isPaused) {
        QFrame::keyPressEvent(event);
        return;
    }

    switch (event->key()) {
    case Qt::Key_Space:
        score++;
        break;
    default:
        QFrame::keyPressEvent(event);
    }
}

void Track::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == timer.timerId()) {
             timer.start(timeoutTime(), this);

        } else {
            QFrame::timerEvent(event);
        }
}

void Track::clearTrack() {
    drivers.erase(drivers.begin(), drivers.end());
}
