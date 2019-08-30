#include <iostream>
void printstar(int n);
using namespace std;
int main()
{
    for (int i = 1; i < 11; i++)
    {
        int k = i;
        if (i % 2 != 0)
        {
            k++;
        }
        for (int j = 1; j < 11; j++)
        {
            if (j <= (10 - k) / 2 || j > 10 - ((10 - k) / 2))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
}