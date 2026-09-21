#include<SFML/Graphics.hpp>
#include"Player.hpp"

int main (){
    
    sf::RenderWindow window(sf::VideoMode({1280,720}),"GUI");
    unsigned int FPS = 120 ;
    window.setFramerateLimit(FPS);
    sf::Texture _texture;
    if(!_texture.loadFromFile(PLAYER_DEFAULT_SPRITE)){
        return EXIT_FAILURE;
    }
    My::Player player(_texture);

    while (window.isOpen())
    {
        while (std::optional event = window.pollEvent())
        {
            if(event->is<sf::Event::Closed>()){
                window.close();
            }
        }
    
        window.clear(sf::Color(50,50,50));
        player.playerDraw(window);
        window.display();
    }
    return 0;
}