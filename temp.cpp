// // #include <bits/stdc++.h>
// // using namespace std;

// // int countSubstring(string s, string t) {

// //     unordered_map<char,int>mps;
// //     unordered_map<char,int>tps;

// //     for(int i= 0; i<s.size(); i++){
// //         mps[s[i]]++;
// //     }

// //     for(int i= 0; i<t.size(); i++){
// //         tps[t[i]]++;
// //     }

// //     int count = 0;
// //     int len = 0;
// //     while(true){

// //         for(auto val : tps){
// //             char ch = val.first;
// //             int freq = val.second;
// //             if(tps[ch]>mps[ch]){
// //                 return count;
// //             }else{
// //                 mps[ch] = mps[ch]-freq;
// //                 len++;
// //             }
// //         }

// //         if(len==t.size()){
// //             count++;
// //             len=0;
// //         }else{
// //             return count;
// //         }

// //     }

// //     return count;



// // }

// // int fun(int n){
    
// // }

// // int main() {
// //   string s = "abaabbccccab";
// //   string t = "ab";
// //   int count = countSubstring(s, t);
// //   cout << "The substring \"" << t << "\" appears " << count << " times in the string \"" << s << "\"." << std::endl;
// //   return 0;
// // }


// // #include <iostream>
// // #include <vector>

// // using namespace std;

// // int main() {
// //     int n;
// //     cin>>n;
// //     vector<int> nums(n);
// //     for(int i=0; i<nums.size(); i++){
// //         nums[i] = i+1;
// //         cout<<nums
// //     }

// //     int step = 1;

// //     while (n > 1) {
// //         if (step == 1) {
// //             for (int i = 0; i < n; i += 2) {
// //                 nums[i/2] = nums[i];
// //             }
// //             n = (n+1)/2;
// //         } else {
// //             for (int i = n-1; i >= 0; i -= 2) {
// //                 nums[(n-1)/2 + (n-i)] = nums[i];
// //             }
// //             n = (n+1)/2;
// //         }
// //         step = -step;
// //     }

// //     cout << "The last remaining number is: " << nums[0] << endl;
// //     return 0;
// // }


// #include <iostream>
// #include <vector>

// using namespace std;

// class node {
//     int val;
//     node * left;
//     node * right;
// };





// int main() {
//     vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int n = nums.size();
//     int step = 1;

//     while (n > 1) {
//         if (step == 1) {
//             for (int i = 0; i < n; i += 2) {
//                 nums[i/2] = 0;
//             }
//             n = (n+1)/2;
//         } else {
//             for (int i = n-1; i >= 0; i -= 2) {
//                 nums[(n-1)/2 + (n-i)] = nums[i];
//             }
//             n = (n+1)/2;
//         }
//         step = -step;
//     }



//     return 0;
// }


// C++ code to find the luckiest person
#include <bits/stdc++.h>
using namespace std;

// Node structure
struct Node {
	int data;
	struct Node* next;
};

Node *newNode(int data)
{
Node *node = new Node;
node->data = data;
node->next = NULL;
return node;
}

// Function to find the luckiest person
int alivesol(int Num)
{
	if (Num == 1)
		return 1;

	// Create a single node circular
	// linked list.
	Node *last = newNode(1);
	last->next = last;
	
	for (int i = 2; i <= Num; i++) {
		Node *temp = newNode(i);
		temp->next = last->next;	
		last->next = temp;
		last = temp;	
	}

	// Starting from first soldier.
	Node *curr = last->next;

	// condition for evaluating the existence
	// of single soldier who is not killed.
	Node *temp;
	while (curr->next != curr) {
		temp = curr;
		curr = curr->next;
		temp->next = curr->next;

		// deleting soldier from the circular
		// list who is killed in the fight.
		delete curr;
		temp = temp->next;
		curr = temp;
	}

	// Returning the Luckiest soldier who
	// remains alive.
	int res = temp->data;
	delete temp;
	
	return res;
}

// Driver code
int main()
{
	int N = 9;
	cout << alivesol(N) << endl;
	return 0;
}



