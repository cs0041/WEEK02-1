#include <iostream>

using namespace std;

int main()
{
    int a, b, c, sum;
    cin >> a >> b >> c;
    if ((a < 0 || a>30) || (b < 0 || b>30) || (c < 0 || c>40))
    {
        cout << "ERROR";
        return 0;
    }
    else
    {
        sum = a + b + c;
        if (sum >= 80 && sum <= 100)
        {
            cout << "A" << endl;
        }
        else if (sum >= 75 && sum <= 79)
        {
            cout << "B+" << endl;
        }
        else if (sum >= 70 && sum <= 74)
        {
            cout << "B" << endl;
        }
        else if (sum >= 65 && sum <= 69)
        {
            cout << "C+" << endl;
        }
        else if (sum >= 60 && sum <= 64)
        {
            cout << "C" << endl;
        }
        else if (sum >= 55 && sum <= 59)
        {
            cout << "D+" << endl;
        }
        else if (sum >= 50 && sum <= 54)
        {
            cout << "D" << endl;
        }
        else if (sum >= 0 && sum <= 49)
        {
            cout << "F" << endl;
        }
    }
    return 0;
}
