#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool canBreak(long long T, int h, vector<int>& w){
        long long blocks = 0;

        for(int t : w){
            long long k = sqrt((2.0*T)/t);

            while((long long)t * k * (k+1) / 2 > T) k--;
            while((long long)t * (k+1) * (k+2) / 2 <= T) k++;

            blocks += k;
            if(blocks >= h) return true;
        }

        return false;
    }

    long long minNumberOfSeconds(int h, vector<int>& w) {

        long long low = 1;
        long long high = 1LL * (*max_element(w.begin(), w.end())) * h * (h + 1) / 2;

        while(low <= high){
            long long mid = low + (high - low)/2;

            if(canBreak(mid, h, w))
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};