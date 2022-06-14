#include <iostream>
#include "Input.h"

int main(int argc, char *argv[])
{
    Input *InputHandler = Input::Instantiate();

    int x;
    InputHandler->ForceInput(x);

    std::cout << "Your input is: " << x << std::endl;
}