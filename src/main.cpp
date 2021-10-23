#include <iostream>
#include "Input.h"

int main(int argc, char *argv[])
{
    Input* i = Input::Instantiate();
    
    std::cin.get();
}