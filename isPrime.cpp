#include <iostream>
using namespace std;

bool isPrime (int number)
{
    int number_Of_Dividers = 0;

    for (int divider = 1; divider <= number; divider++)
    {
        if (number % divider == 0)
            number_Of_Dividers++;
        if (number_Of_Dividers == 3)
            break;
    }

    if (number_Of_Dividers == 2)
    {
        cout << number << " is a Prime" << endl;
        return true;
    }
    else
    {
        cout << number << " is a Composite" << endl;
        return false;
    }
}

int main ()
{
    for(int i = 0; i < 100; ++i)
        isPrime (i);
    
    int num1 = 0;
    
    while (-1 != num1)
    {
        cout << "Enter any number: ";
        cin >> num1;
        if(-1 == num1) break;
        isPrime (num1);
        cout << "Enter -1 for exit" << endl;
    }
    
    return 0;
}
