#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string word;
    cout<<"Word: ";
    cin >> word;
    cout << "Your word : "<< word <<  "\n reversed word : ";
    int size = word.length();
    while (size >= 0) {
    cout << word[size];
    size = size -1;
    }
    return 0;
}
