#include <iostream>
#include <stack>
#include <string>
using namespace std;
void reverseSentence(string sentence) {
 stack<string> wordStack;
 string word = "";
 // Memisahkan kalimat menjadi kata-kata
 for (char c : sentence) {
 if (c == ' ') {
 wordStack.push(word);
 word = "";
 } else {
 word += c;
 }
 }
 wordStack.push(word); // Memasukkan kata terakhir setelah loop
 // Membalikkan urutan kata-kata
 while (!wordStack.empty()) {
 cout << wordStack.top() << " ";
 wordStack.pop();
 }
 cout << endl;
}
int main() {
 string kalimat;
 cout << "Masukkan kalimat (minimal 3 kata): ";
 getline(cin, kalimat);
 reverseSentence(kalimat);
 return 0;
}