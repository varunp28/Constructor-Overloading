#include <iostream>
using namespace std;
class multiplication{
    public:
    int prod;
    
    public:
    multiplication() {
        prod = 0;
        cout << "Default Constructor: multiplication = " << prod << endl;
    }

   
    multiplication(int a, int b) {
        prod = a*b;
        cout << "Parameterized Constructor: product= " << prod << endl;
    }
};

int main() {
    multiplication obj1;          
    multiplication obj2(133, 127);  

    return 0;
}

//Output:
//Default Constructor: multiplication = 0
//Parameterized Constructor: product= 16891
