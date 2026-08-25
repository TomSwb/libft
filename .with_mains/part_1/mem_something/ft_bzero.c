/**
 * @author TomSwb
 * @version 0.1
 * @date 2026-08-25
 */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *b, size_t len);

int  main(void)
{
  size_t  n = 5;
  unsigned char  bufft[10] = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'};
  unsigned char  bufog[10] = {'z', 'z', 'z', 'z', 'z', 'z', 'z', 'z', 'z', 'z'};
  size_t  i = 0;
  size_t  len = 10;

  printf("Init FT buffer: ");
  while (i < len)
  {
    printf("%zu == %02x / '%c', ", i, bufft[i], bufft[i]);
    i++;
  }
  printf("\n");
  i = 0;
  printf("Init OG buffer: ");
  while (i < len)
  {
    printf("%zu == %02x / '%c', ", i, bufog[i], bufog[i]);
    i++;
  }
  printf("\n");
  ft_bzero(bufft, n);
  bzero(bufog, n);
  i = 0;
  printf("ft_bzero buffer: ");
  while (i < len)
  {
    printf("%zu == %02x / '%c', ", i, bufft[i], bufft[i]);
    i++;
  }
  printf("\n");
  i = 0;
  printf("bzero buffer: ");
  while (i < len)
  {
    printf("%zu == %02x / '%c', ", i, bufog[i], bufog[i]);
    i++;
  }
  printf("\n");
}

void  ft_bzero(void *b, size_t len)
{
  unsigned char  *ptr;
  size_t  i;
  
  ptr = (unsigned char *)b;
  i = 0;
  while (i < len)
  {
    ptr[i] = '\0';
    i++;
  }
}
