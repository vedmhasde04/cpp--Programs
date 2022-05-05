#include <bits/stdc++.h>

using namespace std;

int main()
{
 string str;
 getline(cin, str);
 stringstream s(str);
    string word;
    vector<int> nums;
    while (s >> word)
        nums.push_back(stoi(word));
        //cout<<word;
    map<int,int> mp;
	    for(int i = 0;i<nums.size();i++)
	        mp[nums[i]] = i;
	    sort(nums.begin(),nums.end());
	    int ans = 0;
	    for(int i = 0;i<nums.size();i++){
	        while(mp[nums[i]]!=i){
	        ans++;
	        int temp = nums[i];
	        nums[i] = nums[mp[temp]];
	        nums[mp[temp]]  = temp;
	        }
	    }
	    cout<<ans;

}