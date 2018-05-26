
#ifndef GOVERNANCE_POPCHAIN_H
#define GOVERNANCE_POPCHAIN_H



class testpopchain : public CGovernanceObject
{
private:
    int a;

public:
    testpopchain(int a):a(a){}
    int ra();
}




#endif
