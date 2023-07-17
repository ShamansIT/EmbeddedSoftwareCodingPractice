#include <iostream>
#include <cstring>

class Student{

private:
    //fields
    char name[20] = "NoName";
    int age = 0;
    
    //method
public:
    void Show(){
        std::cout << "Name:" << name << std::endl;
        std::cout << "Age:" << age << std::endl;   
    }

    void ChangeAge(int newAge){
        if(newAge > 0){
        age = newAge;
        }
        else { 
        std::cout << "Error age enter" << std::endl;
        }
    }

    void ChangeName(const char* newName){
        if(newName != nullptr && std::strlen(newName) < 20){
        strncpy(name, newName, 20);
        }
        else {
        std::cout << "Error name input" << std::endl;
        }
    }
};

int main(){

    Student foxy;
    
    foxy.ChangeAge(-55);
    foxy.ChangeName("qwertyuiopasdfghjklqwertyuioasdfghjk");

    foxy.Show();

    foxy.ChangeAge(18);
    foxy.ChangeName("Olga");

    foxy.Show();

    //initializaton sample
    
    //pointers
    Student * pFoxy = & foxy;
    pFoxy -> ChangeAge(12);

    foxy.Show();  
 
    //const pointer
    Student * const ptrFoxy = &foxy;

    //on heap
    Student * heapFoxy = new Student;
    heapFoxy -> ChangeAge (58);
    heapFoxy ->Show();

    delete heapFoxy;

    //reference
    Student& refFoxy = foxy;
    refFoxy.ChangeAge(44);

    //array
    Student arr[3];

    return 0;
}