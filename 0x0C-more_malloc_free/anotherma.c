#include <stdio.h>

int main(void)
{
	char s;
	char mystr[9];
	char sentence[14];
	scanf("%c", &s);
	scanf("%s", mystr);
	fgets(sentence, sizeof(sentence), stdin);
	printf("%c\n", s);
	printf("%s\n", mystr);
	printf("%s\n", sentence);

	return (0);
}
