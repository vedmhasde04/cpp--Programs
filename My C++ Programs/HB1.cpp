#include <bits/stdc++.h>

using namespace std;

int main()
{
 int n,m;
 cin>>n>>m;
 
 vector<vector<int>> mat(n,vector<int>(m));
 
 for(auto &var:mat){
     for(auto &cal:var){
         cin>>cal;
     }
 }
  vector<vector<int>> ans(n+1,vector<int>(m+1,0));
        int cal=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(mat[i-1][j-1]==1){
                    ans[i][j]=1+min({ans[i-1][j],ans[i][j-1],ans[i-1][j-1]});
                    cal=max(cal,ans[i][j]);
                }
            }
        }
        cout<< cal;

}