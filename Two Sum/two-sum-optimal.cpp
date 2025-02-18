// Optimal Approach => (Using Two - Pointers)

string read(int n, vector<int> book, int target)
{https://github.com/rohan-b-dsouza/Code-360-/tree/main/Two%20Sum
    int i = 0;
    int j = book.size() - 1;
    sort(book.begin(), book.end());
    while (i < j) {
        int sum = book[i] + book[j]; 
        if (sum == target) return "YES";
        else if (sum > target) j--;
        else i++;
    }
    return "NO";
}
