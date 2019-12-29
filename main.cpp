#include <iostream>
#include "array_string.cpp"
using namespace std;

//Ctrl + Alt + N to run


int main(){
    string uniqueString = "Big boi";
    
    array_string arrayStringTester = array_string();
    //arrayStringTester.is_unique(uniqueString);
    arrayStringTester.is_permutation("ABC", "BAC");

    return 0;
}