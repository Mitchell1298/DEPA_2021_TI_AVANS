#pragma once
#include "Visitor.h"

class LogicGateVisitor :
    public Visitor
{
    void visit(And&) override;
    void visit(Or&)    override;
};

