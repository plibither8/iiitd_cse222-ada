#include <iostream>
#include <vector>
#include <queue>

struct Stock {
    int index;
    int n_bought;
    int next_gain;
    Stock (int i, int n, int gain) : index(i), n_bought(n), next_gain (gain) {};
    friend operator< (const Stock& x, const Stock& y) {return x.next_gain < y.next_gain;};
};

long long int profit (std::vector<int>& A, std::vector<int>& B, int M) {
    int n = A.size();
    if (n != B.size()) exit (1);
    std::priority_queue<Stock> candidates;
    
    for (int i = 0; i < n; ++i) {
        int gain = A[i] + B[i];
        if (gain > 0) candidates.emplace(Stock(i, 0, gain));
    }
    long long int sum = 0.0;
    int coins = 0;
    while ((coins < M) &&(!candidates.empty())) {
        auto zebest = candidates.top();
        candidates.pop();
        coins++;
        sum += zebest.next_gain;
        zebest.n_bought++;
        int i = zebest.index;
        int gain = 2*A[i]*zebest.n_bought + A[i] + B[i];
        if (gain > 0) {
            zebest.next_gain = gain;
            candidates.push (zebest);
        }
    }
    return sum;
}

int main() {
    std::vector<int> A = {-2, -1, -2};
    std::vector<int> B = {3, 5, 10};
    int M = 3;

    auto ans = profit (A, B, M);
    std::cout << "Profit = " << ans << std::endl;
    return 0;
}
