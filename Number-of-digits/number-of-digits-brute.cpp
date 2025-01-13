int countDigits(int n){
	int cnt = 0;
	while (n > 0) {
		n = n / 10;
		cnt++;
	}
	return cnt;	
}

// T.C => O(log N) -----------{log to the base 10, as n is repeatedly divided by 10}
// S.C => O(1)
