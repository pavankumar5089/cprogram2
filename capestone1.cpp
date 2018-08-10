
#
#include <iostream>
using namespace std;
string LongestWord(string sen) {
  // code goes here
  int n=0;
  string abc,maxing;
  for(int i=0;i<sen.length();i++)
  {
        if((sen[i]<'a'||sen[i]>'z')&&(sen[i]<'A'||sen[i]>'Z'))
      {
          if(abc.length()>maxing.length())
            maxing=abc;
          abc.clear();
          continue;
      }
        abc+=sen[i];
  }
  if(maxing.length() < abc.length())maxing=abc;
  return maxing;
}
int main()
{
   cout << LongestWord("pavan is a good girl");
   
   return 0;
}
