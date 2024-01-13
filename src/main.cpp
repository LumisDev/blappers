#include <SFML/Graphics.hpp>
#include <box2d/box2d.h>
int main(){
    sf::RenderWindow window(sf::VideoMode(640, 480), "Blappers!");
    b2::World world;
    while (window.isOpen()){
        sf::Event e;
        while(window.pollEvent(e)){
            if(e.type == sf::Event::Closed){
                window.close();
            }
        }
        window.clear();
        window.display()
    }
    return 0;
}