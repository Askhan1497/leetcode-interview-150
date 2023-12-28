class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int i = 0;
        
        while (i < words.size()) {
            int lineStart = i;
            int lineLength = 0;
            while (i < words.size() && lineLength + words[i].size() + i - lineStart <= maxWidth) {
                lineLength += words[i].size();
                i++;
            }
            
            int spaces = maxWidth - lineLength;
            int numGaps = i - lineStart - 1;
            
            string line = words[lineStart];
            if (i < words.size() && numGaps > 0) {
                int spacesPerGap = spaces / numGaps;
                int extraSpaces = spaces % numGaps;
                
                for (int j = lineStart + 1; j < i; j++) {
                    int spacesToAdd = spacesPerGap + (j - lineStart <= extraSpaces ? 1 : 0);
                    line += string(spacesToAdd, ' ') + words[j];
                }
            }
            else {
                for (int j = lineStart + 1; j < i; j++) {
                    line += " " + words[j];
                }
                line += string(maxWidth - line.length(), ' ');
            }
            
            result.push_back(line);
        }
        
        return result;
    }
};