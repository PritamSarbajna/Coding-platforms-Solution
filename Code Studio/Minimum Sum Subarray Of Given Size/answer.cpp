#include <bits/stdc++.h>

int minSubarraySum(int arr[], int n, int k){
	int sum = 0, ans = INT_MAX;
	int left = 0, right = 0;

	while (right < n)
	{
		sum += arr[right];
		if (right + 1 - left == k)
		{
			ans = min(ans, sum);
			sum -= arr[left];
			left++;
		}

		right++;
	}

	return ans;
}
