//(寫到一半)week07-2b.cpp 學習計畫 Simulatiion 第3題 井字遊戲
//LeetCode 1275. Find Winner on a Tic Tac Toe Game
//讀二維陣列, 得到i,j,再標示board[i][j] = 1
//1變2變1變2變1... 因 1+2=3 => 3-1得2
class Solution {
public:
    void myPrintBoard(int board[3][3]){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    bool myTestWin(int board[3][3],int now){
        if(board[0][0]==now && board[0][1]==now && board[0][2]==now) return true;//上面橫
        if(board[1][0]==now && board[1][1]==now && board[1][2]==now) return true;//中間橫
        if(board[2][0]==now && board[2][1]==now && board[2][2]==now) return true;//下面橫

        if(board[0][0]==now && board[1][0]==now && board[2][0]==now) return true;//左直線
        if(board[0][1]==now && board[1][1]==now && board[2][1]==now) return true;//中直線
        if(board[0][2]==now && board[1][2]==now && board[2][2]==now) return true;//右直線
        //對角線
        if(board[0][0]==now && board[1][1]==now && board[2][2]==now) return true;//左上右下
        if(board[2][0]==now && board[1][1]==now && board[0][2]==now) return true;//右上左下
        return false; //都沒成功,就失敗
    }//要看看,誰連線成功
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; //裡面都放0
        int now = 1; // 第1個下的人,叫 1:"A" ,2:"B"
        //for(vector<int> move : move){ 原本用2維陣列,取1維陣列
        for(auto move : moves ){ //用auto 他會幫妳寫好
            int i = move[0], j = move[1];
            board[i][j] = now; //改成now
            //myPrintBoard(board);
            if(myTestWin(board, now)){
                if(now==1) return "A";
                else return "B";
            }
            now = 3 - now; //1變2,2變1,1變2,2變1
        }
        if(moves.size()==9) return "Draw"; //都沒有人勝利的話
        else return "Pending"; //等你繼續下
    }
};