#include <stdio.h>
int main ()
{
	char text[101];
	scanf ("%[^\n]", text);
	printf ("#include <stdio.h>\n");
	printf ("int main()\n{\n");
	printf ("    printf(\"%%s\\n\",\"%s\");\n", text);
	printf ("    return 0;\n}\n");
	
	return 0;
}
