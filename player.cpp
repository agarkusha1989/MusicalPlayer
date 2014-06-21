#include "player.h"

#include <QMediaService>
#include <QMediaPlaylist>
#include <QtWidgets>

Player::Player(QWidget *parent)
    : QWidget(parent)
{
    // create player
    player = new QMediaPlayer(this);
    playlist = new QMediaPlaylist();
    player->setPlaylist(playlist);

    // create controlls elements

}
Player::~Player()
{
}
