#include <iostream>
#include <cmath>
using namespace std;
int getMaxGCD(int arr[], int n) {
   int high = 0;
   for (int i = 0; i < n; i++)
   high = max(high, arr[i]);
   int divisors[high + 1] = { 0 }; //array to store all gcd values
   for (int i = 0; i < n; i++) {
      for (int j = 1; j <= sqrt(arr[i]); j++) {
         if (arr[i] % j == 0) {
            divisors[j]++;
         if (j != arr[i] / j)
            divisors[arr[i] / j]++;
         }
      }
   }
   for (int i = high; i >= 1; i--)
   if (divisors[i] > 1)
   return i;
}
int main() {
    int a,b;
    cin >> a >> b;
    int arr[b-a+1];
    int t=0;

    for(int i=a;i<=b;i++){
        arr[t] = i;
        t++;
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << getMaxGCD(arr,n);

}