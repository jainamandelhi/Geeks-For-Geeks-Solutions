int subsequenceCount(string S, string T)
{
  int m=S.size();
  int n=T.size();
  int v[n+1][m+1];
  for(int i=0;i<=n;i++)
  {
      for(int j=0;j<=m;j++)
      {
          if(i==0)
            v[i][j]=1;
        else if(j==0)
            v[i][j]=0;
        else if(i>j)
            v[i][j]=0;
        else if(S[j-1]==T[i-1])
            v[i][j]=v[i-1][j-1] + v[i][j-1];
        else
            v[i][j]=v[i][j-1];
      }
  }
  return v[n][m];
}
