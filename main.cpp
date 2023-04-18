
#include <iostream>
#include <cmath>

using namespace std;

float result = 0;


float sigma(int n) {
    if (n == 1) {
        result = 1;
    } else {
        float current_item = pow(-1, n + 1) / n;
        sigma(n - 1);
        result += current_item;
    }
    return result;
}

//overloading function name
float sigma() {
    int number = 0;
    cout << "enter a number :" << endl;
    cin >> number;
    if (number == 1) {
        result = 1;
    } else {
        float current_item = pow(-1, number + 1) / number;
        sigma(number - 1);
        result += current_item;
    }
    return result;
}


int main() {
    cout << "******************part3 sigma function ****************" << endl;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Result is: " << sigma(n) << endl;

    cout << "******************part4 overloaded function****************" << endl;
    cout<< "the result of the sigma is: "<<sigma();

}
