
#include <stdio.h>
#include <iostream>

#include <math.h>

using namespace std;

int TriangleP(int a, int b, int c){
	return a+b+c;
}

double TriangleS(int a, int b, int c){ 
double perimeter=TriangleP(a,b,c)/2.0;

return sqrt(perimeter*(perimeter-a)*(perimeter-b)*(perimeter-c));
	
}

double TriangleM(int a){
	return a/2.0;
}

int main(){
	unsigned char ChoiceOption = '0';
	cout << "Enter the 3 sides of a triangle \n\n";
	int a,b,c;
	cin>>a>>b>>c;
		if(((a+b)<c)||((a+c)<b)||((b+c)<a)){
			cout<<"provided sides do not form a triangle";
			return -1;
			}
		
		cout<<"perimeter: "<<TriangleP(a,b,c)<<"\n";
		cout<<"area: "<<TriangleS(a,b,c)<<endl;
		cout<<"corresponding midle lines are: "<<TriangleM(a)<<" "<<TriangleM(b)<<" "<<TriangleM(c)<<endl;
		

	return 0;
}
