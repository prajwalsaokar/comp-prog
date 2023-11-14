    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int N;
        cin >> N;
        vector<string> input;
        vector<string> results;
        for (int i = 0; i < N; ++i) {
            string s;
            cin >> s;
            input.push_back(s);
        }
        for (string word: input) {
            if (word.size() <= 10) {
                results.push_back(word);
            }
            else {
                int l = word.size() - 2;
                string ab = word[0] + to_string(l) + word[word.size()-1];
                results.push_back(ab);
            }
        }
        for (string word : results) {
            cout << word << endl;

        }
        
    }