/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:07:09 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/05 11:27:02 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count_a;
	unsigned int	count_b;

	count_a = 0;
	count_b = 0;
	while (dest[count_a] != '\0')
	{
		count_a++;
	}
	while (src[count_b] != '\0' && count_b < nb)
	{
		dest[count_a] = src[count_b];
		count_a++;
		count_b++;
	}
	dest[count_a] = '\0';
	return (dest);
}
