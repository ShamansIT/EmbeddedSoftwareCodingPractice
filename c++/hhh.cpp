#include <iostream>
#include <ctime>

void Initialise(int arr[], int size);
void Show(const int arr[], int size);
template <typename T>
void SelectionSort(T arr[], int size);
template <typename T>
void InsertionSort(T arr[], int size);
template <typename T>
void QuickSort(T arr[], int first, int last);
template <typename T>
bool BinarySearch(const T arr[], int size, T key);

int Factorial(int number);


int main() {

    srand((unsigned)time(nullptr));

    const int SIZE = 12;
    int arr[SIZE];

    Initialise(arr, SIZE);
    //SelectionSort(arr, SIZE);
    //InsertionSort(arr,SIZE);
    QuickSort(arr,0,SIZE-1);
    Show(arr,SIZE);

  /*  int numberForSearch;
    std::cout << "Enter search value:";
    std::cin >> numberForSearch;
    bool isFound = BinarySearch(arr, SIZE, numberForSearch);
    if(isFound)
        std::cout<< "Binary search result is true";
    else
        std::cout<< "Binary search result is false";
*/
    //Factorial count
    //std::cout<< std::endl << "!5 = " << Factorial(5);

    return 0;
}

template <typename T>
bool BinarySearch(const T arr[], int size, T key){
    int leftBound = 0, rightBound = size-1;
    do{
        int middle = arr[(leftBound+rightBound)/2];
        if(key < arr[middle])
            rightBound = middle-1;
        else if(key > arr[middle])
            leftBound = middle+1;
        else
            return true;
    }while(leftBound <= rightBound);
    return false;
}

template <typename T>
void QuickSort(T arr[], int first, int last){
    T middle = arr[(first+last)/2];
    int i=first, j=last;
    do{
        while (arr[i] < middle)
            i++;
        while (arr[j] > middle)
            j--;
        if(i<=j)
        {
            std::swap(arr[i],arr[j]);
            i++;
            j--;
        }
        if(j>first)
            QuickSort(arr,first,j);
        if(i<last)
            QuickSort(arr,i,last);
    } while (i <= j);
}

int Factorial(int number){
    return number == 0 ? 1 : number* Factorial(number-1);
}


template <typename T>
void SelectionSort(T arr[], int size){
    for (int i = 0; i < size-1; ++i)
        for (int j = i+1; j < size; ++j)
            if(arr[i]>arr[j])
                std::swap(arr[i], arr[j]);
}

void Initialise(int arr[], int size){
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 20;
    }
}

void Show(const int arr[], int size){
    for (int i = 0; i < size ; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void InsertionSort(T arr[], int size){
    for (int i = 1; i < size; ++i)
    {
        int key = arr[i];

        int j;
        for (j = i - 1; j >= 0 && arr[j] > key; --j)
            arr[j + 1]=arr[j];

        arr[j + 1]=key;
    }
}