//O(N^3)


//다익스트라, 와샬 플로이드는 시작할때 항상 그래프 길이 초기화 하고 시작.

for(int a=1; a<=n; a++)
{
    for(int b=1; b<=n; b++)
    {
        if(a==b) continue;
        board[a][b] = MAX;
    }
}





for(int k=1; k<=n; k++)
{
    for(int a=1; a<=n; a++)
    {
          for(int b=1; b<=n; b++)
          {
              //경유해서 가는 것이 더 최소라면 바꿔준다.
              if( board[a][b] > board[a][k] + board[k][b]) board[a][b] = board[a][k] + board[k][b];          
          }
    }
}

