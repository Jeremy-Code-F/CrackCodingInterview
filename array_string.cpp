#include<string>
#include<iostream>
#include<iterator>
#include<cstring>
#include<map>
using namespace std;

class array_string{
    public:
        static bool is_unique(string stringToCheck);
        static bool is_permutation(string firstString, string secondString);
        static void urlify(char * a);

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


void array_string::urlify(char* a){
    cout << "Hit urlify" << endl;
    cout << "Length: " << strlen(a) << endl;
    int len = strlen(a);
    int i = 0;

    for(i = len - 1; i >= 0; i--){
        cout << "A at: " << i << " " << a[i] << endl;
        if(a[i] == ' '){
            cout << "Inserting %20" << endl;
            for(int z = strlen(a)-1; z > i; z--){
                a[z + 2] = a[z];
            }
            a[i] = '%';
            a[i + 1] = '2';
            a[i + 2] = '0';
        }
    }
    for(int i = 0; i < strlen(a); i++){
        cout << a[i] << endl;
    }
}