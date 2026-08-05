#include <iostream>
using namespace std;

class Outer
{
private:
    int outerData = 100;

public:
    void show()
    {
        cout << "Outer data: " << outerData << endl;
    }

    class inner
    {
    public:
        void display()
        {
            cout << "Inner class function called." << endl;
        }
    };
};

int main()
{
    Outer::inner obj;
    obj.display();

    Outer out;
    out.show();

    return 0;
}
