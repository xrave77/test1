#include <iostream>
using namespace std;
int main()
{
    int Satr, Soton;
    cout << "Matrix chand dar chand bashad? ";
    cin >> Satr >> Soton;

    int ** Matrix = new int* [Satr];
    for (int i = 0; i < Satr; i++)
    {
        cout << "Satr " << i + 1 << ": ";
        Matrix[i] = new int[Soton];
        for (int j = 0; j < Soton; j++)
        {
            cin >> Matrix[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < Satr; i++)
    {
        int count = 0;
        for (int j = 0; j < Soton; j++)
        {
            if (Matrix[i][j] == 1)
            {
                count++;
            }
        }
        cout << "Derege Raes " << i + 1 << ": " << count << endl;
    }
}


// 12
// ماتریس مجاورت را گرفته و درجه گره ها را در خروجی چاپ کنید