#include "Tank.h"

int Tank::tanks = 0;

Tank::Tank(int damage, int hp, float moveSpeed, float rotationSpeed) {
    if(damage > 0)
        this->damage = damage;

    if(hp > 0)
        this->hp = hp;

    if(moveSpeed > 0)
        this->moveSpeed = moveSpeed;

    if(rotationSpeed > 0)
        this->rotationSpeed = rotationSpeed;
    tanks++;
}

Tank::~Tank() {
    tanks--;
}

void Tank::ReducedHP(int points) {
    if(points > 0)
    {
        hp -= points;

        if (hp <= 0)
        {
            hp = 0;
            isAlive = false;
        }
    }
}