#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for(int i = 1; i < strs.size() ; i++){
            if(prefix == ""){
                return prefix;
            }
            string tempPrefix = "";
            for(int j = 0; j < strs[i].length() && j < prefix.length(); j++){
                if(prefix[j] == strs[i][j]){
                    tempPrefix += prefix[j];
                }else{
                    break;
                }
            }
            prefix = tempPrefix;
        }
        return prefix;
    }

int main(){
    vector<string> words;
    cin >> words;
    cout << longestCommonPrefix(words) << endl;
    return 0;
}