
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i=3,j=3;
   // int v[i][j]={{1,2,3},{4,5,6},{7,8,9}};
   vector<vector<int>>v{{1,2,3},{4,6},{7,8,9}};
   
  // vector<int>roww(3,11);
   vector<vector<int>>v1(4,vector<int>(5,11));
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {cout<<v[i][j]<<" ";}cout<<endl;
    }
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v1[i].size();j++)
        {cout<<v1[i][j]<<" ";}cout<<endl;
    }
    return 0;
}
