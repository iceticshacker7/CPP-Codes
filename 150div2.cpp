#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin >> t;

while (t--) {
  int q;
  cin >> q;

  int temp = 0, temp1 = 0, first = 0, flag = 1;
  string s;
  for (int i = 0; i < q; i++) {
   cin >> temp;

   if (i > 0) {
    if (flag) {
     if (temp >= temp1) {
      s += '1';
      temp1 = temp;
     } else if (temp <= first) {
      flag = 0;
      s += '1';
      temp1 = temp;
     } else {
      s += '0';
     }
    } else {
     if (temp >= temp1 && temp <= first) {
      s += '1';
      temp1 = temp;
     } else {
      s += '0';
     }
    }
   } else {
    first = temp;
    s += '1';
    temp1 = temp;
   }
  }

  cout << s << endl;
}
return 0;
}