    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int N;
        cin >> N;
        int a,b,c;
        int sol = 0;
        for(int i=0; i<N; i++) {
            cin >> a >> b >> c;
            if (a + b +c >=2) {
                sol++;
            }
        }
        cout << sol;
    }
