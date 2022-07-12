
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <regex.h> 
int match(const char *string, const char *pattern)
{
regex_t re;
if (regcomp(&re, pattern, REG_EXTENDED|REG_NOSUB) != 0) return 0;
int status = regexec(&re, string, 0, NULL, 0);
regfree(&re);
if (status != 0) return 0;
return 1;
}
int main ()
{

  char str[50];
  int Uflag=0;
  int Lflag=0;
  int Nflag=0;
  int Cflag=0;
  int points=0;
  const char* re = "(abc|bcd|cde|def|efg|fgh|ghi|hij|ijk|jkl|klm|lmn|mno|nop|opq|pqr|qrs|rst|stu|tuv|uvw|vwx|wxy|xyz|012|123|234|345|456|567|678|789)";
  char c;
  printf("enter password =");
  scanf("%s",str);
  for (int i=0; i<strlen(str); ++i)
  {
    c=str[i];
    if (islower(c))
      Lflag=1;
    if (isupper(c))
       Uflag=1;
    if (isnumber(c))
        Nflag=1;
  }
  Cflag = match(str, re) ? 1 :0;
  if(!Lflag)
  points += 20;
  if(!Uflag)
  points += 20;
  if (!Nflag)
  points +=20;
  if(Cflag)
  points+=20;
//   printf("String contains combo of Upper and Lowercase letter %d,%d,%d %d",Lflag,Uflag,Nflag,Cflag);
  if(points >30) {
      printf("unsafe password");
  }
  else{
      printf("safe password");
  }

  return 0;
}