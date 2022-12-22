/*
Code by Yash Jain
Problem: 2013 S3 Chances of Winning
Time Complexity : O(3^N)
Method: DFS Recursion
Difficulty: 6/10
 */
#include <bits/stdc++.h>
using namespace std;

int T, G;

int play(int score[5], vector<pair<int, int>> games){
    if (games.empty()){
        if (*max_element(score, score+5)==score[T] && count(score, score+5, score[T])==1){
            return 1;
        }else{
            return 0;
        }
    }
    pair<int, int> game = games[0];
    games.erase(games.begin());
    int ret=0;
    score[game.first]+=3;
    ret+=play(score, games);
    score[game.first]-=3;
    score[game.second]+=3;
    ret+=play(score, games);
    score[game.first]+=1;
    score[game.second]-=2;
    ret+=play(score, games);
    score[game.first]--;
    score[game.second]--;

    return ret;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int score[5] = {0,0, 0, 0, 0};
    vector<pair<int, int>> games= {{1, 2}, {1, 3}, {1, 4}, {2, 3}, {2, 4}, {3, 4}};
    cin >> T >> G;
    for (int i=0; i<G; i++){
        pair<int, int> game, points;
        cin >> game.first >> game.second >> points.first >> points.second;
        if (points.first>points.second){
            score[game.first]+=3;
        }else if (points.first<points.second){
            score[game.second]+=3;
        }else{
            score[game.first]+=1;
            score[game.second]+=1;
        }
        games.erase(std::remove(games.begin(), games.end(), game), games.end());
    }
    cout << play(score, games);
    return 0;
}