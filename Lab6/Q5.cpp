#include <iostream>
using namespace std;

char hashh(string s){
    char h = 0 ;
    for (int i = 0; i < s.size(); i++)
        h |= s[i];
    return h;
}
int hammingDist(string str1, string str2)
{
    int i = 0, count = 0;
    while (str1[i] != '\0') {
        if (str1[i] != str2[i])
            count++;
        i++;
    }
    return count;
}

int main(){
    //Q1 > 256
    //Q2 > no
    //Q3 > yes

    string str1 = "hello world";
    string str2 = "Hello World";
    cout << (hammingDist(str1, str2)) << endl; 
    char hash1 = hashh(str1);
    char hash2 = hashh(str2);
    cout << (hash1-hash2) << endl;
}//the value should use an integer or short. Both of which store more values than an char.