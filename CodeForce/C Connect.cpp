/*
#include<iostream>
using namespace std;

int n;
int x[2],y[2];
char z[55][55];
int v[2][55][55];
int ans=INT_MAX;
void dfs(int a,int b,int c)
{
    if(v[c][a][b])
        return ;
    v[c][a][b]=1;
    if(z[a+1][b]=='0')
        dfs(a+1,b,c);
    if(z[a][b+1]=='0')
        dfs(a,b+1,c);
    if(z[a-1][b]=='0')
        dfs(a-1,b,c);
    if(z[a][b-1]=='0')
        dfs(a,b-1,c);
}
signed main()
{
    cin>>n;
    for(int i=0;i<2;i++)
        cin>>x[i]>>y[i];
    for(int i=1;i<=n;i++)
        scanf("%s",z[i]+1);
    for(int i=0;i<2;i++)
        dfs(x[i],y[i],i);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(v[0][i][j])
            {
                for(int k=1;k<=n;k++)
                    for(int l=1;l<=n;l++)
                    {
                        if(v[1][k][l])
                            ans=min(ans,(i-k)*(i-k)+(j-l)*(j-l));
                    }
            }
        }
    cout<<ans<<endl;
}
/*
#include <iostream>
using namespace std;

int N, maze[51][51] = {{0}}, visited[51][51] = {{0}}, dirx[4] = { 1, -1, 0, 0}, diry[4] = { 0, 0, 1, -1 }, minMove = 1e9;

bool CanWeMove(int rowNew, int colNew){
    if ((rowNew >= 0) && (rowNew < N) && (colNew >= 0) && (colNew < N) && (maze[rowNew][colNew] == 0) && (visited[rowNew][colNew] == 0))
        return true;
    return false;
}

void FindPathInMaze(int row, int col, int desRow, int desCol, int move){
    if ((row == desRow) && (col == desCol)){
        minMove = min(minMove, move);
    }
    else{
        for (int index = 0; index < 4; index++)
        {
            int rowNew = row + dirx[index];
            int colNew = col + diry[index];
            if (CanWeMove(rowNew, colNew))
            {
                move++;
                visited[rowNew][colNew] = move;
                FindPathInMaze(rowNew, colNew, desRow, desCol, move);
                move--;
                visited[rowNew][colNew] = 0;

            }
            else{
                minMove = min((double)minMove, pow(row-desRow,2) + pow(col-desCol, 2) + move);
            }
        }
    }
}

int main() {
    int sx, sy, ex, ey;
    cin >> N >> sx >> sy >> ex >> ey;

    string s;
    for(int i = 0; i < N; ++i){
        cin >> s;
        for(int j = 0; j < N; ++j){
            maze[i][j] = s[j]-'0';
        }
    }

    FindPathInMaze(sx-1, sy-1, ex-1, ey-1, 0);
    cout << minMove;
}*/