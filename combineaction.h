#ifndef COMBINEACTION_H
#define COMBINEACTION_H
#include<abstractaction.h>
#include<combo.h>
class CombineAction : public AbstractAction
{
public:
    CombineAction();
    QList<int> indexOfShapes;
    Combo* com;
};

#endif // COMBINEACTION_H
