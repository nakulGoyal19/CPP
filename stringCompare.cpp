#include<iostream>
#include<string.h>
using namespace std;

int strCompare(char str1[], char str2[]) {

    int i = 0;
    if(strlen(str1) < strlen(str2))
        return 1;
    else if(strlen(str1) > strlen(str2))
        return -1;
    while(str1[i] != '\0' && str2[i] != '\0')
        {
        if(str1[i] < str2[i])
            return 1;
        else if(str1[i] > str2[i])
            return -1;
        i++;
        }
    if(str1[i] == '\0' && str2[i] == '\0')
        return 0;

}


int main() {

    char str1[50], str2[50];
    int i = 0;
    cout<<"Enter the String 1"<<endl;
    cin.getline(str1, 50);
    cout<<"Enter the String 2"<<endl;
    cin.getline(str2, 50);
    cout<<strCompare(str1, str2);
}
