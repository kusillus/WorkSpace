#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
using namespace sf;
int main(){

    sf::RenderWindow ventana;
    ventana.create(sf::VideoMode(600,300,32),"Primer Juego",sf::Style::Default);
    //GameLoop
    while(ventana.isOpen())
    {
        sf::Event evento;
        while(ventana.pollEvent(evento))
        {
            switch(evento.type)
            {
                case sf::Event::Closed:
                    ventana.close();
                    break;
                case sf::Event::MouseEntered:
                    std::cout<<"El mouse entro en la pantalla"<<std::endl;
                    break;
                case sf::Event::MouseLeft:
                    std::cout<<"El mouse a salido de la pantalla"<<std::endl;
                    break;
                case sf::Event::MouseMoved:
                    std::cout<<"x :" <<evento.mouseMove.x<<"y :" <<evento.mouseMove.y <<std::endl;
                    break;
                case sf::Event::MouseButtonPressed:
                    if(evento.mouseButton.button==sf::Mouse::Left)
                        std::cout<<"Boton derecho precionado X: "<<evento.mouseButton.x<<" Y: "<<evento.mouseButton.y<<std::endl;

                    if(evento.mouseButton.button==sf::Mouse::Right)
                        std::cout<<"No debiste precionado eso!"<<std::endl;
                        break;
                case sf::Event::GainedFocus:
                    std::cout<<"window focus"<<std::endl;
                    break;
                case sf::Event::LostFocus:
                    std::cout<<"window not focus"<<std::endl;
                    break;
                case sf::Event::Resized:
                    std::cout<<"width: "<<evento.size.width<<" Height: "<<evento.size.height<<std::endl;
                    break;
                case sf::Event::TextEntered:
                    std::cout<<evento.text.unicode<<std::endl;
                    break;
            }

        }
        ventana.display();
    }

}
