#include <fstream>
#include <iostream>
#include <string>
using namespace std;
void DataofPlayer(string pUsername, int pScore, int pLevel)
{
	ofstream playerData("playerdata.txt");
	playerData.open();
	playerData << pUsername;
	playerData << pScore;
	playerData << pLevel;
	playerData.close();
	
}
int main()
{
	int level, score;
	string username;
	cout << "Enter your Username" << endl;
	cin >> username;
	cout << "Enter score" << endl;
	cin >> score;
	cout << "Enter Level" << endl;
	cin >> level;
	DataofPlayer(username, score, level);
}