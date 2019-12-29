#include<string>
#include<iostream>
#include<iterator>
#include<map>
using namespace std;

class array_string{
    public:
        static bool is_unique(string stringToCheck);

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