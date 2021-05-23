# include <bits/stdc++.h>
using namespace std; 

long long pos(char l) {
    if (l == 'a') return 1; 
    if (l == 'b') return 2; 
    if (l == 'c') return 3; 
    if (l == 'd') return 4; 
    if (l == 'e') return 5; 
    if (l == 'f') return 6; 
    if (l == 'g') return 7; 
    if (l == 'h') return 8; 
    if (l == 'i') return 9; 
    if (l == 'j') return 10; 
    if (l == 'k') return 11; 
    if (l == 'l') return 12; 
    if (l == 'm') return 13; 
    if (l == 'n') return 14; 
    if (l == 'o') return 15; 
    if (l == 'p') return 16; 
    if (l == 'q') return 17; 
    if (l == 'r') return 18; 
    if (l == 's') return 19; 
    if (l == 't') return 20; 
    if (l == 'u') return 21; 
    if (l == 'v') return 22; 
    if (l == 'w') return 23; 
    if (l == 'x') return 24;
    if (l == 'y') return 25;  
    return 26; 
}

long long mod = 1'000'000'007;

long long modpow(long long x, long long e) {
	if (e == 0) return 1;
	long long a = modpow(x, e >> 1);
	a = a * a % mod;
	if (e & 1) a = a * x % mod;
	return a;
}

int main() {
    int T; cin >> T; 
    for (int tc = 0; tc < T; ++tc) {
        long long ans = 0; 
        long long N, K; cin >> N >> K; 
        string S; cin >> S; 
        long long n = (N % 2 == 0 ? N/2 : N/2 + 1);
        for (long long i = 0; i < n; ++i) {
            ans += (pos(S[i]) - 1)*modpow(K, n-i-1) % mod; 
        } 
        string Sp = S; 
        for (long long i = 0; i < n; ++i) {
            Sp[N-i-1] = Sp[i]; 
        }
        if (Sp < S) 
            ans += 1;
        ans = ans % mod; 
        cout << "Case #" << tc+1 << ": " << ans << endl;
    }
    return 0; 
}

