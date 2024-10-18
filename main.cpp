#include <Foco.hpp>
#include <iostream>

int main(int argc, char const *argv[])
{
    Foco foco1;
    Foco foco2;

   
    foco1.Encender(); 
    std::cout<<"Encendiendo Foco"<<std::endl;
    foco1.Apagar();
    std::cout<<"Apagando Foco"<<std::endl;

    return 0;
}
