#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
void Initialize(T arr[], int size);

template <typename T>
void Show(const T arr[], int size);

template <typename T>
void QuickSort(T arr[], int first, int last);

int main(){
    srand(unsigned(time(nullptr)));

    const int SIZE = 20;
    int arr[SIZE];

    Initialize(arr, SIZE);
    Show(arr,SIZE);
    QuickSort(arr, 0, SIZE-1);
    Show(arr,SIZE);
    
    return 0;
}

template <typename T>
void Initialize(T arr[], int size){
for (int i = 0; i < size; i++)
    arr[i] = rand() %40;
}

template <typename T>
void Show(const T arr[], int size){
for (int i = 0; i < size; i++)
    std::cout << arr[i] << " ";
std::cout << std::endl;

}

template <typename T>
void QuickSort(T arr[], int first, int last){
    T middle = arr[(first+last)/2];
    int i = first, j=last;

    do
    {
        while (arr[i]< middle)
            i++;
        while (arr[j]> middle)
            j--;
        if(i<=j){
        std::swap(arr[i],arr[j]);
        i++; j--;
        }
    } while (i<=j);

    if (i < last)
        QuickSort(arr, i, last);
    if (j > first)
        QuickSort(arr, first, j);
}