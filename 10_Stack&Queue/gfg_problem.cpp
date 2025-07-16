// GFG questions: Delete Mid of a Stack....


// class Solution {
//   public:
//   void solve(stack<int>& s, int curr, int mid){
//         // Base case
//         if (s.empty()) return;

//         int topElement = s.top();
//         s.pop();

//         // If current is the middle, don't push it back (i.e., delete it)
//         if (curr == mid) {
//             return; 
//         }

//         solve(s, curr + 1, mid);

//         // Push only if it's not the middle
//         s.push(topElement);
//   }
//     // Function to delete middle element of a stack.
//     void deleteMid(stack<int>& s) {
//         int size = s.size();
//         int mid = (size)/2;
//         solve(s, 0, mid);
        
//     }
    
// };


// ANOTHER APPROACH: 

// #include <stack>
// using namespace std;

// class Solution {
// public:
//     void deleteMid(stack<int>& s) {
//         int size = s.size();
//         if (size == 0) return;

//         int mid = size / 2;
//         stack<int> temp;
//         int count = 0;

//         // Step 1: Transfer elements to temp (excluding the middle one)
//         while (!s.empty()) {
//             if (count == mid) {
//                 s.pop(); // Skip the middle element
//                 count++;
//                 continue;
//             }
//             temp.push(s.top());
//             s.pop();
//             count++;
//         }

//         // Step 2: Rebuild original stack (now without the middle)
//         while (!temp.empty()) {
//             s.push(temp.top());
//             temp.pop();
//         }
//     }
// };


