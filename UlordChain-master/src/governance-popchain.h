// Copyright (c) 2014-2017 The Dash Core developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef GOVERNANCE_POPCHAIN_H
#define GOVERNANCE_POPCHAIN_H



class testpopchain : public CGovernanceObject
{
private:
    int a;

public:
    testpopchain(int a):a(a){}
    int ra(){return a;}
};




#endif
