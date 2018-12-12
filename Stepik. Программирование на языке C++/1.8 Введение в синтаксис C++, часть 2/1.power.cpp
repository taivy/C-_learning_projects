
int power(int x, unsigned p) {
	int answer = x;
	if (p == 0) {
		return 1;
	}
	for (unsigned pow = 1; pow < p; pow++) {
		answer *= x;
	}
	return answer;
}
