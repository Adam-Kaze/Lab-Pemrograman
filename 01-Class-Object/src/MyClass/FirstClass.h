#include <iostream>
using namespace std;

class FirstClass {
    private:
        /* data */
    public:
        FirstClass(/* args */);
        ~FirstClass();

        void firstMethod() {
            cout << "\n!! Sudah membentuk Objek !!\n";
        }
};

FirstClass::FirstClass(/* args */) {
    /* code */
}

FirstClass::~FirstClass() {
    /* code */
}