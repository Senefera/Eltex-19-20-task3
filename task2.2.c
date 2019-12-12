#include <stdio.h>

int main()
{
char str[10]={'A',0,0,0,0,'B',1,0,0,0};

struct test {
	char a;
	int b;
};
__atribute__((packed));
struct test *ptr;
ptr=str;
//ptr->a;
//ptr->b;

printf("%c", ptr->a);
printf("%d", ptr->b);
}
