//CEBOLINHANATOR

#include <stdio.h>
main()
{
	int i;
	char tex[201];
	do
	{
		printf("Digite um texto, ele sera cebolinhado. (ENTER para sair): ");
		gets(tex);
		printf("%s\n", tex);	//ou puts(tex);
		
		//substituição das letras
		i = 0;
		while (tex[i] != '\0')
			{
			switch (tex[i])
				{
				case 'R':
					tex[i]='L';
					break;
				case 'r':
					tex[i]='l';
					break;
				}
				i++;
		}puts(tex);
	}while(tex[0] != '\0');
	
}