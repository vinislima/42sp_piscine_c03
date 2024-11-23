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
