class Solution {
public:
    string convert_to_bin(int num){
        bitset <32> binary(num);
        string binaryStr =  binary.to_string();
        return binaryStr.erase(0,binaryStr.find_first_not_of('0'));
    }
    string convertDateToBinary(string date) {
        string temp,result;
        cout << date.size() << endl;
        for(int i = 0;i < date.size(); i++){
            
            if(date[i]=='-'){
                result+=(convert_to_bin(stoi(temp)))+'-';
                temp.erase();
            } else {

            temp += date[i];
            }
        } 
        result+=(convert_to_bin(stoi(temp)));
        return result;
    }
};