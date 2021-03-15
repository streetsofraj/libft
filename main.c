#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h> 

/*
** FUNCTIONS JUST FOR THIS TEST PURPOSES (definitions at the end of this file)
*/ 

char	ft_toindex(unsigned int index, char c);



int		main(void)
{

	
	printf("\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>> L I B F T   T E S T <<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("-----------------------------------------------------------------------------\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> PART 1 <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("-----------------------------------------------------------------------------\n");


	printf("[ft_memset]\n");
	char s26[50];
	strcpy(s26, "america");
	ft_memset(s26, 'y', 4);//FT_MEMSET
	printf("%s\n", s26);
	printf("\n");
	printf("[memset]\n");
	char s27[50];
	strcpy(s27, "america");
	memset(s27, 'y', 4);
	printf("%s\n", s27);
	printf("-----------------------------------------------------------------------------\n");

printf("-----------------------------------------------------------------------------\n");
	printf("[ft_atoi]\n");
	printf("%d\n", ft_atoi("   \t\n\v\f\r -1986abc "));//FT_ATOI
	printf("\n");
	printf("[atoi]\n");
	printf("%d\n", atoi("   \t\n\v\f\r -1986abc "));
	printf("-----------------------------------------------------------------------------\n");


 	printf("[ft_bzero]\n");
	char s28[50];
	strcpy(s28, "12345678");
	ft_bzero(s28, 1);//FT_BZERO
	printf("(%s)\n", s28);
	printf("\n");
	printf("[bzero]\n");
	char s29[51];
	strcpy(s29, "12345678");
	bzero(s29, 1);
	printf("(%s)\n", s29);

	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_memcpy]\n");
	char s30[50], s31[50];
	strcpy(s30, "blue");
	strcpy(s31, "black");
	printf("%s\n", ft_memcpy(s30, s31, 3));//FT_MEMCPY
	printf("\n");
	printf("[memcpy]\n");
	char s32[50], s33[50];
	strcpy(s32, "blue");
	strcpy(s33, "black");
	printf("%s\n", memcpy(s32, s33, 3));


	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_memccpy]\n");
	char s34[50], s35[50];
	strcpy(s34, "rocky");
	strcpy(s35, "ernest");
	printf("%s\n", ft_memccpy(s34, s35, 'r', 4));//FT_MEMCCPY
	printf("%s\n", s34);
	printf("\n");
	printf("[memccpy]\n");
	char s36[50], s37[50];
	strcpy(s36, "rocky");
	strcpy(s37, "ernest");
	printf("%s\n", memccpy(s36, s37, 'r', 4));
	printf("%s\n", s36);


	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_memmove]\n");
	char s38[50], s39[50];
	strcpy(s38, "jupi");
	strcpy(s39, "saturn");
	printf("%s\n", ft_memmove(s38, s39, 2));//FT_MEMMOVE
	printf("\n");
	printf("[memmove]\n");
	char s40[50], s41[50];
	strcpy(s40, "jupi");
	strcpy(s41, "saturn");
	printf("%s\n", memmove(s40, s41, 2));
	printf("-----------------------------------------------------------------------------\n");


	printf("[ft_memchr]\n");
	char s42[50];
	strcpy(s42, "mountain");
	printf("%s\n", ft_memchr(s42, 'n', 4));//FT_MEMCHR
	printf("%s\n", s42);	
	printf("\n");
	printf("[memchr]\n");
	char s43[50];
	strcpy(s43, "mountain");
	printf("%s\n", memchr(s43, 'n', 4));
	printf("%s\n", s43);	



	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_memcmp]\n");
	char s44[50], s45[50];
	strcpy(s44, "a");
	strcpy(s45, "aaa");
	printf("%d\n", ft_memcmp(s44, s45, 2));//FT_MEMCMP
	printf("\n");
	printf("[memcmp]\n");
	char s46[50], s47[50];
	strcpy(s46, "a");
	strcpy(s47, "aaa");
	printf("%d\n", memcmp(s46, s47, 2));



	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strlen]\n");
	printf("%zu\n", ft_strlen("longitud"));// FT_STRLEN 
	printf("\n");
	printf("[strlen]\n");
	printf("%lu\n", strlen("longitud")); 
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strdup]\n");
	printf("%s\n", ft_strdup("Anthony"));//FT_STRDUP
	printf("\n");
	printf("[strdup]\n");
	printf("%s\n", strdup("Anthony"));
	printf("-----------------------------------------------------------------------------\n");



	printf("[ft_strlcat]\n");
	char s14[50], s15[50];
	strcpy(s14, "Mr");
	strcpy(s15, "Robot");
	printf("%zu\n", ft_strlcat(s14, s15, 4));//FT_STRLCAT
	printf("%s\n", s14);
	printf("\n");
	printf("[strlcat]\n");
	char s16[50], s17[50];
	strcpy(s16, "Mr");
	strcpy(s17, "Robot");
	printf("%lu\n", strlcat(s16, s17, 4));
	printf("%s\n", s16);
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strchr]\n");
	char *p1;
	p1 = ft_strchr("yellow", 'l');//FT_STRCHR
	printf("%s\n", p1);
	printf("\n");
	printf("[strchr]\n");
	char *p2;
	p2 = strchr("yellow", 'l');
	printf("%s\n", p2);
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strrchr]\n");
	char *p3;
	p3 = ft_strrchr("yellow", 'l');//FT_STRRCHR
	printf("%s\n", p3);
	printf("\n");
	printf("[strrchr]\n");
	char *p4;
	p4 = strrchr("yellow", 'l');
	printf("%s\n", p4);
	
	printf("-----------------------------------------------------------------------------\n");



	printf("[ft_strnstr]\n");
	char s22[50], s23[50];
	strcpy(s22, "tritricolor");
	strcpy(s23, "tric");
	char *p7;
	p7 = ft_strnstr(s22, s23, 7);//FT_STRNSTR
	printf("%s\n", p7);
	char s220[50], s230[50];
	strcpy(s220, "ozarabozaraboze123");
	strcpy(s230, "ozaraboze");
	char *p70;
	p70 = strnstr(s220, s230, 15);
	printf("%s\n", p70);
	printf("\n");
	printf("[strnstr]\n");
	char s24[50], s25[50];
	strcpy(s24, "tritricolor");
	strcpy(s25, "tric");
	char *p8;
	p8 = strnstr(s24, s25, 7);
	printf("%s\n", p8);
	char s240[50], s250[50];
	strcpy(s240, "ozarabozaraboze123");
	strcpy(s250, "ozaraboze");
	char *p80;
	p80 = strnstr(s240, s250, 15);
	printf("%s\n", p80);
	
	
	printf("-----------------------------------------------------------------------------\n");
	
	printf("[ft_strncmp]\n");
	printf("%d\n", ft_strncmp("uola", "hol", 3));//FT_STRNCMP	
	printf("\n");
	printf("[strncmp]\n");
	printf("%d\n", strncmp("uola", "hol", 3));	
	
	
	
	
	
	
	
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_isalpha]\n");
	printf("%d\n", ft_isalpha('h'));//FT_ISALPHA
	printf("%d\n", ft_isalpha('*'));//FT_ISALPHA
	printf("\n");
	printf("[isalpha]\n");
	printf("%d\n", isalpha('h'));
	printf("%d\n", isalpha('*'));
	printf("-----------------------------------------------------------------------------\n");
	
	
	
	
	printf("[ft_isdigit]\n\n");
	printf("\"digit '3'\"\t");	
	(ft_isdigit('3')) ? (printf("is digit\n")) : (printf("is not digit\n"));// FT_ISDIGIT 
	printf("\"not digit 'h'\"\t");	
	(ft_isdigit('h')) ? (printf("is digit\n")) : (printf("is not digit\n"));// FT_ISDIGIT 
	printf("\"not digit 11\"\t");	
	(ft_isdigit(11)) ? (printf("is digit\n")) : (printf("is not digit\n"));// FT_ISDIGIT 
	printf("\"digit 48\"\t");	
	(ft_isdigit(48)) ? (printf("is digit\n")) : (printf("is not digit\n"));// FT_ISDIGIT 




	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_isalnum]\n");
	printf("%d\n", ft_isalnum('5'));//FT_ISALNUM
	printf("%d\n", ft_isalnum('+'));//FT_ISALNUM
	printf("\n");
	printf("[isalnum]\n");
	printf("%d\n", isalnum('5'));
	printf("%d\n", isalnum('+'));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_isascii]\n");
	printf("%d\n", ft_isascii('~'));//FT_ISASCII
	printf("%d\n", ft_isascii('8'));//FT_ISASCII
	printf("\n");
	printf("[isascii]\n");
	printf("%d\n", isascii('~'));
	printf("%d\n", isascii('8'));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_isprint]\n");
	printf("%d\n", ft_isprint('\t'));//FT_ISPRINT
	printf("\n");
	printf("[isprint]\n");
	printf("%d\n", isprint('\t'));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_toupper]\n");
	printf("%c\n", ft_toupper('a'));//FT_TOUPPER
	printf("\n");
	printf("[toupper]\n");
	printf("%c\n", toupper('a'));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_tolower]\n");
	printf("%c\n", ft_tolower('A'));//FT_TOLOWER
	printf("\n");
	printf("[tolower]\n");
	printf("%c\n", tolower('A'));
	printf("-----------------------------------------------------------------------------\n");

	
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strlcpy]\n");
	char s1 [50];
	printf("%zu\n", ft_strlcpy(s1, "life", 5));//FT_STRLCPY
	printf("\n");
	char s2 [50];
	printf("[strlcpy]\n");
	printf("%lu\n", strlcpy(s2, "life", 5));
	printf("-----------------------------------------------------------------------------\n");

	printf("[ft_calloc]\n");
	char *s51;
	s51 = ft_calloc(3,3);//FT_CALLOC
	printf("%d\n",*s51);
	strcpy(s51, "hi");
	printf("%s\n", s51);
	printf("\n");
	printf("[expected]\n");
	printf("0\nhi\n");
	printf("-----------------------------------------------------------------------------\n");	
	
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> PART 2 <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	
	printf("[ft_substr]\n");
	char *s55;
	s55 = ft_substr("A star is born", 2, 4);//FT_Substr
	printf("%s\n", s55);
	printf("\n");
	printf("[expected]\n");
	printf("star\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strjoin]\n");
	char *s56;
	s56 = ft_strjoin("Jack", "son");//FT_STRJOIN
	printf("%s\n", s56);
	printf("%lu\n", strlen(s56));
	printf("\n");
	printf("[expected]\n");
	printf("Jackson\n7\n");
	printf("-----------------------------------------------------------------------------\n");


	printf("[ft_strtrim]\n");
	char *s57;
	s57 = ft_strtrim("\th,o,l,a,\t","\t" );//FT_STRTRIM
	printf("%s", s57);
	
	printf("\n");
	printf("[expected]\n");
	printf("h,o,l,a,\n");




	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_split]\n");
	char **s58;
	s58 = ft_split("*hola***como**te*va**", '*');//FT_STRSPLIT
	printf("%s", s58[0]);
	printf("%lu\n", ft_strlen(s58[0]));
	printf("%s", s58[1]);
	printf("%lu\n", ft_strlen(s58[1]));
	printf("%s", s58[2]);
	printf("%lu\n", ft_strlen(s58[2]));
	printf("%s", s58[3]);
	printf("%lu\n", ft_strlen(s58[3]));
	printf("%s\n", s58[4]);
	printf("\n");
	printf("[expected]\n");
	printf("hola4\ncomo4\nte2\nva2\n(null)\n");
		
		
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strmapi]\n");
	char *s54;
	s54 = ft_strmapi("australia", ft_toindex);//FT_STRMAPI		ft_toindex
	printf("%s\n", s54);
	printf("\n");
	printf("[expected]\n");
	printf("012345678\n");
	printf("-----------------------------------------------------------------------------\n");
		

	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_itoa]\n");
	printf("%s\n", ft_itoa(198600));//FT_ITOA
	printf("\n");
	printf("[expected]\n");
	printf("198600\n");
	printf("-----------------------------------------------------------------------------\n");
	
	printf("[ft_putchar_fd]\n");
	ft_putchar_fd('g', 1);//FT_PUTCHAR_FD	
	printf("\n");
	printf("\n");
	printf("[expected]\n");
	printf("g\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_putstr_fd]\n");
	ft_putstr_fd("Muse", 1);//FT_PUTSTR_FD	
	printf("\n");
	printf("\n");
	printf("[expected]\n");
	printf("Muse\n");
	printf("-----------------------------------------------------------------------------\n");


	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_putstr_fd]\n");
	ft_putstr_fd("Muse", 1);//FT_PUTSTR_FD	
	printf("\n");
	printf("\n");
	printf("[expected]\n");
	printf("Muse\n");



	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_putendl_fd]\n");
	ft_putendl_fd("Thorn", 1);//FT_PUTENDL_FD	
	printf("\n");
	printf("[expected]\n");
	printf("Thorn\n");
	printf("-----------------------------------------------------------------------------\n");



	printf("[ft_putnbr_fd]\n");
	ft_putnbr_fd(-31416, 1);//FT_PUTNBR_FD	
	printf("\n");
	printf("\n");
	printf("[expected]\n");
	printf("-31416\n");
	printf("-----------------------------------------------------------------------------\n");



}


char	ft_toindex(unsigned int index, char c)
{
	return (c - c + 48 + index);
}
