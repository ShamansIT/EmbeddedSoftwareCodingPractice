#ifndef OOP_STATIC_CLASS_MEMBER_TANK_H
#define OOP_STATIC_CLASS_MEMBER_TANK_Ht

class Tank {
private:
    int damage =5;
    int hp = 100;
    float moveSpeed = 30;
    float rotationSpeed = 3;
    bool isAlive = true;

    static int tanks;

public:
    Tank(int damage = 5, int hp = 100, float moveSpeed = 30, float rotationSpeed = 3);
    ~Tank();


    int GetDamage() const { return damage; }
    int GetHP() const { return hp; }
    float GetMoveSpeed() const { return moveSpeed; }
    float GetRotationSpeed () const {return rotationSpeed;}
    bool IsAlive () const {return isAlive;}

    void ReducedHP (int points);

    static int GetAliveTanks() {return  tanks;}

};

#endif
