#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isblank(int c);
int		ft_isdigit(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

char	*ft_strcpy(char *dst, const char *src);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strcat(char *dst, const char *src);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
size_t	ft_strnlen(const char *s, size_t maxlen);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *str, const char *substr);
char	*ft_strnstr(const char *str, const char *substr, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_mempcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);
char	*ft_strndup(const char *s, size_t n);
char	*ft_stpcpy(char *dst, const char *src);

int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);

void	ft_putstr_fd(char *s, int fd);
int		ft_putstr(const char *str);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
int		ft_putchar(char c);
int		ft_putnbr(int nbr);
void	ft_putnbr_fd(int nbr, int fd);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char    *ft_strtrim(char const *s1, char const *set);
char	**ft_split(const char *str, const char *charset);
char	*ft_strjoin(const char *str1, const char *str2);
char	*ft_conv_to_base(unsigned long num, const char *base_to);
int		ft_putnbr_base(long num, const char *base_to);
char	*ft_itoa(int num);
char	*ft_strrev(char *str);

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif