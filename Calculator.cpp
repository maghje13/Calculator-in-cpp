#include <iostream>
using namespace std;

int Plus(int x, int y) {
    return x + y;
}

int Minus(int x, int y) {
    return x - y;
}

float Divide(int x, int y) {
    return x / y;
}

int Multiply(int x, int y) {
    return x * y;
}

int main() {
    int x;
    cout << "First number: ";
    cin >> x;

    int y;
    cout << "Second number: ";
    cin >> y;

    char op;
    cout << "operator (+ - * /)\n> ";
    cin >> op;

    int sum;

    switch (op) {
        case '+':
            sum = Plus(x, y);
            break;
        case '-':
            sum = Minus(x, y);
            break;
        case '*':
            sum = Multiply(x, y);
            break;
        case '/':
            sum = Divide(x, y);
            break;
    }

    cout << x << " " << op << " " << y << " = " << sum << endl;

    return 0;
}
