class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> score;
        for (auto& op : operations) {
            if (op == "D") {
                score.push(2 * score.top());
            } else if (op == "+") {
                int first = score.top();
                score.pop();
                int second = score.top();
                int newScore = first + second;
                score.push(first); // Push the first score back
                score.push(newScore); // Push the new score
            } else if (op == "C") {
                score.pop();
            } else {
                score.push(std::stoi(op));
            }
        }

        int result=0;

        while(!score.empty()){
            result += score.top();
            score.pop();
        }

        return result;
    }
};