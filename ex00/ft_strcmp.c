/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:34:21 by vinda-si          #+#    #+#             */
/*   Updated: 2024/11/19 19:55:29 by vinda-si         ###   ########.fr       */
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
