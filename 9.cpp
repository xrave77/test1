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
            cin >> matrix [i] [j];
        }
    }
    for (int k = 0; k < 3; k++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (matrix [i][k] && matrix [k][j])
                {
                    matrix [i] [j] = 1;
                }
            }
        }
    }
    cout << "\nBASTAR TARAYABI\n";
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i] [j] << " ";
        }
        cout << endl;
    }
}

// 9
// بستار ترایابی