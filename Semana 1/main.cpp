#include <iostream>
#include <string>

using namespace std;

    string Reversa(string s) {
        string reverse;
        for (int i = s.size()-1; i > -1; i--){
            reverse += s[i];
        }
        return reverse;
    }
    bool sexo(string s) {
        string H = "Hola";
        if (H == s){
            return "True";
        }
        return false;
    }


int main() {
    string J = "Hola";
    cout << Reversa(J) << endl;
    cout << sexo(J);
}
