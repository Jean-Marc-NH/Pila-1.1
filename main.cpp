#include <iostream>

using namespace std;

struct pila 
{
    int elem[10];
    int* top;
    int* mx;

    pila();
    bool push(int );
    bool pop(int &);
    void print();

};


int main()
{
    pila pila;

    for (int a = 1; a < 15; a++) {
        pila.push(a);
    }

    int b = 0;
    pila.print();

    cout << "\n";
    for (int a = 0; a < 15; a++) {
        if (pila.pop(b)) {
            cout << b << " ";
        }
    }
    cout << "\n";

    pila.push(2);

    pila.print();
}


pila::pila() {
    top = elem;
    mx = &elem[10];
}

bool pila::push(int x) {
    
    if (!(top < mx)) {
        return false;
    }
        
    *top = x;
    top++;

    return true;
}

bool pila::pop(int &x) {
    
    if (top == elem)return false;
    top--;
    
    x = *top;

    return true;
}

void pila::print() {
    int* a = elem;

    for (; a < top && a < mx; a++) {
        cout << *a << " ";
    }
}
