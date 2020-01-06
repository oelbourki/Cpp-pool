#include "Squad.hpp"

Squad::Squad() : _marines(0),_list(NULL)
{

}
Squad::~Squad()
{
    t_marine_list *iter;

    while (this->_list)
    {
        iter = this->_list->next;
        delete this->_list->marin;
        delete this->_list;
        this->_list = iter;
    }
    
}
int Squad::getCount() const
{
    return this->_marines;
}
ISpaceMarine* Squad::getUnit(int i) const
{
    t_marine_list *unit;

    unit = this->_list;
    while (i != 0 && unit != NULL)
    {
        unit = unit->next;
        i--;
    }
    return unit->marin;
}
int Squad::push(ISpaceMarine* space)
{
    t_marine_list *iter;

    if (this->_list == NULL)
    {
        this->_list = new t_marine_list;
        this->_list->marin = space;
        this->_list->next = NULL;
        this->_marines += 1;
        return 1;
    }
    iter = this->_list;
    while (iter->next)
        iter = iter->next;
    iter->next = new t_marine_list;
    iter->next->marin = space;
    iter->next->next = NULL;
    this->_marines += 1;
    return this->_marines;
}