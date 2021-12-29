//#include <iostream>
//#include <vector>
//using namespace std;
//
//int maze[51][51], visited[51][51], dirY[4] = { 0, 1 }, dirX[4] = { 1, 0 }, totalWays = 0, N, K;
//vector<int> path;
//
//bool CanWeMove(int rowNew, int colNew){
//    if ((rowNew >= 0) && (rowNew < N) && (colNew >= 0) && (colNew < N) && (maze[rowNew][colNew] == 0) && (visited[rowNew][colNew] == 0))
//        return true;
//    return false;
//}
//
//void FindPathInMaze(int row, int col, int desRow, int desCol, int turn){
//    if(turn > K){
//        return;
//    }
//    if ((row == desRow) && (col == desCol)){
//        int last = -1;
//        for(int x : path){
//            if(turn > K){
//                break;
//            }
//            if(x != last){
//                ++turn;
//            }
//            last = x;
//        }
//        if(turn <= K){
//            //for(int x : path){
//            //    cout << x << " ";
//            //}
//            ++totalWays;
//            //cout << turn << "!=" << K << '\n';
//        }
//    }
//    else{
//        for (int index = 0; index < 2; index++)
//        {
//            int rowNew = row + dirX[index];
//            int colNew = col + dirY[index];
//            if (CanWeMove(rowNew, colNew))
//            {
//                path.push_back(index);
//                visited[rowNew][colNew] = 1;
//                FindPathInMaze(rowNew, colNew, desRow, desCol, turn);
//                path.pop_back();
//                visited[rowNew][colNew] = 0;
//            }
//        }
//    }
//}
//
//int main() {
//    int T;
//    cin >> T;
//
//    for(int sub = 0; sub < T; ++sub){
//        cin >> N >> K;
//
//        char in;
//        for(int i = 0; i < N; ++i){
//            for(int j = 0; j < N; ++j){
//                cin >> in;
//                if (in == '.') { //Normal
//                    maze[i][j] = 0;
//                }
//                else if (in == 'H') {
//                    maze[i][j] = 1; //Hay bales
//                }
//                visited[i][j] = 0;
//                //cout << maze[i][j] << " ";
//            }
//            //cout << '\n';
//        }
//        visited[0][0] = 1;
//
//        totalWays = 0;
//        FindPathInMaze(0, 0, N-1, N-1, -1); //EXECUTE DEPTH FIRST SEARCH
//        cout << totalWays << '\n';
//        path.clear(); //Clear Path for next iteration
//    }
//    return 0;
//}