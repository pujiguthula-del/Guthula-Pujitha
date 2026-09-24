#include <iostream>
using namespace std;

template <class T>
class Number
{
    T value;

public:
    Number(T v)
    {
        value = v;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Number<int> n1(10);
    Number<float> n2(12.5);
    Number<char> n3('A');

    n1.display();
    n2.display();
    n3.display();

    return 0;
}
