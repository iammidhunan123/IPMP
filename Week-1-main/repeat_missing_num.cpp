vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long n = A.size();
    long long s1 = n * (n + 1) / 2;
    long long s2 = 0;
    for(int i = 0; i < n; i++) {
        s2 += (long long)A[i];
    }
    long long c = s2 - s1; 
    long long sq1 = n * (n + 1) * (2 * n + 1) / 6;
    long long sq2 = 0;
    for(int i = 0; i < n; i++) {
        sq2 += (long long)A[i] * (long long)A[i];
    }
    long long d = sq2 - sq1;
    long long e = d / c;
    int a = (int)((e + c) / 2);
    int b = (int)((e - c) / 2);
    return {a, b};
}
