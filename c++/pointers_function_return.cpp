#include <iostream>

void Initialize(int arr[], int size, int (*initialize)());
void Show(const int arr[], int size, void (*showFunction)(int element));
int* FindMax(int arr[], int size);

int GetValue1_100();

void ShowElement(int element);

int main() {

    const int SIZE = 10;
    int arr[SIZE];

    Initialize(arr,SIZE, GetValue1_100);
    Show(arr, SIZE, ShowElement);

    int* maxElement = FindMax(arr,SIZE);

    std::cout << "max element address = " << maxElement << std::endl;
    std::cout << "max element = " << *maxElement << std::endl;

    *maxElement = 0;
    Show(arr, SIZE, ShowElement);

    return 0;
}

int* FindMax(int arr[], int size){
    int* maxAddress = arr;
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if(max > arr[i]){
            max = arr[i];
            maxAddress = &arr[i];
        }
    }
    
    return maxAddress;
}

int GetValue1_100(){
    return rand() % 100 + 1;
}

void ShowElement(int element){
    std::cout << element << " ";
}

void Show(const int arr[], int size, void (*showFunction)(int element)){
    for (int i = 0; i < size; i++)
        showFunction(arr[i]);
    std::cout << std::endl;
}

void Initialize(int arr[], int size, int (*initialize)()){
    for (int i = 0; i < size; i++)
        arr[i] = initialize();    
}