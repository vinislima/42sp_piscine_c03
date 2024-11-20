/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:54:13 by vinda-si          #+#    #+#             */
/*   Updated: 2024/11/19 23:26:26 by vinda-si         ###   ########.fr       */
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
