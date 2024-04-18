#include "mainwindow.h"
#include <QPushButton>
#include <QPixmap>
#include <QIcon>
#include <QDebug>
#include <QtWidgets>
#include <QApplication>
#include "sound.h"
#include <QSound>
#include <QMediaPlayer>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPushButton button;
    button.setIcon(QIcon(":/image/icon-1728617_1280.jpg"));
    button.setIconSize(button.size());
    bool b = 1;
    QMediaPlayer mediaPlayer;
    Sound sound(&button, &b, &mediaPlayer);
    QObject::connect(&button, &QPushButton::clicked, &sound, &Sound::loadSound);

    button.show();

    return a.exec();

}
