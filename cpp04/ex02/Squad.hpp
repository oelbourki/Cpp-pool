/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:25:07 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:25:07 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ISquad.hpp"
class Squad : public ISquad
{
    typedef struct _marine_list
    {
        ISpaceMarine *marin;
        struct _marine_list *next;
    } t_marine_list;
    public:
        Squad();
        virtual ~Squad();
        int getCount() const;
        ISpaceMarine* getUnit(int) const;
        int push(ISpaceMarine*);
    private:
        int     _marines;
        t_marine_list *_list;
};
