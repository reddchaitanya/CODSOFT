#include<iostream>
#include<vector>
#include<string>
using namespace std;
class TicTacToe{
	private:
	vector<vector<char> > board;
	char currentPlayer;
	public:
	TicTacToe():board(3,vector<char>(3,' ')),currentPlayer('X'){}
	void displayBoard(){
		cout<<" 0 1 2"<<endl;
		for(int i=0;i<3;++i){
			cout<<i<<" ";
			for(int j=0;j<3;++j){
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
	}	
	bool makeMove(int row,int col){
		if(row<0 || row>=3 || col<0 || col>=3 || board[row][col]!=' '){
			return false;
		}
		board[row][col]=currentPlayer;
		return true;
	}
	char checkWinner(){
		for(int i=0;i<3;i++){
			if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]!=' '){
				return board[i][0];
			}
			if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[0][i]!=' '){
				return board[0][i];
			}
		}
		if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]!=' '){
			return board[0][0];
		}
		if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[0][2]!=' '){
			return board[0][2];
		}
		return ' ';
	}
	bool isBoardFull(){
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(board[i][j]==' '){
					return false;
				}
			}
		}
		return true;
	}
	void switchPlayer(){
		currentPlayer=(currentPlayer=='X'?'O':'X');
	}
	void play(){
		int row,col;
		char winner=' ';
		while(winner==' ' && !isBoardFull()){
			displayBoard();
			cout<<"Player"<<currentPlayer<<"s turn.Enter roe and column(eg:0 0):";
			cin>>row>>col;
			if(!makeMove(row,col)){
				cout<<"Invalid move!Try again."<<endl;
				continue;
			}
			winner=checkWinner();
			switchPlayer();
		}
		displayBoard();
		if(winner!=' '){
			cout<<"Player "<<winner<<" wins!"<<endl;
		}else{
			cout<<"It's a draw!"<<endl;
		}
	}
};
int main()
{
	TicTacToe game;
	game.play();
	return 0;
}
