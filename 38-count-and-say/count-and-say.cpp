class Solution {
public:
    int i = 0;
    string given = "1";
    string countAndSay(int n) {
        if(n == 1){         // to terminate the rucursion 
            return given;
        }

        // string given = to_string(n);
        int count = 1;
        char str = given[0];
        string ans = "";
        for(int i = 1; i < given.length(); i++){
            if(str == given[i]){
                count++;
                cout << "hi";
            } else{
                cout << count << endl;
                ans += to_string(count);
                ans += str;
                str = given[i];
                count = 1;
            }
        }
        ans += to_string(count);
        ans += str;
        str = given[0];

        cout << "hello";
        cout << ans << endl;
        given = ans;
        n--;
        cout << "n : " << n << endl;
        return countAndSay(n);
    }
};