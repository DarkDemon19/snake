#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0, direccion = 0;
    
    
    while (true)
    {
        auto can = Canvas(300, 300);
        can.DrawPointCircleFilled(10, 10, 10);
        can.DrawBlockLine(0, 20, 400, 150);
        can.DrawBlockLine(0, 300, 150, 0);
        can.DrawPointCircle(100,50,frame);
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::DeepSkyBlue1,canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);
    
        if(frame<75){
        direccion=1;
        frame++;
        }
        else{
        direccion=-1;
        frame--;}
    }

    return 0;
}