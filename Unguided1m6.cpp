#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
bool isPalindrome(string str)
{
    stack<char> charStack;
    string originalStr = str;
    // Menghapus spasi dan tanda baca dari kalimat
    str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());
    str.erase(remove_if(str.begin(), str.end(), ::ispunct), str.end());
    // Memasukkan setiap karakter ke dalam stack
    for (char c : str)
    {
        charStack.push(c);
    }
    // Membandingkan karakter pada stack dengan karakter asli dari belakang
    for (char c : originalStr)
    {
        if (isspace(c) || ispunct(c))
        {
            continue; // Lewati spasi dan tanda baca
        }
        if (c != charStack.top())
        {
            return false; // Tidak palindrom
        }
        charStack.pop();
    }
    return true; // Palindrom
}
int main()
{
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    if (isPalindrome(kalimat))
    {
        cout << "Kalimat merupakan palindrom." << endl;
    }
    else
    {
        cout << "Kalimat bukan palindrom." << endl;
    }
    return 0;
}