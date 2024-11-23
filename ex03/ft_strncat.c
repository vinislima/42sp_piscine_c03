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