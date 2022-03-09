1) 선택하거나 or 선택안하거나
//날짜별로 넘어가는 것도 이거

void func(int now, int val)
{
    if(now==n)
    {
        if(ans < val) ans = val;
        return;
    }
    
    func(now+1, val);              //선택안하기
    func(now+1, val+board[now]);   //선택하기
}




2) n개 중에 고르고 넘어가는 경우
//이미 방문한거는 continue.
//비트 마스크로 방문 체크 가능.

void func(int now, int check)
{
    if(now==n){
      
        return;
    }

    for(int a=0; a<n; a++)
    {
        if((check & (1<<a)) >0) continue;
        func(now+1, check | 1<<a );
    }

}
