

class Solution {
public:
    int calPoints(std::vector<std::string>& operations) {
        std::vector<int> record;
        
        for (const std::string& op : operations) {
            if (op == "+") {
                int n = record.size();
                record.push_back(record[n - 1] + record[n - 2]);
            } else if (op == "D") {
                record.push_back(2 * record.back());
            } else if (op == "C") {
                record.pop_back();
            } else {
                record.push_back(std::stoi(op));
            }
        }
        
        return std::accumulate(record.begin(), record.end(), 0);
    }
};