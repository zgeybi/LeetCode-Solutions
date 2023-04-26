class Solution {
 public:
  string intToRoman(int num) {
    char M = 'M';
    char D = 'D';
    char C = 'C';
    char L = 'L';
    char X = 'X';
    char V = 'V';
    char I = 'I';
    string roman = "";

    int i = 0;
    while (num - 1000 >= 0) {
      roman.push_back(M);
      num -= 1000;
    }
    if (num - 900 >= 0) {
      roman.push_back(C);
      roman.push_back(M);
      num -= 900;
    }
    if (num - 500 >= 0) {
      roman.push_back(D);
      num -= 500;
    }
    if (num - 400 >= 0) {
      roman.push_back(C);
      roman.push_back(D);
      num -= 400;
    }
    while (num - 100 >= 0) {
      roman.push_back(C);
      num -= 100;
    }
    if (num - 90 >= 0) {
      roman.push_back(X);
      roman.push_back(C);
      num -= 90;
    }
    if (num - 50 >= 0) {
      roman.push_back(L);
      num -= 50;
    }
    if (num - 40 >= 0) {
      roman.push_back(X);
      roman.push_back(L);
      num -= 40;
    }
    while (num - 10 >= 0) {
      roman.push_back(X);
      num -= 10;
    }
    if (num - 9 >= 0) {
      roman.push_back(I);
      roman.push_back(X);
      num -= 9;
    }
    if (num - 5 >= 0) {
      roman.push_back(V);
      num -= 5;
    }
    if (num - 4 >= 0) {
      roman.push_back(I);
      roman.push_back(V);
      num -= 4;
    }
    while (num - 1 >= 0) {
      roman.push_back(I);
      num -= 1;
    }
    return roman;
  }
};