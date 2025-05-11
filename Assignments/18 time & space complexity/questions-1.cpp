// 1. Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = n; i > 0; i /= 2) {
//      c++;
// }
// ans -> O(log n).

// 2. Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = n; i > 1; i /= i) {
//      c++;
// }
// ans -> constant

// 3. Calculate the time complexity for the following code snippet where k is some constant (k<<n).
// int c = 0;
// for(int i = 0; i < n; i += k) {
//      c++;
// }
// ans -> O(n)

// 4. Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = 1; i < n; i *= 2) {
//      c++;
// }
// ans -> O(log n)

// 5. Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = 0; i < n; i++) {
//     c+=i;
// }
// ans -> O(n)

// 6. Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = 0; i < n; i++) {
//      for(int j = 0; j < i; j++){
//          c++;
//      }
// }
// ans -> O(n^2)