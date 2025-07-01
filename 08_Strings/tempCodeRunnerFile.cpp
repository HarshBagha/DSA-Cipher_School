#include<iostream>
#include <unordered_map>
#include <string>
using namespace std;

// Longest Substring Without Repeating Characters   <- 3

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> lastSeen; // Stores last index of each character
    int maxLength = 0;
    int start = 0; // Start index of current window

    for (int i = 0; i < s.length(); ++i) {
        // If character is seen and is inside the current window
        if (lastSeen.count(s[i]) && lastSeen[s[i]] >= start) {
            start = lastSeen[s[i]] + 1; // Move start right after last occurrence
        }
        lastSeen[s[i]] = i; // Update last seen index
        maxLength = max(maxLength, i - start + 1); // Update max length
    }
    return maxLength;
}


int main(){
  string s = "abcabcbb";
  cout<<lengthOfLongestSubstring(s);


}