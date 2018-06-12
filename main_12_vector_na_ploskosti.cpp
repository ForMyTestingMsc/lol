#include <iostream>
#include <cmath>

using namespace std;

class point {
        float x1, x2, y1, y2;
public:
        float dlina_v, val;
        point(float x, float y) : x1(0), y1(0) {
                this->x2 = x;
                this->y2 = y;
        }
        virtual float summa() {
                val = x2*x2 + y2*y2;
        }
        virtual float dlina() {
                dlina_v = sqrt(val);
        }
        virtual void print() {
                cout << "x1 = " << x1 << " x2 = " << x2 << endl;
                cout << "y1 = " << y1 << " y2 = " << y2 << endl;
        }
        void print1() {
                cout << "длина вектора = " << dlina_v << endl;
        }
};

class point_3d : public point {
        float z1, z2;
public:
        point_3d(float x, float y, float z) : z1(0), point(x, y) {
                this->z2 = z;
        }
        float summa() {
                point::summa();
                val += z2*z2;
        }
        float dlina() {
                dlina_v = sqrt(val);
        }
        void print() {
                point::print();
                cout << "z1 = " << z1 << " z2 = " << z2 << endl;
                cout << "длина вектора = " << dlina_v << endl;
    }
};

int main(int argc, char* argv[]) {
        point p1(3, 4);
        point_3d p3(3, 4, 5);
        point *pp;
        pp = &p1;
        pp->summa();
        pp->dlina();
        pp->print();
        pp->print1();
        pp = &p3;
        pp->summa();
        pp->dlina();
        pp->print();
        return 0;
}
