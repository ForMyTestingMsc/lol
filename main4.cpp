#include <iostream>
#include <cmath>

#define PI 3.14159265

using namespace std;

class point {
        double x;
public:
        point(double x) {
                this->x = x;
        }
        void sinus() {
                cout << sin(x * PI / 180) << endl;
        }
};

int main(int argc, char* argv[]) {
        double a;
        cout << "Введите угол: ";
        cin >> a;
        point p1(a);
        p1.sinus();
        return 0;
}
