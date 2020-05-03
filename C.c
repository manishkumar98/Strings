#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[1000000];
	char s2[1000000];
	fgets(s,1000000,stdin);
	fgets(s2,1000000,stdin);
	int len2;
	int len;
	for(len=0;s[len]!='\0';len++);
	for(len2=0;s2[len2]!='\0';len2++);
	len2=len2-1;
	len=len-1;
	int start=0,sin=0,maxm=10000;
	int str[256]={0};
	int str2[256]={0};
	int count=0;
	int flag=0;
	  if (len < len2)
 	{
        printf("No such window exists\n");
 	}
 	else
 	{
    for (int i = 0; i < len2; i++)
        str2[s2[i]]++;
    for (int i = 0; i < len; i++)
    {
        str[s[i]]++;
        if (str2[s[i]] != 0 &&
            str[s[i]] <= str2[s[i]] )
            count++;
        if (count == len2)
        {
        	flag=1;
            while ( str[s[start]] > str2[s[start]]
                   || str2[s[start]] == 0)
            {
 
                if (str[s[start]] > str2[s[start]])
                    str[s[start]]--;
                start++;
            }
 
            // update window size
            if (i - start + 1 < maxm)
            {
                maxm = i - start + 1;
                sin = start;
            }
        }
    }
 
   
    if (flag==0)
    {
       printf("No such window exists\n");
    }
    else
    {
 	printf("%d %d\n",sin,sin+maxm-1);
 	int ein=sin+maxm-1;
 	for(int i=sin;i<=ein;i++)
 	{
 		printf("%c",s[i]);
 	}
 	printf("\n");
 }
 }
}
 
