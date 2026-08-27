//WAP to count the number of objects using static data memberaso demonstrate the use of static member function in the program.
#include <iostream>
using namespace std;

class Demo
{
private:
    static int count;

public:
    Demo()
    {
        count++;
    }

    static void showCount()
    {
        cout << "Number of objects = " << count << endl;
    }
};

int Demo::count = 0;

int main()
{
    Demo obj1;
    Demo obj2;
    Demo obj3;

    Demo::showCount();

    return 0;
}