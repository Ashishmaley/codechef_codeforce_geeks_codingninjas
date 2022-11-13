 #include <vector>

int getMinimumAnagramDifference(string &str1, string &str2) {
    int n = str1.size();

    // Vector for storing the frequencies.
    vector<int> freq(26, 0);

    // Store the frequencies of characters of first string.
    for (int i = 0; i < n; i++) {
        freq[str1[i] - 'a']++;
    }

    // Subtract the frequencies of characters of second string.
    for (int i = 0; i < n; i++) {
        freq[str2[i] - 'a']--;
    }

    // Variable to store the total absolute frequencies difference.
    int freqDiff = 0;

    // Iterating for all alphabets to cacluclate the total absolute frequencies difference.
    for (int i = 0; i < 26; i++) {
        freqDiff += abs(freq[i]);
    }

    // Return minimum manipulations required to make string anagram.
    return freqDiff / 2;
}
