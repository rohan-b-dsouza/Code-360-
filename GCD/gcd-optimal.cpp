int gcd(int a,int b)
{
	while (a != 0 && b != 0) {
		if (a > b) a = a % b;
		else b = b % a;
	}
	if (a == 0) return b;
	else return a;
}

// T.C => O(log(min(a, b))) as initially we start from min(a,b)
// S.C => O(1)
