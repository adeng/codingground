#include <iostream>

using namespace std;

class Parent {
    public:
        Parent(int i = 5);
        void print();

    private:
        int integer;
        void test();
};

class Child : public Parent {
    public: 
        Child(int i = 10);
        void print();
    
    private:
        void test();
};

class Subchild : public Child {
    public:
        Subchild(int i = 15);
    
    private:
        void test();
};

Parent::Parent(int i) : integer(i) {
    
}

Child::Child(int i) : Parent(i) {
    
}

Subchild::Subchild(int i) : Parent(i) {
    
}

void Parent::print() {
    test();
}

void Parent::test() {
    cout << integer << endl;
}

int main()
{
    Parent *q = new Subchild();
    Parent s = Subchild();
    q->print();
    s.print();
   
   return 0;
}

