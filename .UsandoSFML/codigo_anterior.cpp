#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <SFML/Graphics.hpp>
using namespace std;
using sf::RenderWindow;

int main() {
    RenderWindow janela(sf::VideoMode(800, 600), "minha primeira janela");

    sf::Text teste;
    teste.setCharacterSize(24);
    teste.setFillColor(sf::Color::White);
    teste.setString("Olá mundo!");

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