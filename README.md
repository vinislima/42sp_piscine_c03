# [C 03](https://github.com/vinislima/42sp_piscine_c03)

The functions in Module C 03 focus on replicating standard C library string operations. They include comparing strings (`ft_strcmp`, `ft_strncmp`), concatenating strings (`ft_strcat`, `ft_strncat`), finding substrings (`ft_strstr`), and managing string length during concatenation (`ft_strlcat`). These exercises aim to deepen understanding of string handling and manipulation in C.

- **`ft_strcmp`** - Recreates the behaviour of the `strcmp` function, comparing two strings lexicographically.
- **`ft_strncmp`** - Recreates the behaviour of the `strncmp` function, comparing up to `n` characters of two strings lexicographically.
- **`ft_strcat`** - Recreates the behaviour of the `strcat` function, appending the source string (`src`) to the end of the destination string (`dest`).
- **`ft_strncat`** - Recreates the behaviour of the `strncat` function, appending up to `n` characters of the source string (`src`) to the end of the destination string (`dest`).
- **`ft_strstr`** - Recreates the behaviour of the `strstr` function, locating the first occurrence of a substring (`to_find`) within a string (`str`).
- **`ft_strlcat`** - Recreates the behaviour of the `strlcat` function, appending a source string (`src`) to a destination string (`dest`) with size constraints, and returning the total length of the string it tried to create.

This module in the 42 C Piscine focuses on advanced string manipulation using functions that replicate behaviours from the C standard library. The tasks progress in difficulty, covering comparisons, concatenation, substring searches, and string length management.

Students must follow strict norms and submit only the required files to pass the automated grading system, Moulinette. Adherence to these guidelines ensures the code compiles and functions correctly under specific compiler flags (`-Wall -Wextra -Werror`).

## Usage

Uncomment the main and use the command below.

```c
cc -Wall -Wextra -Werror {file}

```

---
<details>
    <summary>Exercises:</summary>

