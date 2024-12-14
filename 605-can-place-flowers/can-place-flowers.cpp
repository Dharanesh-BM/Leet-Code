class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        if(flowerbed.size()==1 && flowerbed[0]==0 || (flowerbed[0]==0 && flowerbed[1]==0)){
            count++; flowerbed[0]=1;
            cout << "one";
        }
        for(int i = 1; i < flowerbed.size()-1; i++){
            if(flowerbed[i] != 1 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                count++;
                flowerbed[i]=1;
                cout << "two";
            }
        }

        if(flowerbed.size() > 2 && (flowerbed[flowerbed.size()-2]==0 && flowerbed[flowerbed.size()-1]==0)){
            count++; flowerbed[flowerbed.size()-1] = 1;
            cout << "three";
        }

        if(count >= n) return true;
        return false;
    }
};