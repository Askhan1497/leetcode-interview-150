#include <iostream>

using namespace std;

class Solution {
        bool valid(char ch){
            if(ch>= 'a' && ch<='z' || ch>='A' && ch<='Z' || ch>='0' && ch<='9'){
                return 1;
            }
            return 0;
        }

        char lower(char ch){
            if(ch>='A' && ch<='Z'){
                char b = ch - 'A' +'a';
                return b;
            }
            else return ch;
        }

        bool pali(string str){
            int s=0;
            int l= str.length()-1;
            while(s<=l){
                if(str[s] != str[l]){
                    return 0;
                }
                else{
                    s++;
                    l--;
                }
            }
                return 1;
        }
public:
    bool isPalindrome(string s) {
        string temp ="";
        for(int i=0; i<s.length(); i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }

        for(int j=0; j<temp.length(); j++){
            temp[j] = lower(temp[j]);
        }

        return pali(temp);
    }
};



int main() {
    // Create an instance of the Solution class
    Solution solution;

    // Example usage
    string input = "A man, a plan, a canal: Panama";
    bool result = solution.isPalindrome(input);

    // Display the result
    if (result) {
        cout << "The input is a palindrome." << endl;
    } else {
        cout << "The input is not a palindrome." << endl;
    }

    return 0;
}
