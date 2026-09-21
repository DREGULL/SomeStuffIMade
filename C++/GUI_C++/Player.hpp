#pragma once


#define PLAYER_DEFAULT_SPRITE "C:/Users/abdou/Desktop/AHMED/SSIM/C++/GUI_C++/assets/texture/Box.png"

#include<iostream>
#include<SFML/Graphics.hpp>

namespace My{
    class Player{
        private:

            // sf::Sprite playerSprite;
            unsigned int health;
            unsigned int balance;
            sf::Texture *playerTexture;
            std::unique_ptr<sf::Sprite> playerSprite;
            sf::Vector2f playerPose;
            // ~Player();
            
        public:
            
            Player();
            Player(sf::Texture &_texture);
            unsigned int getHealth();
            unsigned int getPlayerBalance();
            sf::Vector2f getPlayerPose();
            sf::Sprite getPlayerSprite();
            void setTex(sf::Texture &_texture);
            void playerDraw(sf::RenderWindow &_window);
            
    };

}
