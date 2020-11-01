#include <bits/stdc++.h> 
using namespace std; 

// Function that returns true if the sequence 
// can be balanced by changing the 
// position of at most one bracket 
bool canBeBalanced(string s, int n) 
{ 
	// Odd length string can 
	// never be balnced 
	if (n % 2 == 1) 
		return false; 

	// Add '(' in the beginning and ')' 
	// in the end of the string 
	string k = "("; 
	k += s + ")"; 

	vector<string> d; 
	int cnt = 0; 

	for (int i = 0; i < k.length(); i++) 
	{ 
		// If its an opening bracket then 
		// append it to the temp string 
		if (k[i] == '(') 
			d.push_back("("); 

		// If its a closing bracket 
		else
		{ 
			// There was an opening bracket 
			// to match it with 
			if (d.size() != 0) 
				d.pop_back(); 

			// No opening bracket to 
			// match it with 
			else
				return false; 
		} 
	} 
	// Sequence is balanced 
	if (d.empty()) 
		return true; 
	return false; 
} 

// Driver Code 
int main(int argc, char const *argv[]) 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
	int n = s.length(); 
	(canBeBalanced(s, n)) ? cout << "Yes"
				<< endl : cout << "No" << endl; 
    }
	
	return 0; 
} 
