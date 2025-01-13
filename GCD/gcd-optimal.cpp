// Using the Euclidean Algorithm =>

int gcd(int a,int b)
{
	while (a != 0 && b != 0) {
		if (a > b) a = a % b;
		else b = b % a;
	}
	if (a == 0) return b;
	return a;
}

// T.C => O(log(min(a, b))) as initially we start from min(a,b) ----------{log to the base Φ as in each step the value of phi will be different as either a or b will have different value in each step}
// S.C => O(1)
