/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:57:27 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/04 08:50:15 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	count_a;
	int	count_b;

	count_a = 0;
	count_b = 0;
	while (dest[count_a] != '\0')
		count_a++;
	while (src[count_b] != '\0')
	{
		dest[count_a] = src[count_b];
		count_a++;
		count_b++;
	}
	dest[count_a] = '\0';
	return (dest);
}
