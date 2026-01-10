#include <iostream>
using namespace std;
// square pattern
//  Print 5x5 square of stars
//  *****
//  *****
//  *****
//  *****
//  *****

void squarePattern()
{
    for (int a = 1; a <= 5; a++)
    {
        for (int i = 1; i <= 5; i++)
        {
            cout << '*';
        }
        cout << endl;
    }
}

int main()
{
    squarePattern();
    return 0;
}