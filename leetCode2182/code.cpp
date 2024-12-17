string repeatLimitedString(string s, int repeatLimit) {
         vector<int> charCounts(26, 0);
        for (char ch : s) {
            charCounts[ch - 'a']++;
        }

        // Initialize the answer string
        string result;

        // Iterate over the characters starting from 'z' to 'a'
        for (int i = 25; i >= 0; --i) {
            int nextCharIndex = i - 1;

            // Continue to construct the string until all chars are used
            while (true) {
                // Add the current character up to repeatLimit times
                int repeatCount = min(charCounts[i], repeatLimit);
                for (int k = repeatCount; k > 0; --k) {
                    charCounts[i]--;
                    result.push_back('a' + i);
                }

                // Break the loop if this character is fully used
                if (charCounts[i] == 0) break;

                // Find the next available character with remaining count
                while (nextCharIndex >= 0 && charCounts[nextCharIndex] == 0) {
                    --nextCharIndex;
                }
              
                // Break if there are no more characters to use
                if (nextCharIndex < 0) break;

                // Add the next available character to the result string
                charCounts[nextCharIndex]--;
                result.push_back('a' + nextCharIndex);
            }
        }

        // Return the constructed string
        return result;
    }