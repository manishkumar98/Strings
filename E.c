#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	fgets(s,1000,stdin);
	int len;
	for(len=0;s[len]!='\0';len++);
	//printf("%d",len);
	len=len-1;
	int j=0;
	char str[1000];
	char st[1000];
	int l=0;
	//printf("%s\n",s);
	for(int i=0;i<len;i++)
	{
		if(s[i]!=' ')
		{
			str[j]=s[i];
			j++;
		/*if(i==len-1)
		{
			for(int k=j-1;k>=0;k--)
			{
				st[l++]=str[k];
			}
			j=0;
		}*/
			//printf("%d",j);
		}
		
		else
		{
			for(int k=j-1;k>=0;k--)
			{
				st[l++]=str[k];
			}
			st[l++]=' ';
			j=0;
		}
	}
	for(int k=j-1;k>=0;k--)
			{
				st[l++]=str[k];
			}
	char s2[1000];
	int m=0;
	printf("%s\n",st);
	int flag=0;
	//printf("%d",len);
	for(int i=0;i<len;i++)
	{
		if(s[i]==st[i])
		{
			s2[m++]=s[i];
			if(s[i]==' '||i==(len-1))
			{	

				flag=1;
				for(int n=0;n<m;n++)
				{
					printf("%c",s2[n]);
				}
				printf("\n");
				m=0;

			}

		}
		else
			{ 
				m=0;
				while(s[i]!=' ')
					i++;

			}
	}
	if(flag==0)
	printf("NO PALLINDROME\n");

}