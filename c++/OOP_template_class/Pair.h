#ifndef OOP_TEMPLATE_CLASS_PAIR_H
#define OOP_TEMPLATE_CLASS_PAIR_H

template<typename T1, typename T2>
class Pair {
    T1 object1;
    T2 object2;

public:
    Pair(const T1& object1, const T2& object2);
    T1& GetObject1();
    T2& GetObject2();

};
template<typename T1, typename T2>
Pair<T1, T2>::Pair(const T1 &object1, const T2 &object2)
    : object1(object1), object2(object2)
{}

template<typename T1, typename T2>
T1 & Pair<T1, T2>::GetObject1(){
    return object1;
}

template<typename T1,typename T2>
T2& Pair<T1,T2>::GetObject2() {
    return object2;
}

#endif