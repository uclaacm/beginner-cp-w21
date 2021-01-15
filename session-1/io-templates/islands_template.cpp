/*
 * THESE TEMPLATES ARE NOT ABSOLUTE.
 * THERE ARE MANY WAYS TO SOLVE A PROBLEM AND YOU ARE FREE TO USE ANY METHOD
 * THESE WILL HOPEFULLY ONLY REMIND YOU OF HOW TO PERFORM I/O IN C++
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
  int P; cin >> P;
  vector<int> nums(12);

  while (P--) {
    int n; cin >> n;
    for (int i = 0; i < 12; i++) cin >> nums[i];

    int count = 0;

    /* your code goes here... */

    cout << n << " " << count << endl;
  }
}
