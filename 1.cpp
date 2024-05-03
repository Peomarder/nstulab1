#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double perimeter(double width, double height);
double area(double width, double height);
double diagonal(double width, double height);

int main() {
    double width, height;
    
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter the height of the rectangle: ";
    cin >> height;
    if ((width <= 0) || (height <= 0)){
        cout << "Uncorrect data" << endl;
        return 1;
    }
    cout << "Perimeter of rectangle: " <<  setprecision(2) << perimeter(width, height) << endl;
    cout << "Area of rectangle: " << setprecision(2) << area(width, height) << endl;
    cout << "Diagonal of rectangle: " << setprecision(2) << diagonal(width, height) << endl;

    return 0;
}

double perimeter(double width, double height){
    return(2 * (width + height));
}

double area(double width, double height){
    return(width * height);
}

double diagonal(double width, double height){
    return(sqrt(width*width + height*height));
}