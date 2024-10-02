#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    char *trim;

    if(!s1 || !set)
        return (NULL);
    start = 0;
    while(s1[start] && ft_strchr(set, s1[start]))
        start++;
    end = ft_strlen(s1) - 1;
    while(end >= start && ft_strchr(set, s1[end]))
        end--;
    trim = malloc(sizeof(char) * (end - start + 2));
    if(!trim)
        return (NULL);
    ft_strlcpy(trim, &s1[start], end - start + 2);
    return (trim);
}
