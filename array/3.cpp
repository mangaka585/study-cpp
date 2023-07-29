/*
    Вывести в обратном порядке элементы массивов, что включены в двумерный массив с помощью функции.
*/

#include <iostream>

using namespace std;

void print(const int arr[][3], const size_t rowSize)
{
    const size_t columnSize = size(arr[0]);

    for (size_t i = rowSize; i > 0; i--)
    {
        for (size_t j = columnSize; j > 0; j--)
        {
            cout << arr[i - 1][j - 1] << "\t";
        }

        cout << endl;
    }
}

int main()
{

    int arr[][3]{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    const size_t rowSize{size(arr)};

    print(arr, rowSize);

    return 0;
}