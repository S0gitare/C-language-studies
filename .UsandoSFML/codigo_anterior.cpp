#include <SFML/Graphics.hpp>

using sf::RenderWindow;

int main() {
    RenderWindow janela(sf::VideoMode(800, 600), "minha primeira janela");

    while (janela.isOpen()) {
        sf::Event event;
        while (janela.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                janela.close();
            }
        }
        janela.clear(sf::Color::Black);
        janela.display();
    }

    return 0;
}