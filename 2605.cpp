#include<iostream>
using namespace std;
int a[8][8]; 
int visit[8][8]; 
int c;
void dfs(int k, int l) 
{
if (k < 1 || k>7 || l > 7 || l < 1) return;
 
if (visit[k][l] == 0) c++;
visit[k][l] = 1;
if (visit[k - 1][l] != 1 && a[k - 1][l] == a[k][l]) dfs(k - 1, l);
if (visit[k + 1][l] != 1 && a[k + 1][l] == a[k][l]) dfs(k + 1, l);
if (visit[k][l-1] != 1 && a[k][l-1] == a[k][l]) dfs(k, l-1); 
if (visit[k][l+1] != 1 && a[k][l+1] == a[k][l]) dfs(k, l+1);  
}
int main()
{
int sum(0);
 
for (int i = 1; i <= 7; i++)
{
for (int j = 1; j <= 7; j++)
cin >> a[i][j];
}
 
for (int i = 1; i <= 7; i++)
{
for (int j = 1; j <= 7; j++)
{
dfs(i, j);
if (c >= 3) sum++;
c = 0;
}
}
cout << sum;
}