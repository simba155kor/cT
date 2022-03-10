// 1. 똑같은 두 지점을 잇는 경로가 여러개 일수도 있다. -> 제거해야함
// 2. 경로 길이가 0일 수 있다. 
// 3. 양방향인지 단방향인지 확인.


//핵심은 가장 짧은 거리로 도달할 수 있는거를 차례대로 찾는 것이다.
//지금 위치에서 이어진 거리 중에 가장 짧은거 찾기. -> 거기에서 이어지는 다른 짧은 길 추가하기. 
//계속 반복.




//O(V^2) 방법. dense 그래프. 노드를 이용. 
//간선 정보를 2차원 배열로 저장.
//매번 가장 짧은 거리를 찾는다. 그리고 그 짧은 거리로 통해서 가는 더 짧은 길이 있는지 확인한다. dp.




//O(ElogE) 방법. sparse 그래프. 우선순위 큐를 사용. 간선을 이용.
//간선 정보를 리스트로 저장. vector 이용해서 저장.
//우선순위 큐를 이용해서 가장 짧은 거리 저장하면서 기록한다. 지금 위치에서 갈 수 있는 나머지 거리 전부 찾는다.
//즉 모든 간선을 고려하면서 짧은 거 부터 찾아간다.

//if(dist[now_spot] < len) continue; 이거를 추가해서 더 갈 필요없는 거는 제거하자.




//경로추적
//최단거리 찾아가면서 방문한 부모를 저장해둔다.
for(int a=1; a<=n; a++) parent[a] = a;

if(dis[next_node] > len + next_len)
{
    dis[next_node] = len + next_len;
    PQ.push({dis[next_node], next_node});
    parent[next_node] = now_node;
}

void show_route(int end)
{
    cout << end << "의 부모 : " << end << " ";
    while( parent[end] != end)
    {
        end = parent[end];
        cout << end << " ";
    }
    cout << "\n";
}
