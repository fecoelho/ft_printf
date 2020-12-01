# ft_printf
Because I'm tired of using putnbr and putstr

### ToC
- [O que é o ft_printf?](#o-que---o-ft_printf)
- [Como usar:](#como-usar)

<a name="o-que---o-ft_printf"></a>
#### O que é o ft_printf?
É um projeto da [42 São Paulo](https://www.42sp.org.br/) que visa reconstruir a biblioteca `printf` com funcionalidades básicas.
Eu tentei implementar o máximo possível do original e também alguns extras que achei interessantes.

<a name="como-usar"></a>
#### Como usar:
Para compilar, use o comando `make` na pasta que clonou. Isso vai compilar **libftprintf.a**. Para usar, iclua `ft_printf.h` nos includes do seu programa e use do mesmo jeito que o printf:

```c
#include "ft_printf.h"

int main()
{
  int i;

  i = 42;
  ft_printf("value: %d\n", i);
  ft_printf("%s, %s!\n", "Hello", "world");
}

// value: 42
// Hello world
```
Então compile com o programa:
```console
gcc -Wall -Werror -Wextra main.c libftprintf.a -I includes
```
