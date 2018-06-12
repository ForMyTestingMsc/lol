#include <iostream>

using namespace std;

class point {
        int x;
public:
        point(int x) {
                this->x = x;
        }
        int ostatok() {
                int res = x % 5;
                cout << res << endl;
        }
};

int main(int argc, char* argv[]) {
        int a;
        cout << "Введите целое число: ";
        cin >> a;
        point p1(a);
        p1.ostatok();
        return 0;
}
