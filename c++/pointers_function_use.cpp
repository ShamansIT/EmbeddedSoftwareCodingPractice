#include <iostream>

void Initialize(int arr[], int size, int (*initialize)());
void Show(const int arr[], int size, void (*showFunction)(int element));

int GetValue1_10();
int GetValue20_30();


void ShowElement(int element);
void ShowElementInBrackets(int element);
void ShowElementInSquareBrackets(int element);

int main() {

    const int SIZE = 10;
    int arr[SIZE];

    Initialize(arr,SIZE, GetValue1_10);

    Show(arr, SIZE, ShowElement);
    Show(arr, SIZE, ShowElementInBrackets);
    Show(arr, SIZE, ShowElementInSquareBrackets);

    Initialize(arr,SIZE, GetValue20_30);
    Show(arr, SIZE, ShowElement);
    
    return 0;
}

int GetValue1_10(){
    return rand() % 10 + 1;
}

int GetValue20_30(){
    return rand() % (30-20) + 20;
}


void ShowElement(int element){
    std::cout << element << " ";
}

void ShowElementInBrackets(int element){
    std::cout << "(" << element << ") ";
}

void ShowElementInSquareBrackets(int element){
    std::cout << "[" << element << "] ";
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

