class Solution {
public:
    string helper (int num, vector<string>& less20, vector<string>& tens) {
        int c = 0, n = 0;
        string ans = "";
        if (num < 20 && num != 0) return less20[num];
        while (num) {
            if (c < 1) {
                n = num % 100;
                num /= 100;
                c++;
                if (n < 20 && n != 0) ans += less20[n];
                else if (n != 0){
                    if (n % 10 != 0) ans += " " + less20[n % 10];
                    ans = tens[n / 10 - 2] + ans; 
                } 
            }
            else if (c < 2) {
                c++;
                ans = less20[num % 10] + " Hundred" + (ans != "" ? " " : "") + ans;
                num /= 10;
            }
        }
        return ans;
    }

    string numberToWords(int num) {
        vector<string> less20 = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
        "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        vector<string> tens = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        string ans = "";
        int c = 0, n = 0;
        if (num < 20) return less20[num];
        while (num) {
            string temp = helper(num % 1000, less20, tens);
            if (c == 1 && temp != "") temp += " Thousand";
            else if (c == 2 && temp != "") temp += " Million";
            else if (c == 3 && temp != "") temp += " Billion";
            if (temp != "") ans = temp + (ans != "" ? " " : "") + ans; 
            num /= 1000; 
            c++;
        }
        return ans;
    }
};