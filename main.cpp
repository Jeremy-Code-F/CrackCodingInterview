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
    //arrayStringTester.string_compression("aabbbccccaaa");

    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    arrayStringTester.rotate_image(arr);
    return 0;
}