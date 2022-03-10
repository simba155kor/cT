//큰 문제를 작은 문제로 분할하여 해결한다.
//작은 문제가 큰 문제 안에서 계속해서 반복되는 경우.

//bottom-up -> for문
//Top-down  -> 재귀 

//DFS + dp 혹은 DFS + 메모이제이션 -> 재귀, top-down



//dfs + dp
//그냥 dp로 해주어야 하는데 거기서 또 만들어 져야하면
//거기를 dfs(a,b)로 바꿔주기만 하면 된다.

int dfs(int y, int x)
{
    //기저조건
    if(y==0 && x==0) return 0;
    
    //이미 방문해서 만들었다면 그걸 바로 리턴.
    if(dp[y][x] != -1) return dp[y][x];
    
    //방문한 적이 없다는 거야.
    //dp[now]를 만들어서 리턴해야지.
    
    dp[y][x] = min(dfs(y-1, x), dfs(y, x-1));
    //또는
    dp[y][x] += dfs(y-1, x);
    dp[y][x] += dfs(y, x-1);
  
    return dp[now];
}
