
//Codigo para abrir una ventana
/*int main(){
    sf::Window ventana(sf::VideoMode(200,200,32),"mi ventana");
    ventana.setPosition(sf::Vector2i(170,50));//Definimos la posicion en pantalla de nuestra ventana
    //ventana.setSize(sf::Vector2u(640,480));//definimos el tamaño de la ventana
    ventana.setTitle("nuevo titulo de esta ventana");
    sf::Vector2u size =ventana.getSize();
    unsigned int width = size.x;
    unsigned int height =size.y;

while(ventana.isOpen()){
    sf::Event evento;
    while(ventana.pollEvent(evento)){//pollevent extrae el ultimo evento de la cola. lo devuelve si lo hay
        if(evento.type==sf::Event::Closed)
            ventana.close();
    }
}
return 0;
}
---------------------------------------------------------------------
sf::RenderWindow ventana;
    ventana.create(sf::VideoMode(600,300,32),"Primer Juego",sf::Style::Default);
    sf::Clock reloj;
    sf::Time tiempo;
    std::cout<<"Preciona una tecla"<<std::endl;

    std::cout<<tiempo.asSeconds()<<std::endl;
    /*
    sf::Vector2u size(400,400);
    std::cout<<size.x <<" "<<size.y<<std::endl;//imprimimos en consola
    ventana.setSize(sf::Vector2u(400,400));//Vector2u obtiene el tamaño de de la region de representacion de la ventana
    ventana.setTitle("nuevo titulo de ventana");
    ventana.setPosition(sf::Vector2i(50,100));//vector2i obtine la pocicion el la pantalla
    */
    /*
    //Game Loop
    std::string mensaje= "Hola te hablo de el mas alla!";
    std::string display= "";
    int index=0;
    ventana.setKeyRepeatEnabled(false);
    while(ventana.isOpen())
    {
        sf::Event evento;
        while(ventana.pollEvent(evento))
        {
            if(evento.type == sf::Event::Closed)
                ventana.close();
        if(evento.type==sf::Event::KeyPressed)
            {
                if(evento.key.code==sf::Keyboard::A)
                {
                    std::cout<<"Evento Activado"<<std::endl;
            //ventana.clear(Color::White);
            display +=mensaje[index];
            index++;
            system("cls");
            std::cout<<display;
            ventana.clear(Color::Blue);
                }
            }
        }
        ventana.display();
    }

*/

/*--------------------------------------------------------
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

                case sf::Event::Resized:
                    std::cout<<"width: "<<evento.size.width<<" Height: "<<evento.size.height<<std::endl;
                    break;
                case sf::Event::TextEntered:
                    std::cout<<evento.text.unicode<<std::endl;
                    break;
*/
