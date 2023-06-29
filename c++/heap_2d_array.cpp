#include <iostream>

void Show(const int* const* arr, int rows, int columns){
        for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {

    std::cout << "Enter rows:\t";
    int rows;
    std::cin >> rows;

    std::cout << "Enter columns:\t";
    int columns;
    std::cin >> columns;

    int** arr = new int *[rows];
    for (int i = 0; i < rows; i++)
        arr[i] = new int [columns]{};
    
    Show(arr, rows, columns);
    
    // clean memory

    for (int i = 0; i < rows; i++)
        delete[] arr[i];
    
    delete [] arr;

    return 0; 
}