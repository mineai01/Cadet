
#include "libft.h"

int main(void)
{
    // printf("%d\n",ft_isalpha(65));
    //printf("%d\n",ft_isdigit('0'));
    //printf("%d\n",ft_isalnum('%'));
    //printf("%d\n",ft_isascii('%'));
    //printf("%d\n",ft_isprint(11));
    printf("%zu\n",ft_strlen("sss"));
    return(0);
}

/*
int main(void)//ft_memset
{
    char str[50];
	printf("%s\n",((char*)ft_memset(str, 65, 5)));
	return (0);
}
*/
/*
int main(void)//ft_memcpy and ft_memmove
{
    char    H[] = "abc123deghjklqwertyu";
    char    h[] = "abc123deghjklqwertyu";

	printf("%s\n",((char*)ft_memmove(h+3, h, 10)));
    printf("%s\n",((char*)ft_memcpy(H+3, H, 10)));
	return (0);
}
*/
/*
int main(void)//ft_strlcat
{
    char    H[5] = "Hello";
    char    h[] = "_and_Good_Bye";

	printf("%zu\n",(ft_strlcat(H, h, 5)));
	return (0);
}

int main(void)//ft_strchr
{
    char    b[7] = "likekly";


	printf("%s\n",(ft_strchr(b, 'k')));
 	return (0);
}
int main(void)//ft_strchr
{
    char    H[7] = "likekly";

    printf("%s\n",(ft_strrchr(H, 'k')));
	return (0);
}
int main(void)//strncmp
{
    char    s1[7] = "lgkekly";
    char    s2[7] = "likekly";

    printf("%d\n",(ft_strncmp(s1, s2, 2)));
	return (0);
}
int main(void)//ft_memchr
{
    char    s2[7] = "sikekly";

    printf("%s\n",(char*)(ft_memchr(s2, 'e', 4)));
	return (0);
}
int main(void)//ft_memcmp
{
    char    s1[7] = "sikrkly";
    char    s2[7] = "sikekly";

    printf("%d\n",ft_memcmp(s1, s2, 4));
	return (0);
}
int main(void)//ft_memcmp
{
    char    s1[7] = "sikrkly";
    char    s2[7] = "k";

    printf("%s\n",ft_strnstr(s1, s2, 2));
	return (0);
}
int main(void)
{
    char    s1[] = "20550";

    printf("%d\n",ft_atoi(s1));
}   
*/