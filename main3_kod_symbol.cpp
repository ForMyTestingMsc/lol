#include <iostream>

using namespace std;

class point {
        char x;
public:
        point(char x) {
                this->x = x;
        }
        void print() {
                char our_symbol = x;
                int number = our_symbol;
                cout << number << endl;
        }
};

int main(int argc, char* argv[]) {
        char a;
        cout << "Введите символ: ";
        cin >> a;
        point p1(a);
        p1.print();
        return 0;
}
