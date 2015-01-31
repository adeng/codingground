#include <iostream>

using namespace std;

class Parent {
    public:
        Parent(int i = 5);
        virtual void print();

    private:
        int integer;
};

class Child : public Parent {
    public: 
        Child(int i = 10);
        virtual void print();
};

Parent::Parent(int i) : integer(i) {
    
}

Child::Child(int i) : Parent(i) {
    
}

void Parent::print() {
    cout << "Hello " << integer << endl;
}

void Child::print() {
    cout << "Goodbye" << endl;
}

int main()
{
    Parent *q = new Parent(3);
   Parent s = Child(3);
   s.print();
   q->print();
   
   return 0;
}

