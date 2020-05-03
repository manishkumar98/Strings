#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[1000];
	fgets(s,1000,stdin);
	int len;
	for(len=0;s[len]!='\0';len++);
	len=len-1;
	int start=0;
	int end=0;
	int sin=0;
	int ein=0;
	int maxm=0;
	int str[256]={0};
	while(end<len)
	{
		if(str[s[end]]==1)
		{
			if(maxm<(end-start))
			{
			maxm = end-start;
			sin=start;
			ein=end;
			}	
            while (s[start] != s[end])
            {
                str[s[start]] = 0;
                start++;
            }
             
            start++;
            end++;

		}
		else
		{
			str[s[end]]=1;
			end++;
		}
	}
	if(maxm<(len-start))
	{
			maxm = len-start;
			sin=start;
			ein=end;
	}
	printf("%d\n",maxm);
	for(int i=sin;i<ein;i++)
	{
		printf("%c",s[i]);
		
	}
	
}