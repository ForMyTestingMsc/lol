#include <iostream>

#define PI 3.14159265

using namespace std;

class point {
        double x;
public:
        point(int x) {
                this->x = x;
        }
        double pl_sq() {
                double res = PI *x*x;
                cout << res << endl;
        }
};

int main(int argc, char* argv[]) {
        double a;
        cout << "Введите число: ";
        cin >> a;
        point p1(a);
        p1.pl_sq();
        return 0;
}
