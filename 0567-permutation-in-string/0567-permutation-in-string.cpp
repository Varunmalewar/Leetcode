class Solution {
public:
    bool isfreqsame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i])
                return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {

        if (s1.length() > s2.length())
            return false;

        int freq[26] = {0};

        for (char ch : s1) {
            freq[ch - 'a']++;
        }

        int windsize = s1.length();

        for (int i = 0; i <= s2.length() - windsize; i++) {

            int windfreq[26] = {0};
            int windidx = 0;
            int idx = i;

            while (windidx < windsize) {
                windfreq[s2[idx] - 'a']++;
                windidx++;
                idx++;
            }

            if (isfreqsame(freq, windfreq))
                return true;
        }

        return false;
    }
};