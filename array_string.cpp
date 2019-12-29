#include<string>
#include<iostream>
#include<iterator>
#include<map>
using namespace std;

class array_string{
    public:
        static bool is_unique(string stringToCheck);
        static bool is_permutation(string firstString, string secondString);

};


bool array_string::is_unique(string stringToCheck){
    cout << "Checking this string to see if it's unique : " << stringToCheck << endl;
    map<int, int> mp;

    for(char & c : stringToCheck){
        
        if(mp[tolower(c)] == 1){
            cout << "String is not unique" << endl;
            return false;
        }else{
            cout << "Adding char: " << tolower(c) << " " <<  c <<  endl;
            mp[tolower(c)] = 1;
        }
    }
    cout << "String is unique" << endl;
    return true;
}


bool array_string::is_permutation(string firstString, string secondString){

    int firstStringCounter = 0;
    int secondStringCounter = 0;

    for(char & c: firstString){
        cout << tolower(c) << endl;
        firstStringCounter += tolower(c);
    }

    for(char & c: secondString){
        cout << tolower(c) << endl;
        secondStringCounter += tolower(c);
    }

    cout << "first coutner; " << firstStringCounter << "Second counter: " << secondStringCounter << endl;
    cout << "Strings " << firstString << " and " << secondString << " ";

    if(firstStringCounter == secondStringCounter){
        cout << "Are permutations of one another." << endl;
        return true;
    }
    cout << "Are not permutations of one another." << endl;

    return false;
}