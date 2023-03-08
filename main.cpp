// Write Program to find longest palindrome in an array
#include <iostream>

using namespace std;

bool isPalindrome(int num) {
  int temp = num, rev = 0;
  while (temp > 0) {
    int digit = temp % 10;
    rev = rev * 10 + digit;
    temp /= 10;
  }
  return (num == rev);
}

int longestPalindrome(int nums[], int size) {
  int maxLen = 0;
  for (int i = 0; i < size; i++) {
    for (int j = i; j < size; j++) {
      if (isPalindrome(nums[j])) {
        int len = j - i + 1;
        if (len > maxLen) {
          maxLen = len;
        }
      }
    }
  }
  int c = nums[maxLen - 1];
  return c;
}

int main() {
  int nums[] = {121, 10456, 1000001};
  int size = sizeof(nums) / sizeof(nums[0]);
  int longest = longestPalindrome(nums, size);
  // int c = nums[longest-1];
  cout << "The length of the longest palindrome in the array is " << longest
       << endl;
  // cout<<c;
  return 0;
}
