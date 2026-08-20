class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;
        
        for (const std::string& log : logs) {
            if (log == "../") {
                if (depth > 0) {
                    depth--;
                }
            } else if (log == "./") {
                // Do nothing
                continue;
            } else {
                // Moving into a child folder
                depth++;
            }
        }
        return depth;
    }
};