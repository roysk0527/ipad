#include <stdio.h>

void encode(char* ptr)
{
    while (*ptr != '\0')
    {
        *ptr = *ptr + 3;
        ptr++;
    }
}

int main(){
    int n,i;

    printf("문자열의 크기: ");
    scanf("%d",&n);

    char message[n];

    printf("문자열: ");
    for(i=0;i<n;i++)
    {
        scanf("%s",&message[i]);
    }

    printf("원본 메시지: %s\n",message);

    encode(message);

    printf("암호화된 메시지: %s\n",message);

    return 0;
}