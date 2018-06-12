#include <iostream>

using namespace std;

class point {
        int x;
public:
        point(int x) {
                this->x = x;
        }
        bool check() {
                if (x % 2 == 0)
                        return true;
                else
                        return false;
        }
};

int main(int argc, char* argv[]) {
        int a;
        cout << "Введите число: ";
        cin >> a;
        point p1(a);
        if(p1.check())
                cout << "1" << endl;
        else
                cout << "0" << endl;
        return 0;
}
