/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:48:47 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/13 16:37:19 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_STOCK_H
# define FT_STOCK_H

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

#endif //FT_STOCK_H