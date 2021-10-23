#include <iostream>

class Input {
public:

    static Input* Instantiate();

    Input(const Input& c) = delete;
    Input(Input&& m) = delete;
    
private:

    Input();
    
};