class Solution {
public:
    long long findK(vector <int> piles, int k){
        long long sum = 0;
        for(auto i: piles){
            sum += ceil((double)i/k);
            // cout << i << "/" << k << " = " << ceil((double)i/k) << endl;
        }
        // cout << k << " : " << sum << endl;
        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        // sort(piles.begin(),piles.end());
        long long result;

        if(h == piles.size()){
            return *max_element(piles.begin(),piles.end());;
        }

        long long low = 1;
        long long high = *max_element(piles.begin(),piles.end());
        long long k,mid;

        while(low <= high){
            mid = low + (high-low)/2;
            // cout << mid << " " << endl;
            k = findK(piles,mid);
            if(k > h){
                low = mid + 1;
            } else if(k <= h){
                high = mid - 1;
                result = mid;
                // high = mid-1;
                // break;
            }
        }

        // sort(result.begin(),result.end());

        return result;
        // return 0;
    }
};