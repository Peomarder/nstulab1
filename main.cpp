
#include <stdio.h>
#include <iostream>

#include <math.h>

using namespace std;

int TriangleP(int a, int b, int c){
	return a+b+c;
}

int TriangleS(int a, int b, int c){ 
int perimeter=TriangleP(a,b,c);
return sqrt(perimeter*(perimeter-a)*(perimeter-b)*(perimeter-c));
	
}

double TriangleM(int a){
	return a/2.0;
}

int main(){
	unsigned char ChoiceOption = '0';
	cout << "Choose shape description sub-programm: \n\t 1. Rectangle \n\t 2. Triangle \n\t 3. Trapezoid \n\t 4. Circle\n\n";
	
int a,b,c;
	cin >> ChoiceOption;
	
	switch (ChoiceOption)
	{
	case '1' : 
	{
		
		break;
	}
	case '2' :
	{
		
cin>>a>>b>>c;
		if(((a+b)<c)||((a+c)<b)||((b+c)<a)){
			cout<<"provided sides do not form a triangle";
			break;
			}
		
		cout<<"perimeter: "<<TriangleP(a,b,c)<<"\n";
		cout<<"area: "<<TriangleS(a,b,c)<<endl;
		cout<<"corresponding midle lines are: "<<TriangleM(a)<<" "<<TriangleM(b)<<" "<<TriangleM(c)<<endl;
		break;
	}
	case '3' :
	{
		
		break;
	}
	case '4' :
	{
		
		break;
	}
	default: return -1;
	}
	return 0;
}