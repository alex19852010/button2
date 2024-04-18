
#include "sound.h"

Sound::Sound(QPushButton *button, bool *b, QMediaPlayer *mediaPlayer) : QObject(), button(button),b(b), mediaPlayer(mediaPlayer)
{

}


void Sound::loadSound()
{
 if(*b)
 {
    button->setIcon(QIcon(":/image/icon-1728616_1280.jpg"));
    mediaPlayer->setMedia(QUrl("qrc:/image/o-privet.mp3"));
    mediaPlayer->play();
    qDebug() << *b;
 }
 else
 {
     button->setIcon(QIcon(":/image/icon-1728617_1280.jpg"));
     qDebug() << *b;
 }

 *b = !(*b);
}


