#include<iostream>
#include<map>
using namespace std;


template<typename T>
class Graph{
    map<T, list<T> > l;

public:
voide addegde(int x, int y){
    l[x].push_back(y);
    l[y].push_back(x);

}

void bfs(T src)
{
    map<T, int> visited;
    queue<T> q;

    q.push(src);
    visited[src] =true;

    while(___){
        T node = q.front();
        q.pop();

        for (int nbr : l[node])
        { 
            if(!visited[nbr]){
            q.push(nbr);
            //make that nbr as visited
            viisted[nbr] = true;
        }
        }
    }
}
};
int main()
{
    graph<int> g;
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);

    g.bfs(0);

    return 0;
}
