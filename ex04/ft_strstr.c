/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:56:37 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/04 10:51:35 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	count_a;
	int	count_b;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	count_a = 0;
	while (str[count_a] != '\0')
	{
		count_b = 0;
		while (str[count_a + count_b] == to_find[count_b])
		{
			count_b++;
			if (to_find[count_b] == '\0')
				return (&str[count_a]);
		}
		count_a++;
	}
	return (0);
}
