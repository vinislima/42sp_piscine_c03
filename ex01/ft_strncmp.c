/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:54:13 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/04 16:48:48 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;
	int				count_s1;
	int				count_s2;

	count_s1 = ft_strlen(s1);
	count_s2 = ft_strlen(s2);
	if (n <= 0)
		return (0);
	count = 0;
	while ((s1[count] == s2[count]) && (count < n - 1)
		&& (s1[count] && s2[count]))
	{
			count++;
	}
	return (s1[count] - s2[count]);
}
