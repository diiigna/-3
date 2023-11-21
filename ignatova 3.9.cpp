#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Выберите фигуру: " << endl;
    cout << "[1] Треугольник" << endl;
    cout << "[2] Трапеция" << endl;
    int figure; cin >> figure;

    cout << "Введите высоту: " << endl;
    int height; cin >> height;
    if (figure == 1) {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < height - i - 1; j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    else if (figure == 2) {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < height - i - 1; j++) {
                cout << " ";
            }
            for (int k = 0; k < 2 * (i + 1) + 1; k++) {
                cout << "*";
            }
            cout << endl;
        }
    }
}