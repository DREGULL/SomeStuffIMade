// #pragma once 
#include"Player.hpp"


My::Player::Player(sf::Texture &_texture): health(100), balance(0),playerPose(0.f,0.f),playerTexture(&_texture){
    playerSprite = std::make_unique<sf::Sprite>(*playerTexture);
}

My::Player::Player(): health(100), balance(0),playerPose(0.f,0.f) {}

namespace My{
    unsigned int Player::getHealth(){
        return this->health;
    }
     unsigned int Player::getPlayerBalance(){
        return this->balance;
    }
    sf::Vector2f Player::getPlayerPose(){
        return this->playerPose;
    }
    void Player::setTex(sf::Texture &_texture){
        *this->playerTexture = _texture;
    }
    void Player::playerDraw(sf::RenderWindow &_window){
        _window.draw(*playerSprite);
    }

}