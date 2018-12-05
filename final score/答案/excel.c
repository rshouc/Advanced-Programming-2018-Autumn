int titleToNumber(char* s)
{
     int n = 0;
     int sum = 0;
     while(s[n])
         n++;
    

    for(int i = 0; i < n ; i++) {
        int minus = n-i-1;
        sum = sum + pow(26,minus)*((int)s[i] - 64);
    }
    return sum;
}
