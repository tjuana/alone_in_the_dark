/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mate.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuana <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:57:46 by tjuana            #+#    #+#             */
/*   Updated: 2019/05/27 14:44:31 by tjuana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATE_H
# define MATE_H

#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(char *s);
int		fou(char **desk, int h, int w);
int		figure(char f);
int		tour(char **desk, int h, int w);
int		pion(char **desk, int h, int w);

#endif
