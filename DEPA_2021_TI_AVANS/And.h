#pragma once
#include "Node.h"
class And :
    public Node
{
public:
    void    accept(Visitor&)    override;
};