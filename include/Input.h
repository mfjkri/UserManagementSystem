#include <iostream>
#include <numeric>

class Input
{
public:
    template <typename T>
    void ForceInput(T &inputVar)
    {
        WaitUntilInput(inputVar);
    }

    static Input *Instantiate();

    Input(const Input &) = delete;
    Input &operator=(const Input &) = delete;
    Input(Input &&) = delete;

private:
    template <typename T>
    void WaitUntilInput(T &rInputVar)
    {
        while (!(std::cin >> rInputVar))
        {
            std::cout << "You have entered an invalid input. Please try again!\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
    }

    Input();
};