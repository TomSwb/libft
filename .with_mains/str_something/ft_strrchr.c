/**
 * @author TomSwb
 * @version 0.1
 * @date 2026-08-21
 */

#include <stdio.h>
#include <string.h>

char  *ft_strrchr(const char s*, int c);

int  main(int ac, char **av)
{
  char  *s;
  int    c;

  if (ac > 2)
  {
    s = av[1];
    c = av[2][0];
  }
  else
      (void) ac;
  printf("FT: %s\n", ft_strrchr(s, c));
  printf("OG: %s\n", strrchr(s, c));
}

char  *ft_strrchr(const char s*, int c)
{
  char *ptr

  ptr = NULL;
  c = (char)c;
  while (*s)
  {
    if (*s == c)
      ptr = (char *)s;
    s++;
  }
  if (c == '\0')
    return ((char *)s);
  return (ptr);
}
