#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
char test[2];
    static char final[9];
final[0] = s[0];
final[1] = s[1];
final[2] = ':';
final[5] = ':';
final[3] = s[3];
final[4] = s[4];
final[6] = s[6];
final[7] = s[7];
   
    if(s[8] == 'A')
    {
        if(s[0]=='1' && s[1]=='2')
        {
            final[0] = '0';
            final[1] = '0';
        }
        else{
            final[0] = s[0];
            final[1] = s[1];
        }
    }


    else if(s[8]== 'P')
    {
       if(s[0] == '0' && s[1] < '8')
       {
           final[0] = '1';
           char hr = (int)s[1];
           hr = hr+2;
           final[1]  = (char)hr;
       }
       else if(s[0] == '0' && (s[1] == '8' || s[1] == '9'))
       {
           final[0] = '2';
          if(s[2] == '8') final[1] = '0';
          else final[1] = '1';
          
       }
       else if(s[0] != '0' && (s[1] == '0' || s[1] == '1'))
       {   final[0] = '2';
           if(s[1] == '0') final[1] = '2';
           else if(s[1] == '1')  final[1] = '3';
       }
    
    }//end of PM if

    

return final;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
