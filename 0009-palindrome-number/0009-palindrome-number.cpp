class Solution {
public:
    bool isPalindrome(int number) {
         bool success = true;
        if(number < 0) {
            success = false;
        return success;
       }
int ostatuk;
std::vector<int> check;
while (number > 0) {
	ostatuk = number % 10;
	number = number / 10;
	check.push_back(ostatuk);
}
int b = check.size() - 1;
for (int i = 0; i < check.size() / 2; i++){
		if (check[i] == check[b]) {
			std::cout << "Correct " << check[i] << " " << check[b] << '\n';
		} else {
            success = false;
            return success;
        }
		b--;
}
return success;
    }
};