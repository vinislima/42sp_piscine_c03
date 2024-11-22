/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:34:21 by vinda-si          #+#    #+#             */
/*   Updated: 2024/11/22 20:37:55 by vinda-si         ###   ########.fr       */
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
