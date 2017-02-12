#include<stdio.h>
#include<string.h>
int main() {
  /* code */
  char str[100], rev_str[100]={'\0'};
  int i=0, flag = 1;
  scanf("%s\n",str );
  printf("%s\n",str);
  for(i=strlen(str);i>=0;i--)
  {
    	rev_str[strlen(str)-i] = str[i];
  }
  for ( i = 0; i < strlen(str); i++) {
    /* code */
    if (rev_str[i] != str[i]) {
      flag = 0;
      printf("NO\n", );
    }
  }
  if (flag == 1)
  {
    printf("YES\n" );
  }
  else
  {
    printf("NO\n" );
  }
  return 0;
}
