// Leetcode
// 2894. Divisible and Non-divisible Sums Difference -> Easy

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int nums1 = 0, nums2 = 0;
        for(int i = 1; i <= n; i++){
            if(i%m != 0){
                nums1 += i;
            }else{
                nums2 += i;
            }
        }

        return nums1-nums2;
    }
};


// Second soution
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum = n*(n+1)/2;
        int a = m;
        int rem = n%m;
        int l = n-rem;
        int t = (l-a)/m;
        t++;
        int sum2 = ((a+l)*t)/2;

        return sum - (2*sum2);
    }
};
