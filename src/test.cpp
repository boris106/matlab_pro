#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000000
int solution(const char* str)
{
	int i, cnt;
	int k = strlen(str);
	int flag = 0;
	int temp;
	cnt = 0;
	for(i = 0;i < k;i++)
	{
		temp = (1<<(str[i]-'a'));
		if((flag&temp) == 0)
		{
			flag|=temp;
		}
		else
		{
			flag = temp;
			cnt++;
		}
	}
	cnt++;
	return cnt;
}

int main(){
	char str[MAX_LEN];
	scanf("%s",str);
	int k = solution(str);
	printf("Count : %d",k);
	return 0;
}

