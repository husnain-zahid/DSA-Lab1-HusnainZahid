#include <iostream>
#include <string>

using namespace std;

int pattern(string str, string pattern){
    if (pattern.length() == 0){
        return -2;
    }
    else if (str.find(pattern) != string::npos){
        return str.find(pattern);
    }
    else
        return -1;
}
int main(){
    int result = pattern("Fantastic Four First Steps", "Four");
    if (result == -2){
        cout<< "The pattern is empty";
    }
    else if (result == -1)
        cout<< "Could not find the pattern";
    else
        cout<< "Pattern was found at the index: "<< result;
    return 0;
}