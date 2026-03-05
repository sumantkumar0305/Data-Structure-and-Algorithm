//GFG
//Sum of elements between k1'th and k2'th smallest elements -> Easy

class Solution {
  public:
    long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2) {
        // sort the array
        sort(A, A + N);

        long long sum = 0;
        for (int i = K1; i < K2 - 1; i++) {
            sum += A[i];
        }
        return sum;
    }
};
