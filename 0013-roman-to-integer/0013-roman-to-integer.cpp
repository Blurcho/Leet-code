class Solution {
public:
    int romanToInt(string romanNumbers) {
        int numbers = 0;
        int& arabicNumbers = numbers;
        
     for (int i = 0; i < romanNumbers.size(); i++)
{
	if (romanNumbers[i] == 'I' && romanNumbers[i + 1] == 'V') {
		arabicNumbers += 4;
		romanNumbers[i] = 'o';
		romanNumbers[i + 1] = 'o';
	}


	if (romanNumbers[i] == 'I' && romanNumbers[i + 1] == 'X') {
	   arabicNumbers += 9;
		romanNumbers[i] = 'o';
		romanNumbers[i + 1] = 'o';
	}


	if (romanNumbers[i] == 'X' && romanNumbers[i + 1] == 'L') {
		arabicNumbers += 40;
		romanNumbers[i] = 'o';
		romanNumbers[i + 1] = 'o';
	}


	if (romanNumbers[i] == 'X' && romanNumbers[i + 1] == 'C') {
		arabicNumbers += 90;
		romanNumbers[i] = 'o';
		romanNumbers[i + 1] = 'o';
	}

	if (romanNumbers[i] == 'C' && romanNumbers[i + 1] == 'D') {
		arabicNumbers += 400;
		romanNumbers[i] = 'o';
		romanNumbers[i + 1] = 'o';
	}


	if (romanNumbers[i] == 'C' && romanNumbers[i + 1] == 'M') {
		arabicNumbers += 900;
		romanNumbers[i] = 'o';
		romanNumbers[i + 1] = 'o';
	}



	if (romanNumbers[i] == 'I') {
		arabicNumbers++;
	}


	if (romanNumbers[i] == 'V') {
		arabicNumbers += 5;
	}


	if (romanNumbers[i] == 'X') {
		arabicNumbers += 10;
	}


	if (romanNumbers[i] == 'L') {
		arabicNumbers += 50;
	}


	if (romanNumbers[i] == 'C') {
		arabicNumbers += 100;
	}
	if (romanNumbers[i] == 'D') {
		arabicNumbers += 500;
	}
	if (romanNumbers[i] == 'M') {
		arabicNumbers += 1000;
	}
}
	return arabicNumbers;
    }
};