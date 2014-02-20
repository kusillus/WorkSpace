#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
using namespace sf;
int main(){

    sf::RenderWindow ventana;
    ventana.create(sf::VideoMode(600,300,32),"Usa W,A,S,D",sf::Style::Default);

    sf::Texture ptexture;
    sf::Sprite spersonaje;
    int x=0,y=0,x1=0,y1=0;
    if(!ptexture.loadFromFile("image.png"))
        std::cout<<"El Archivo no ha cargado"<<std::endl;
    spersonaje.setTexture(ptexture);
    ventana.setKeyRepeatEnabled(true);
    //spersonaje.setTextureRect(1,32,32,32,32)




    //GameLoop
    while(ventana.isOpen())
    {
        spersonaje.setPosition(x,y);//le damos a nuestro sprite una pocicion en la pantalla
        sf::Event evento;
        while(ventana.pollEvent(evento))
        {
            switch(evento.type)
            {
                case sf::Event::Closed:
                    ventana.close();
                    break;

                case sf::Event::KeyPressed:/*
                    //Movemos el Sprite con las teclas
                    //Comparamos la tecla ingresada con su caracter en unicode
                    /*if(evento.text.unicode==22)
                        std::cout<<"W"<<std::endl;
                    else if(evento.text.unicode==0)
                        std::cout<<"A"<<std::endl;
                    else if(evento.text.unicode==18)
                        std::cout<<"S"<<std::endl;
                    else if(evento.text.unicode==3)
                            std::cout<<"D"<<std::endl; */
                    //Movemos el sprite comparando con el teclado la tecla que presionamos
                    //else
                        //if(sf::Keyboard::Up)

                    if(evento.key.code==sf::Keyboard::A)
                        x1=1,y1=1,x=x-10;//al mover, le asignamos al sprite la textura en una pocicion dependiendo de la direccion.
                    else if(evento.key.code==sf::Keyboard::D)
                        x1=1,y1=2,x=x+10;
                    else if(evento.key.code==sf::Keyboard::W)
                        x1=1,y1=3,y=y-10;
                    else if(evento.key.code==sf::Keyboard::S)
                        x1=1,y1=0,y=y+10;
                    else y1=3;//if(evento.key.code==sf::Keyboard::isKeyPressed(else))
                    break;

                case sf::Event::GainedFocus:
                    std::cout<<"window focus"<<std::endl; //enfocamos la ventana!
                    break;
                case sf::Event::LostFocus:
                    std::cout<<"window not focus"<<std::endl;//no enfocamos la ventana!
                    break;
            //Prueba de coneccion de Joystick
                case sf::Event::JoystickConnected:
                    std::cout<<"Joystick "<<evento.joystickConnect.joystickId+1<<" Esta Conectado"<<std::endl;
                    break;
                case sf::Event::JoystickDisconnected:
                    std::cout<<"Joystick "<<evento.joystickConnect.joystickId+1<<" Esta Desconectado"<<std::endl;
                    break;
            //Prueba de movimiento de Joystick
                case sf::Event::JoystickButtonPressed:
                    //if(evento.joystickButton.button==2)
                        //if(evento.joystickMove.position>90)
                    std::cout<<"Boton: "<<evento.joystickButton.button<<std::endl;
                    /*
                    x=x+10;
                    std::cout<<"Acabas de atacar!"<<std::endl;
                    if(evento.joystickButton.button==1)
                    std::cout<<"Acabas de Bloquear!"<<std::endl;
                    if(evento.joystickButton.button==0)
                    std::cout<<"Acabas de Saltar!"<<std::endl;*/
                    break;
                    //Moviendo Flechas de Joystick

                case sf::Event::JoystickMoved:
                    if(evento.joystickMove.axis==sf::Joystick::X)
                        if(evento.joystickMove.position>90)
                            x=x+30;
                        else if(evento.joystickMove.position<-90)
                            x=x-30;
                        std::cout<<"Movimiento en X: "<<evento.joystickMove.position<<std::endl;

                    if(evento.joystickMove.axis==sf::Joystick::Y)
                        if(evento.joystickMove.position>90)
                        y=y+30;
                        else if(evento.joystickMove.position<-90)
                        y=y-30;
                        std::cout<<"Movimiento en Y: "<<evento.joystickMove.position<<std::endl;
                    break;


            }

        }

        //Animacion del sprite
        x1++;
        if(x1*32>=ptexture.getSize().x)
            x1=0;

        spersonaje.setTextureRect(sf::IntRect(32*x1,32*y1,32,32));
        ventana.draw(spersonaje);
        ventana.display();
        ventana.clear();
    }

}
