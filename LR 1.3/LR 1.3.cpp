#include <iostream>
#include <ctime>
using namespace std;

int Determinant(int array[3][3], int size)
{
    return array[0][0] * (array[1][1] * array[2][2] - array[1][2] * array[2][1])    //нахождение определителя по минорам квадратичной матрицы
        - array[0][1] * (array[1][0] * array[2][2] - array[1][2] * array[2][0])
        + array[0][2] * (array[1][0] * array[2][1] - array[1][1] * array[2][0]);
}

int main()
{
    srand(time(0));
    int array[3][3];
    int size = 3;
    cout << array[3][3] << " ";
    cout << endl;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            array[i][j] = rand() % 10;// автозаполнение числами 
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "    " << array[i][j];
        }
        cout << endl;
    }
    cout << "Determinant: " << Determinant(array, size);
    cout << endl;
    system("pause");
    return 0;
}
