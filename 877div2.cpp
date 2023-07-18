#include <iostream>
#include <vector>

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

std::vector<std::vector<int>> fill_grid(int n, int m) {
    std::vector<std::vector<int>> grid(n, std::vector<int>(m, 0));
    int num = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i + j) % 2 == 0) {
                grid[i][j] = num;
                num++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i + j) % 2 != 0) {
                grid[i][j] = num;
                num++;
            }
        }
    }

    return grid;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, m;
        std::cin >> n >> m;

        std::vector<std::vector<int>> grid = fill_grid(n, m);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                std::cout << grid[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
