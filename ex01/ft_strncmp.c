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
