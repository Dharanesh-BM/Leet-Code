class Solution {
public:
    int clumsy(int n) {
        vector <int> result;
        int op = 0;
        int temp;
        result.push_back(n);
        for(int i = n-1; i > 0; i--){
            op = op%4;
            if(op == 0){
                temp = result.back()*i;
                result.pop_back();
                result.push_back(temp);

                cout << result.back() << " ";
            } else if(op == 1){
                temp = result.back()/i;
                result.pop_back();
                result.push_back(temp);
                cout << result.back() << " ";

            } else if(op == 2){
                result.push_back(i);
                cout << result.back() << " ";
            } else{
                result.push_back(i);
                cout << result.back() << " ";
            }

            op++;
        }

        // while(!result.empty()){
        //     cout << result.back() << " ";
        //     result.pop_back();
        // }

        temp = result[0];
        for(int i = 1; i < result.size(); i++){
            if(i%2 == 1){
                temp += result[i];
            } else {
                temp -= result[i];
            }
        }
        return temp;
    }
};