#ifndef PLAYER_H
#define PLAYER_H

#include <QWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>

QT_BEGIN_NAMESPACE
class QMediaPlayer;
QT_END_NAMESPACE

class Player : public QWidget
{
    Q_OBJECT

public:
    Player(QWidget *parent = 0);
    ~Player();

//private slots:
private:
    QMediaPlayer *player;
    QMediaPlaylist *playlist;
};

#endif // PLAYER_H
