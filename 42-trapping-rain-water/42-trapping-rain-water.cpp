class Solution {
public:
    int trap(vector<int>& A) {
int res = 0;
		int N = A.size();
		
		int left = 0, right = N - 1;
		int left_max = 0, right_max = 0;
		while(left <= right){
			if(A[left] < A[right]){
				if(A[left] > left_max){
					left_max = A[left];
				}
				else{
					res += left_max - A[left];
				}
				left = left + 1;
			}
			else{
					if(A[right] > right_max){
						right_max = A[right];
					}
					else{
						res += right_max - A[right];
					}
					right = right - 1;
			}
		}
		return res;
	}
};