/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@hive.student.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:43:39 by yhsu              #+#    #+#             */
/*   Updated: 2023/10/30 15:55:28 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c = c + 32;
    }
    return (c);
}
/*
int main()
{
    int c = 126;
    ft_tolower(c);
    printf("%c\n%i", c, c);
}
*/
