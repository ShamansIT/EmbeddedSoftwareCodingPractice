#include <iostream>

//Aggregation
class Snake{
private:
    int length;

public:
    void GetStatus(){
        std::cout << "Snake steel alive!" << std::endl;
    }
    Snake(): length(12){
        std::cout << "Snake constructor" << std::endl;
    }
    ~Snake(){
        std::cout << "Snake destructor" << std::endl;
    }
};

class Field{
private:
    int size = 10;

public:
    Field(const Snake& snake) : size(10) {
        std::cout << "Field constructor" << std::endl;
    }
    ~Field(){
        std::cout << "Field destructor" << std::endl;
    }
};

//Composition



class Window{
public:
    Window(){
        std::cout << "Windows constructor" << std::endl;
    }
    ~Window(){
        std::cout << "Windows destructor" << std::endl;
    }
};

class People{
public:
    People(){
        std::cout << "People constructor" << std::endl;
    }
    ~People(){
        std::cout << "People destructor" << std::endl;
    }
};

class Roof{
public:
    Roof(){
        std::cout << "Roof constructor" << std::endl;
    }
    ~Roof(){
        std::cout << "Roof destructor" << std::endl;
    }
};

class House{
public:
    Window* window;
    People* people;
    Roof roof;
    House(int windowCount, int peopleCount)
        : window(new Window[windowCount]), people(new People[peopleCount])
    {
        std::cout << "House constructor" << std::endl;
    }
    ~House(){
        std::cout << "House destructor" << std::endl;
        delete[] people;
        delete[] window;

    }

};
int main() {

    std::cout << "Aggregation\n\n";
    {
    Snake snake;
    Field* field = new Field(snake);

    delete field;

    snake.GetStatus();
    }

    std::cout << "\nComposition\n\n";

    {
        House* house = new House(1, 1);

        delete house;
    }

    return 0;
}
