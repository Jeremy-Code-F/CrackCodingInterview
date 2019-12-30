#include <iostream>
#include "array_string.cpp"
using namespace std;

//Ctrl + Alt + N to run


int main(){
    string uniqueString = "Big boi";
    
    array_string arrayStringTester = array_string();
    //arrayStringTester.is_unique(uniqueString);
    //arrayStringTester.is_permutation("taco cat", "atco cta");


    // char foo [10] = {'a', ' ', 'a', 'b', ' ', 'b'};
    // arrayStringTester.urlify(foo);
    //arrayStringTester.one_away("time", "mmmes");
    arrayStringTester.string_compression("aabbbccccaaa");
    return 0;
}