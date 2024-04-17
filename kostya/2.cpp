#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int check(string str);

int main(){
    string str;
    cin >> str;
    cout << check(str);
    return 0;
}

int check(string str){
    string vowels = "aeiuyoj";
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; j < 7; j++) {
            if (str[i] == vowels[j]){
                counter++;
                break;
            }
        }
    }
    return counter;
}
