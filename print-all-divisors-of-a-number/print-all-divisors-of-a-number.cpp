int* printDivisors(int n, int &size){  // refer vs code striver's dsa -> 3.Basic Maths -> divisorsOfANumberMethod2.cpp and notebook
    vector <int> v;
    for (int i = 1; i * i <= n; i++) { // T.C => O(sqrt(n))
        if (n % i == 0) {
            v.push_back(i);
            if (n / i != i) {
                v.push_back(n / i);
            }
        }
    }
    sort (v.begin(), v.end()); // T.C => O(NlogN), where N = number of factors
    size = v.size(); // updating the size of array at caller's function to accomodate the factors of the number
    int *num = new int[size]; // creating a pointer to a new array, this pointer will be returned to caller (it points to first element of new array ,created on heap)
    for (int i = 0 ; i < size; i++) { // T.C => O(N), where N = number of factors
        num[i] = v[i];
    }
    return num;
}

// Overall T.C => O(NlogN)
// S.C => O(2N) => O(N)
