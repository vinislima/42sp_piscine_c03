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
