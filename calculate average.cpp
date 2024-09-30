#include <iostream>
using namespace std;

double calculateAverage(double a, double b, double c, double d, double e, double f){
    return (a + b + c + e + f) / 6;
    
    
}

int main() {

cout << "The aveage is" << calculateAverage(10.5, 23.0, 14.8, 17.6, 29.1, 12.4) << endl;
    return 0;
}
