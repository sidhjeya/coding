#include <iostream>
#include <string>
using namespace std;

int main() {
    int t=1;
    // cin >> t;
    while (t != 0) {
        int n=5, k=1;
        // cin >> n >> k;
        string s = "10101";
        // cin >> s;
        string max = "";
        int p = -1;
        int d = 0;
        for (int i = 0; i < n; ++i) {
            cout<<"max"<<max<<"-s->"s<<endl;
            if (max < s) {
                max = s;
                d = i;
            } else if (max == s) {
                p = i - d;
                break;
            }
            cout<<s.substr(1) <<"<--->"<<s[0];
            s = s.substr(1) + s[0];
        }
        if (p == -1) {
            cout << d + (k - 1) * n << endl;
        } else {
            cout << d + (k - 1) * p << endl;
        }
        t--;
    }
    return 0;
}
