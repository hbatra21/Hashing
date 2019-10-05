int Solution::threeSumClosest(vector<int> &num, int target) {
     if(num.size() < 3){
        return 0;
    }
    sort(num.begin(), num.end());
    //int i = 0;
    int sum = 0, bestSum = 1000000000;
    for (int i = 0; i < num.size() - 2; i++) {
                int ptr1 = i + 1, ptr2 = num.size() - 1;
                while (ptr1 < ptr2) {
                    sum = num[i] + num[ptr1] + num[ptr2];
                    if (abs(target - sum) < abs(target - bestSum)) {
                        bestSum = sum;
                    }
                    if (sum > target) {
                        ptr2--;
                    } else {
                        ptr1++;
                    }
                }
            }
            return bestSum;
        }
