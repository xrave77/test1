#include <iostream>
using namespace std;
int main()
{
    int matrix [3] [3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Satr " << i + 1 << ": ";

        for (int j = 0; j < 3; j++)
        {
            cin >> matrix [i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 1)
            {
                count++;
            }
        }
        cout << "Derege Raes " << i + 1 << ": " << count << endl;;
    }
}

// 12
// ماتریس مجاورت را گرفته و درجه گره ها را در خروجی چاپ کنید