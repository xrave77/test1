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
            cin >> matrix[i][j];
        }
    }
    
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << !matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// 13
// ماتریس مجاورت را گرفته و ماتریس متمم آن در خروجی چاپ کنید