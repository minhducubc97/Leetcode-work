// Determine whether an integer is a palindrome. An integer is a palindrome when
// it reads the same backward as forward. Follow up: Could you solve it without
// converting the integer to a string?

// Example 1:
// Input: x = 121
// Output: true

// Example 2:
// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it
// becomes 121-. Therefore it is not a palindrome.

// Example 3:
// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

// Example 4:
// Input: x = -101
// Output: false

// Constraints:
// -2^31 <= x <= 2^31 - 1
#include <string>
using namespace std;

class Solution {
 public:
  bool isPalindrome(int x) {
    if (x < 0) {
      return false;
    }
    string digits = to_string(x);

    int headIdx = 0;
    int tailIdx = digits.size() - 1;
    while (headIdx < tailIdx) {
      if (digits[headIdx] != digits[tailIdx]) {
        return false;
      }
      headIdx++;
      tailIdx--;
    }

    return true;
  }
};