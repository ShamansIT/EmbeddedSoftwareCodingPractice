#include <iostream>

class A
{
private:
    int a;
    double b;

public:
    //default constructor
    A(){
        std::cout << "Default constructor\n";       
    }

    //User constructor
    A(int value, double point)
        :a(value), b(point)
    {
        std::cout << "User constructor\n";       
    }

    //copy constructor    
    A(const A& other)
    {
         std::cout << "Copy constructor\n";         
    }

    //move constructor    
    A(A&& other)
    {
         std::cout << "Move constructor\n";         
    }

    ~A(){
        std::cout << "Destructor\n";
    }

    A& operator=(const A& other)
    {
        this->a = other.a;
        this->b = other.b;
        
        std::cout << "Copy assigment operator\n";  

        return *this;        
    }

    A& operator=(A&& other)
    {
        this->a = other.a;
        this->b = other.b;
        
        std::cout << "Move assigment operator\n";  

        return *this;        
    }
};


int main(int argc, char const *argv[])
{
    A object1;
    A object2(2, 22.2);
    A object3 { object1 };
    A object4 { std::move(object2) };
    A object5;
    object5 = object1;
    object5 = std::move(object1);

    std::cout << "\nPointer init\n";

    A* ptr1;
    A* ptr2 = new A();
    ptr2 = ptr1;
    A ptr3 { std::move(*ptr1) };

    return 0;
}
