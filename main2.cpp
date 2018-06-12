#include <iostream>

using namespace std;

class point {
        int x;
public:
        point(int x) {
                this->x = x;
        }
        void print() {
                cout << "Данное число в 16-й СС: " << hex << x << endl;
        }
};

int main(int argc, char* argv[]) {
        int a;
        cout << "Введите целое число: ";
        cin >> a;
        point p1(a);
        p1.print();
        return 0;
}
