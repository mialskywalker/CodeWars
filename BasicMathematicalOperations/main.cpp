#include <iostream>

using namespace std;

int basicOp(char op, int val1, int val2) {
    switch (op) {
        case '+':
            return val1 + val2;
            break;
        case '-':
            return val1 - val2;
            break;
        case '*':
            return val1 * val2;
            break;
        case '/':
            if (val2 != 0) {
                return val1 / val2;
            }
            break;
    }
}

int main() {
    cout << basicOp('+', 4, 7) << endl;
    return 0;
}
