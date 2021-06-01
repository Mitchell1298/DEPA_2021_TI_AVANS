#pragma once
class And;
class Or;


class Visitor
{
public:
    virtual void visit(And&) {}
    virtual void visit(Or&) {}
};
