#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool  isSafe(int x,int y,int n, vector<vector<int>> visited, vector<vector<int>> m){

    if( (x>=0 && x<=n-1 ) && (y>=0 && y<=n-1) && visited[x][y]==0  && m[x][y] == 1 ){
        return true;
    }
    else {
        return false;
    }
}

void solve( vector<vector<int>> m,int n,vector<string>& ans,
                    vector<vector<int>> visited,int x,int y ,string path){
            
            //base case
            if( x == n-1 && y == n-1 ){
                ans.push_back(path);
                return ;
            }

            visited[x][y] = 1;

            //Down
            int newx = x + 1;
            int newy = y;
            if(isSafe(newx,newy,n,visited,m)){
                path.push_back('D');
                solve(m,n,ans,visited,newx,newy,path);
                path.pop_back();
            }

            //Left
            
             newx = x;
             newy = y - 1;
            if(isSafe(newx,newy,n,visited,m)){
                path.push_back('L');
                solve(m,n,ans,visited,newx,newy,path);
                path.pop_back();
            }
            
            //Right

              newx = x;
             newy = y + 1;
            if(isSafe(newx,newy,n,visited,m)){
                path.push_back('R');
                solve(m,n,ans,visited,newx,newy,path);
                path.pop_back();
            }

            //Up
              newx = x-1;
             newy = y;
            if(isSafe(newx,newy,n,visited,m)){
                path.push_back('U');
                solve(m,n,ans,visited,newx,newy,path);
                path.pop_back();
            }


             visited[x][y] = 0;
}

vector<string> finalPath( vector<vector<int>>& m, int n) {

    vector<string> ans;
    int srcx = 0;
    int srcy = 0;
    
    vector<vector<int>> visited = m;

    for(int i=0 ; i<n ;i++){
        for(int j=0; j<n;j++){
            visited[i][j] = 0;
        }
    }
    
    string path = "";
    solve(m,n,ans,visited,srcx,srcy,path);
    sort(ans.begin(),ans.end());
    
    return ans;
}


int main() {

    vector<vector<int>> m = {{1,0,0,0},
                             {1,1,0,1},
                             {1,1,0,0},
                             {0,1,1,1}};
    
    int n = m.size();

    vector<string> ans = finalPath(m,n);

    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}