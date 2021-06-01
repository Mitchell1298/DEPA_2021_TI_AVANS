#pragma once
#include "Node.h"
class Or :
    public Node
{
public:
    void    accept(Visitor&)    override;
};
