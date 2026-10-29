#include <iostream>
using namespace std;
int main()
{
    int s1, s2, s3, s4, s5;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    double per = (s1 + s2 + s3 + s4 + s5) / 500.0 * 100;

    if (per >= 90)
    {
        cout << "A+";
    }
    else if (per >= 75 && per < 90)
    {
        cout << "A";
    }
    else if (per >= 60 && per < 75)
    {
        cout << "B";
    }
    else if (per >= 50 && per < 60)
    {
        cout << "C";
    }
    else if (per >= 40 && per < 50)
    {
        cout << "D";
    }
    else
    {
        cout << "F";
    }

    return 0;
}