// Optimal - Approach-1 (Using unordered map i.e hashing/hashmap) =>

// Note:- Check out another variant of this qn on Leetcode - 1. Two Sum. It has brute and optimal-1 approach as there instead of returning "yes" or "no" , indices is to be returned.

string read(int n, vector<int> book, int target)
{
    unordered_map <int, int> mpp;
        for (int i = 0; i < book.size(); i++) {
            int moreneeded = target - book[i];
            if (mpp.find(moreneeded) != mpp.end()) {
                return "YES";
            }
            mpp[book[i]] = i;
        }
        return "NO";
}

// T.C => O(n)
// S.C => O(n) as extra unordered map is used
