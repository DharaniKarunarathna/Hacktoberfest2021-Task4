#include <iostream>
using namespace std;

int main() {
    int x, y, factorial = 1;

    cout<<"Enter a positive integer: ";
    cin>>y;

    for (x = 1; x <= y; ++x) {
        factorial *= x;   // factorial = factorial * i;
    }
    cout<< "Factorial of "<<y<<" = "<<factorial;
    
	return 0;
}
