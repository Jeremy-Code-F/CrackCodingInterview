#include<string>
#include<iostream>
#include<iterator>
#include<cstring>
#include<map>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
const int IMAGE_SIZE = 4;

class array_string{
    public:
        static bool is_unique(string stringToCheck);
        static bool is_permutation(string firstString, string secondString);
        static void urlify(char * a);
        static bool one_away(string firstString, string secondString);
        static string string_compression(string stringToCompress);
        static void rotate_image(int imageToRotate[IMAGE_SIZE][IMAGE_SIZE]);
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

bool array_string::one_away(string firstString, string secondString){

    map<char, int> mp;
    int diff = firstString.length() - secondString.length();
    int difference = abs(diff);
    if(difference > 1){
        return false;
    }

    transform(firstString.begin(), firstString.end(), firstString.begin(), ::tolower);
    transform(secondString.begin(), secondString.end(), secondString.begin(), ::tolower);

    for(int i = 0; i < firstString.length(); i++){
        mp[firstString[i]]++;
    }

    for(int i = 0; i < secondString.length(); i++){
        mp[secondString[i]]++;
    }


    int numOfDifferences = 0;
    for(auto const& x : mp){
        if(x.second % 2 != 0){
            numOfDifferences++;
        }
        cout << x.first << ':' << x.second << endl;
    }

    if(numOfDifferences > 1 && numOfDifferences != 2){
        cout << "More than one edit away." << endl;
        return false;
    }else{
        cout << "1 or less edits away" << endl;
        return true;
    }
}

string array_string::string_compression(string stringToCompress){
    cout << "Compressing: " << stringToCompress << endl;
    
    for(int i = 0; i < stringToCompress.length(); i++){
        int currentCounter = 0;
        while(stringToCompress[i] == stringToCompress[i + 1]){
            currentCounter++;
            i++;
        }
        cout << stringToCompress[i] << currentCounter + 1;
    }

    return "done";
}

void array_string::rotate_image(int imageToRotate[IMAGE_SIZE][IMAGE_SIZE]){
    int finalArr[IMAGE_SIZE][IMAGE_SIZE];
    int currentColumn = 3;
    int currentRow = 0;
    //Do things
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << imageToRotate[i][j] << " Going to : Row: " << currentRow << " Column: " << currentColumn << endl;
            finalArr[currentRow][currentColumn] = imageToRotate[i][j];
            currentRow++;

        }
        currentColumn--;
        currentRow = 0;
    }


    for(int i = 0; i < IMAGE_SIZE; i++){
        for(int j = 0; j < IMAGE_SIZE; j++){
            cout << finalArr[i][j] << ",";
        }
        cout << endl;
    }
}