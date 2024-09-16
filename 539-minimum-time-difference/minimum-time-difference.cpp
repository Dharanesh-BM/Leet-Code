class Solution {
public:
    int convertToMinutes(string time){
        stringstream ss(time);
        string temp;
        int result = 0;
        for(int i=0;getline(ss,temp,':')&&i<2;i++){
            if(i==0) result+= stoi(temp)*60;
            else result += stoi(temp);
        }
        
        return result;
    }

    int findMinDifference(vector<string>& timePoints) {
        ios_base::sync_with_stdio(0);
        vector <int> Minutes;

        for(auto i:timePoints){
            Minutes.push_back(convertToMinutes(i));
        }
        // if(find(timePoints.begin(),timePoints.end(),"00:00") != timePoints.end()){
        //     Minutes.push_back(1440);
        // }

        sort(Minutes.begin(),Minutes.end());\

        int diff = INT_MAX; 
    
        for (int i = 0; i < Minutes.size(); i++){
            if(i==Minutes.size()-1){
                if(1440-Minutes[i]+Minutes[0]<=diff){
                    diff = 1440-Minutes[i]+Minutes[0];
                }
            } else {
                if (Minutes[i + 1] - Minutes[i] < diff) 
                    diff = Minutes[i + 1] - Minutes[i]; 
            }
        }
        
        return diff;
    }
};