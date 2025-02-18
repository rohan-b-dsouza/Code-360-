// Optimal Approach - 2 => (Using Two - Pointers)
// Use this approach only when interviewer specifies that we can't use map for solving this qn.
// This is slightly less better than Optimal Approach - 1

string read(int n, vector<int> book, int target)
{
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

// T.C => O(n*log(n) + O(n)) = O(n*log(n))
// S.C => O(1)
