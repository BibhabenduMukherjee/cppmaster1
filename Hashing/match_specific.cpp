#include <bits/stdc++.h>
using namespace std;

string encodeString(string str)
{
    unordered_map<char, int> map;
    string res = "";
    int i = 0;
 
    for (char ch : str)
    {
        if (map.find(ch) == map.end())
            map[ch] = i++;
       
        res += to_string(map[ch]);
    }
 
    return res;
}
 

vector<string> findMatchedWords(vector<string> dict,string pattern)
{
    int len = pattern.length();

    string hash = encodeString(pattern);


   
 
 	vector<string> res;
 	
    for(int i=0;i<dict.size();i++)
    {
       if (dict[i].length() == len && encodeString(dict[i]) == hash)
            res.push_back(dict[i]);
    }

    return res;
}

int main()
{
    vector<string> dict = {"abb" ," xcc" , "gfv ", "bdd"};
    string pattern = "foo";
   

  vector<string> res =  findMatchedWords(dict , pattern);


}




