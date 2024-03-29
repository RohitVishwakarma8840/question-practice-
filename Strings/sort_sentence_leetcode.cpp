class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);
        string temp;
        int count = 0;
        int index = 0;

        // Iterate through the characters of the input string
        while (index < s.size()) {
            if (s[index] == ' ') { // If space is encountered, process the word
                int pos = temp.back() - '0'; // Extract position of the word
                temp.pop_back(); // Remove position from temp
                ans[pos] = temp; // Store word in appropriate index of ans vector
                temp.clear(); // Clear temp for the next word
                count++; // Increment count of words
            } else {
                temp += s[index]; // Append character to temp if not space
            }
            index++; // Move to the next character in the input string
        }

        // Process the last word
        int pos = temp.back() - '0'; // Extract position of the last word
        temp.pop_back(); // Remove position from temp
        ans[pos] = temp; // Store last word in appropriate index of ans vector
        count++; // Increment count of words

        // Construct the sorted sentence
        string sortedSentence;
        for (int i = 1; i <= count; i++) {
            sortedSentence += ans[i]; // Concatenate word to sortedSentence
            sortedSentence += ' '; // Add space after each word
        }
        sortedSentence.pop_back(); // Remove the trailing space

        return sortedSentence; // Return the sorted sentence
    }
};
