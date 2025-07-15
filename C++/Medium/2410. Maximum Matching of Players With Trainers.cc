// https://leetcode.com/problems/maximum-matching-of-players-with-trainers/

class Solution {
public:
    // players[i]: Represents the ability of the ith player.
    // trainers[j]: Represents the training capacity of the jth player.
    // The ith player can match with the jth trainer if the player's ability is less than or equal to the trainer's training capacity. 
    // The ith player can only be matched with atmost one trainer, and the jth trainer can be matched with atmost one player.
    // Return: Maximum number of matchings between players and trainers.
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int plen = players.size();
        int tlen = trainers.size();
        int max = 0;

        int i = 0;
        int j = 0;
        while (i < plen && j < tlen) {
            if (players[i] <= trainers[j]) { 
                ++i;
                ++max;
            }
            ++j;
        }

        return max;
    }
};
