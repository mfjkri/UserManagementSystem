#include "Input.h"

Input *Input::Instantiate()
{
    static Input *input = new Input();
    return input;
}

Input::Input() = default;