- [ex00:](https://github.com/vinislima/42sp_piscine_c03/blob/main/ex00/ft_strcmp.c)
    
    ```c
    /* ************************************************************************** */
    /*                                                                            */
    /*                                                        :::      ::::::::   */
    /*   ft_strcmp.c                                        :+:      :+:    :+:   */
    /*                                                    +:+ +:+         +:+     */
    /*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
    /*                                                +#+#+#+#+#+   +#+           */
    /*   Created: 2024/08/29 09:34:21 by vinda-si          #+#    #+#             */
    /*   Updated: 2024/11/22 20:39:09 by vinda-si         ###   ########.fr       */
    /*                                                                            */
    /* ************************************************************************** */
    
    // Essa função têm como objetivo comparar duas strings
    // e retornar um valor inteiro que representa a diferença
    // entre elas, caso não haja diferença, a função retornará 0.
    int	ft_strcmp(char *s1, char *s2);
    
    int	ft_strcmp(char *s1, char *s2)
    {
    	// realizo a declaração de uma variável que será utilizada
    	// como um contador
    	int	count;
    	// atribuímos o valor de zero ao contador, para percorrer as strings
    	count = 0;
    	// enquanto os elementos das strings forem iguais e diferentes de nulo
    	// o laço será executado
    	while ((s1[count] == s2[count])
    		&& (s1[count] != '\0') && (s2[count] != '\0'))
    	{
    		// enquanto a condição for verdadeira, o contador é incrementado
    		count++;
    	}
    	// ao final do laço, é retornado a diferença entre os elementos
    	return (s1[count] - s2[count]);
    }
    
    // main begin here
    // #include <stdio.h>
    // #include <string.h>
    
    // int	main(void)
    // {
    // 	// Test cases
    // 	char *test_cases[][2] = {
    // 		{"hello", "hello"},
    // 		{"hello", "world"},
    // 		{"apple", "apples"},
    // 		{"", ""},
    // 		{"", "non-empty"},
    // 		{"non-empty", ""},
    // 		{"abc", "abz"},
    // 		{"same", "same"},
    // 		{NULL, NULL} // Marcador para o fim dos testes
    // 	};
    
    // 	int i = 0; // contador para percorrer os testes
    // 	while (test_cases[i][0] != NULL && test_cases[i][1] != NULL)
    // 	{
    // 		char *s1 = test_cases[i][0];
    // 		char *s2 = test_cases[i][1];
    		
    // 		// Resultados das funções
    // 		int result_ft = ft_strcmp(s1, s2);
    // 		int result_lib = strcmp(s1, s2);
    
    // 		// Exibição dos resultados
    // 		printf("Test %d:\n", i + 1);
    // 		printf("  Strings: \"%s\" vs \"%s\"\n", s1, s2);
    // 		printf("  ft_strcmp: %d | strcmp: %d\n", result_ft, result_lib);
    // 		printf("  Match: %s\n", (result_ft == result_lib) ? "Yes" : "No");
    // 		printf("\n");
    
    // 		i++;
    // 	}
    
    // 	return (0);
    // }
    ```
    
- [ex01:](https://github.com/vinislima/42sp_piscine_c03/blob/main/ex01/ft_strncmp.c)
    
    ```c
    /* ************************************************************************** */
    /*                                                                            */
    /*                                                        :::      ::::::::   */
    /*   ft_strncmp.c                                       :+:      :+:    :+:   */
    /*                                                    +:+ +:+         +:+     */
    /*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
    /*                                                +#+#+#+#+#+   +#+           */
    /*   Created: 2024/08/29 13:54:13 by vinda-si          #+#    #+#             */
    /*   Updated: 2024/11/22 20:57:26 by vinda-si         ###   ########.fr       */
    /*                                                                            */
    /* ************************************************************************** */
    
    // A função ft_strncmp compara duas strings até o limite de n caracteres.
    int	ft_strncmp(char *s1, char *s2, unsigned int n);
    // A função ft_strlen calcula o tamanho da string.
    int	ft_strlen(char *str);
    // Essa função recebe uma string e calcula o tamanho dela.
    int	ft_strlen(char *str)
    {
    	// declaramos um inteiro que será o contador.
    	int	i;
    	// atribuímos o valor 1 para o contador
    	i = 1;
    	// enquanto o caractere for diferente de '\0'
    	// o laço continuará.
    	while (str[i] != '\0')
    	{
    		// o contador é incrementado.
    		i++;
    	}
    	// ao final, o contador retorna o tamanho da string.
    	return (i);
    }
    // A função ft_strncmp compara duas strings até o limite de n caracteres.
    int	ft_strncmp(char *s1, char *s2, unsigned int n)
    {
    	// declaramos três variáveis.
    	// um unsigned int para contar o número de caracteres.
    	unsigned int	count;
    	// dois int para contar o tamanho das strings.
    	int				count_s1;
    	int				count_s2;
    	// atribuímos o tamanho das strings para as variáveis
    	// utilizando a função ft_strlen
    	count_s1 = ft_strlen(s1);
    	count_s2 = ft_strlen(s2);
    	// se n for menor ou igual a 0, a função retorna 0
    	if (n <= 0)
    		return (0);
    	// iniciamos o contador com 0
    	count = 0;
    	// enquanto a string 1 for igual a string 2 e o contador for menor que n - 1
    	// e as strings não forem nulas o laço continuará.
    	while ((s1[count] == s2[count]) && (count < n - 1)
    		&& (s1[count] && s2[count]))
    	{
    			// o contador é incrementado
    			count++;
    	}
    	// quando o laço terminar, a função retornará a diferença entre os caracteres
    	return (s1[count] - s2[count]);
    }
    
    // begin of main
    
    // #include <stdio.h>
    // #include <string.h>
    
    // // Prototipo da função ft_strncmp
    // int ft_strncmp(char *s1, char *s2, unsigned int n);
    
    // int main(void)
    // {
    // 	// Casos de teste para ft_strncmp
    // 	struct {
    // 		char *s1;
    // 		char *s2;
    // 		unsigned int n;
    // 	} test_cases[] = {
    // 		{"hello", "hello", 5},
    // 		{"hello", "world", 3},
    // 		{"apple", "apples", 6},
    // 		{"test", "test123", 4},
    // 		{"test", "test", 0},
    // 		{"abcdef", "abcdeg", 5},
    // 		{"", "", 3},
    // 		{"", "non-empty", 5},
    // 		{"non-empty", "", 5},
    // 		{NULL, NULL, 0} // Marcador de fim
    // 	};
    
    // 	int i = 0; // contador para percorrer os testes
    // 	while (test_cases[i].s1 != NULL && test_cases[i].s2 != NULL)
    // 	{
    // 		char *s1 = test_cases[i].s1;
    // 		char *s2 = test_cases[i].s2;
    // 		unsigned int n = test_cases[i].n;
    
    // 		// Resultados das funções
    // 		int result_ft = ft_strncmp(s1, s2, n);
    // 		int result_lib = strncmp(s1, s2, n);
    
    // 		// Exibição dos resultados
    // 		printf("Test %d:\n", i + 1);
    // 		printf("  Strings: \"%s\" vs \"%s\", n = %u\n", s1, s2, n);
    // 		printf("  ft_strncmp: %d | strncmp: %d\n", result_ft, result_lib);
    // 		printf("  Match: %s\n\n", (result_ft == result_lib) ? "Yes" : "No");
    
    // 		i++;
    // 	}
    
    // 	return 0;
    // }
    ```
    
- [ex02:](https://github.com/vinislima/42sp_piscine_c03/blob/main/ex02/ft_strcat.c)
    
    ```c
    /* ************************************************************************** */
    /*                                                                            */
    /*                                                        :::      ::::::::   */
    /*   ft_strcat.c                                        :+:      :+:    :+:   */
    /*                                                    +:+ +:+         +:+     */
    /*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
    /*                                                +#+#+#+#+#+   +#+           */
    /*   Created: 2024/08/29 19:57:27 by vinda-si          #+#    #+#             */
    /*   Updated: 2024/11/22 21:17:32 by vinda-si         ###   ########.fr       */
    /*                                                                            */
    /* ************************************************************************** */
    
    // a função ft_strcat concatena duas strings.
    char	*ft_strcat(char *dest, char *src);
    // ela recebe duas strings como parâmetro
    // uma de destino e outra de origem.
    char	*ft_strcat(char *dest, char *src)
    {
    	// declaramos dois inteiros para
    	// sabermos para sabermos onde devemos começar
    	// a concatenar a string.
    	int	count_a;
    	int	count_b;
    	// atribuímos 0 para os contadores.
    	count_a = 0;
    	count_b = 0;
    	// enquanto o caractere de destino for diferente de '\0'
    	// o laço continuará.
    	while (dest[count_a] != '\0')
    		// o contador é incrementado.
    		count_a++;
    	// quando o primeiro laço terminar, iniciamos outro a
    	// partir do caractere nulo de destino.
    	while (src[count_b] != '\0')
    	{
    		// destino recebe o caractere de origem a partir
    		// iniciando da ultima posição, recebendo
    		// a primeira posição da origem.
    		dest[count_a] = src[count_b];
    		// seguimos incrementando os contadores.
    		count_a++;
    		count_b++;
    	}
    	// ao final, o caractere nulo é adicionado ao destino.
    	dest[count_a] = '\0';
    	// e a função retorna o destino.
    	return (dest);
    }
    
    // begin of main
    
    // #include <stdio.h>
    // #include <string.h>
    
    // // Protótipo da função ft_strcat
    // char *ft_strcat(char *dest, char *src);
    
    // int	main(void)
    // {
    // 	// Buffers para teste
    // 	char dest1[50] = "Hello";
    // 	char dest2[50] = "Hello";
    // 	char *src = " World";
    
    // 	// Testando a concatenação
    // 	printf("Antes da concatenação:\n");
    // 	printf("  dest1 (ft_strcat): \"%s\"\n", dest1);
    // 	printf("  dest2 (strcat): \"%s\"\n", dest2);
    // 	printf("  src: \"%s\"\n\n", src);
    
    // 	// Chamadas das funções
    // 	ft_strcat(dest1, src);
    // 	strcat(dest2, src);
    
    // 	// Resultados após concatenação
    // 	printf("Depois da concatenação:\n");
    // 	printf("  ft_strcat: \"%s\"\n", dest1);
    // 	printf("  strcat: \"%s\"\n", dest2);
    // 	printf("  Match: %s\n", (strcmp(dest1, dest2) == 0) ? "Yes" : "No");
    
    // 	return (0);
    // }
    ```
    
- [ex03:](https://github.com/vinislima/42sp_piscine_c03/blob/main/ex03/ft_strncat.c)
    
    ```c
    /* ************************************************************************** */
    /*                                                                            */
    /*                                                        :::      ::::::::   */
    /*   ft_strncat.c                                       :+:      :+:    :+:   */
    /*                                                    +:+ +:+         +:+     */
    /*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
    /*                                                +#+#+#+#+#+   +#+           */
    /*   Created: 2024/08/31 15:07:09 by vinda-si          #+#    #+#             */
    /*   Updated: 2024/11/22 22:03:14 by vinda-si         ###   ########.fr       */
    /*                                                                            */
    /* ************************************************************************** */
    
    // A função ft_strncat concatena duas strings até o limite de n caracteres.
    char	*ft_strncat(char *dest, char *src, unsigned int nb);
    // ela recebe duas strings como parâmetro e um inteiro, que é o limite de caracteres.
    char	*ft_strncat(char *dest, char *src, unsigned int nb)
    {
    	// declaramos dois inteiros que serão os contadores.
    	unsigned int	count_a;
    	unsigned int	count_b;
    	// atribuímos 0 para os contadores.
    	count_a = 0;
    	count_b = 0;
    	// enquanto o caractere de destino for diferente de '\0'
    	// o laço continuará.
    	while (dest[count_a] != '\0')
    	{
    		// o contador é incrementado.
    		// enquanto o caractere de destino for
    		// diferente de nulo.
    		count_a++;
    	}
    	// quando o primeiro laço terminar, iniciamos outro a
    	// partir do caractere nulo de destino.
    	// enquanto o caractere de origem for diferente de nulo
    	// e o contador for menor que o limite de caracteres
    	// o laço continuará.
    	while (src[count_b] != '\0' && count_b < nb)
    	{
    		// destino recebe o caractere de origem a partir
    		// iniciando da ultima posição, recebendo
    		// a primeira posição da origem.
    		dest[count_a] = src[count_b];
    		// seguimos incrementando os contadores.
    		count_a++;
    		count_b++;
    	}
    	// ao final, o caractere nulo é adicionado ao
    	// final do destino.
    	dest[count_a] = '\0';
    	// e a função retorna o destino.
    	return (dest);
    }
    
    // // begin of main
    
    // #include <stdio.h>
    // #include <string.h> // Para usar a função original strncat
    
    // int	main(void)
    // {
    // 	// Definição de variáveis para teste
    // 	char dest1[50] = "Hello, ";  // Buffer grande o suficiente para concatenar
    // 	char src1[] = "World!";
    // 	unsigned int n1 = 3; // Limite de caracteres a serem concatenados
    
    // 	char dest2[50] = "Hello, ";  // Outra cópia para comparar com strncat
    // 	char src2[] = "World!";
    
    // 	// Teste usando ft_strncat
    // 	printf("Antes de ft_strncat: dest1 = '%s'\n", dest1);
    // 	ft_strncat(dest1, src1, n1);
    // 	printf("Depois de ft_strncat: dest1 = '%s'\n", dest1);
    
    // 	// Teste usando a função original strncat
    // 	printf("\nAntes de strncat: dest2 = '%s'\n", dest2);
    // 	strncat(dest2, src2, n1);
    // 	printf("Depois de strncat: dest2 = '%s'\n", dest2);
    
    // 	// Comparação dos resultados
    // 	if (strcmp(dest1, dest2) == 0)
    // 		printf("\nOs resultados são iguais!\n");
    // 	else
    // 		printf("\nOs resultados são diferentes!\n");
    
    // 	return 0;
    // }
    ```
    
- [ex04:](https://github.com/vinislima/42sp_piscine_c03/blob/main/ex04/ft_strstr.c)
    
    ```c
    /* ************************************************************************** */
    /*                                                                            */
    /*                                                        :::      ::::::::   */
    /*   ft_strstr.c                                        :+:      :+:    :+:   */
    /*                                                    +:+ +:+         +:+     */
    /*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
    /*                                                +#+#+#+#+#+   +#+           */
    /*   Created: 2024/08/31 15:56:37 by vinda-si          #+#    #+#             */
    /*   Updated: 2024/11/22 22:30:26 by vinda-si         ###   ########.fr       */
    /*                                                                            */
    /* ************************************************************************** */
    
    // A função ft_strstr encontra a primeira ocorrência da string to_find na string str.
    char	*ft_strstr(char *str, char *to_find);
    // Ela recebe duas strings como parâmetro, uma de destino e outra de origem.
    char	*ft_strstr(char *str, char *to_find)
    {
    	// declaramos dois inteiros que serão os contadores.
    	int	count_a;
    	int	count_b;
    	// se a string to_find for nula, a função retorna a string str.
    	if (to_find[0] == '\0')
    	{
    		// retorna a string str.
    		return (str);
    	}
    	// caso contrário, iniciamos o contador com 0.
    	count_a = 0;
    	// enquanto o caractere de str for diferente de nulo
    	// o laço continuará, verificando se a string to_find
    	// está contida na string str.
    	while (str[count_a] != '\0')
    	{
    		// iniciamos o contador b com 0.
    		count_b = 0;
    		// se cairmos nesse laço, significa que o caractere
    		// foi encontrado a partir da posição count_a e iremos
    		// comparar se a string to_find está contida na string str
    		// incrementando o contador b.
    		while (str[count_a + count_b] == to_find[count_b])
    		{
    			// a partir daqui, o contador b é incrementado.
    			count_b++;
    			// se o contador b for igual a nulo, significa que
    			// a string to_find foi encontrada e a função retorna
    			// a string str a partir da posição count_a.
    			if (to_find[count_b] == '\0')
    				return (&str[count_a]);
    		}
    		count_a++;
    	}
    	// se a string to_find não for encontrada, a função retorna nulo.
    	return (0);
    }
    
    // //begin of main
    // #include <stdio.h>
    // #include <string.h>
    
    // int	main(void)
    // {
    // 	// Casos de teste
    // 	char str1[] = "Hello, World!";
    // 	char to_find1[] = "World";
    // 	char to_find2[] = "Hello";
    // 	char to_find3[] = "";
    // 	char to_find4[] = "XYZ";
    // 	char to_find5[] = "o, W";
    // 	char to_find6[] = "Hello, World!"; // Igual à string inteira
    		
    // 	// Array de substrings para teste
    // 	char *to_find_tests[] = {to_find1, to_find2, to_find3, to_find4, to_find5, to_find6};
    // 	int num_tests = sizeof(to_find_tests) / sizeof(to_find_tests[0]);
    
    // 	int i = 0; // Contador para o loop
    // 	while (i < num_tests) {
    // 		printf("Test %d:\n", i + 1);
    // 		printf("  String: \"%s\"\n", str1);
    // 		printf("  Substring: \"%s\"\n", to_find_tests[i]);
    		
    // 		// Testa a função ft_strstr
    // 		char *result_ft = ft_strstr(str1, to_find_tests[i]);
    // 		char *result_orig = strstr(str1, to_find_tests[i]);
    
    // 		// Exibe os resultados
    // 		printf("  ft_strstr: %s\n", result_ft ? result_ft : "(null)");
    // 		printf("  strstr:	%s\n", result_orig ? result_orig : "(null)");
    
    // 		// Verifica se os resultados coincidem
    // 		if (result_ft == result_orig || (result_ft && result_orig && strcmp(result_ft, result_orig) == 0)) {
    // 			printf("  Result: OK\n");
    // 		} else {
    // 			printf("  Result: Mismatch!\n");
    // 		}
    // 		printf("\n");
    // 		i++;
    // 	}
    // 	return (0);
    // }
    
    ```
    </details>
