
#ifndef SOUND_H
#define SOUND_H

#pragma once
#include <QtWidgets>
#include <QPushButton>
#include <QPixmap>
#include <QObject>
#include <QSound>
#include <QMediaPlayer>
#include <QDebug>

class Sound : public QObject
{
    Q_OBJECT

public:
    Sound(QPushButton *button, bool *b, QMediaPlayer *mediaPlayer);



public slots:
       void loadSound();


private:

  QPushButton *button;
  bool *b;
  QMediaPlayer *mediaPlayer;

};

#endif // SOUND_H
