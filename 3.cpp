#include <iostream>

using namespace std;

int perimeter(int a, int b, int c, int d);
double area(int a, int b, int h);
double middleLine(int a, int b);

int main(){
    int a, b, c, d, h, n;
    cout << "1 - perimeter" << endl << "2 - area" << endl << "3 - middle line" << endl;
    cin >> n;
    switch(n){
        case 1:
            cout << "a, b, c, d = ";
            cin >> a >> b >> c >> d;
            cout << perimeter(a, b, c , d);
            break;
        case 2:
            cout << "a, b, h = ";
            cin >> a >> b >> h;
            cout << area(a, b, h);
            break;
        case 3:
            cout << "a, b = ";
            cin >> a >> b;
            cout << middleLine(a, b);
            break;
        default:
            cout << "error" << endl;
            break;
    }
}

int perimeter(int a, int b, int c, int d){
    return a+b+c+d;
}

double area(int a, int b, int h){
    return ((a+b)/2 * h);
}

double middleLine(int a, int b){
    return ((a+b)/2);
}