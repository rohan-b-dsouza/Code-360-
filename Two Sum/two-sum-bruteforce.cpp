string read(int n, vector<int> book, int target)
{
    for (int i = 0; i < book.size() - 1; i++) {
            for (int j = i + 1; j < book.size(); j++) {
                if (book[i] + book[j] == target) {
                    return "YES";
                }
            }
        }
        return "NO";
}

// T.C => O(n^2)
// S.C => O(1)
