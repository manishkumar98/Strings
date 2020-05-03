#include<stdio.h>
#include<string.h>
int main()
{
	char s[500];
	scanf("%s",s);
	int len= strlen(s);
	int max=0;
	int sin=-1,ein=-1;
	for(int i=0;i<len;i++)
	{
		for(int j=i;j<len;j++)
		{
			int t=j;
			int count=0;
			for(int k=i;k<=j;k++)
			{
				if (s[k]==s[t])
					count++;
				t--;
			}
			if(count==(j-i+1)&&(j-i+1)>max)
			{
				max=(j-i+1);
				sin=i;
				ein=j;
			}

		}
	}
	printf("%d\n",max);
	for(int i=sin;i<=ein;i++)
	{
		printf("%c",s[i]);
	}
	printf("\n");

}
/*The new Star Wars movie is out and you along with your friends Sheldon, Howard and Raj are
in the line to buy the tickets. Despite Sheldon’s endless pleas to leave early, you all had taken
your own sweet time to get ready. Now with only one ticket left and a really long queue of fans
fighting for it, the counter salesman gives everyone a string and asks them to find the longest
palindromic substring in it. First to get the answer wins the ticket. As Sheldon is really cross
with you all, it’s up to you, Leonard, to figure out the answer as soon as possible.
Input
The only line of input contains a single string S (1 ≤ |S| ≤ 500) consisting of lowercase letters.
Output
In the first line, print the length of the longest palindromic substring in the given string and
in the next line print the substring itself. If there are multiple answers, print any.
input
trweexxbababxxxuuvuuio
output
9
xxbababxx
input
thebigbangtheory
output
1
b*/
