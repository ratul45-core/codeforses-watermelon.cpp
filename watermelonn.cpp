#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string c;
    while (n--) {

        cin >> c;
        if (c.size() > 10) {
            cout << c[0] << c.size() - 2 << c.back() << endl;
        }
        else {
            cout << c;
        }
cout<<endl;





    }
}
