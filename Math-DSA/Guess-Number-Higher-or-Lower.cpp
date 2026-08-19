// Leetcode
// 374. Guess Number Higher or Lower -> Easy

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int x = rand() % 5 + 1;

        while(guess(x) != 0){
            if(guess(x) == -1){
                x--;
            }
            if(guess(x) == 1){
                x++;
            }
        }

        return x;
    }
};
