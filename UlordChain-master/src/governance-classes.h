// Copyright (c) 2017-2018 The Popchain Core Developers

#ifndef GOVERNANCE_CLASSES_H
#define GOVERNANCE_CLASSES_H

//#define ENABLE_UC_DEBUG

#include "base58.h"
#include "governance.h"
#include "key.h"
#include "script/standard.h"
#include "util.h"

#include <boost/shared_ptr.hpp>

class CSuperblock;
class CSuperblockManager;

static const int TRIGGER_UNKNOWN            = -1;
static const int TRIGGER_SUPERBLOCK         = 1000;

typedef boost::shared_ptr<CSuperblock> CSuperblock_sptr;

/**
*   Superblock Manager
*
*   Class for querying superblock information
*/

class CSuperblockManager
{
private:
    static bool GetBestSuperblock(CSuperblock_sptr& pSuperblockRet, int nBlockHeight);

public:

    static bool IsSuperblockTriggered(int nBlockHeight);
    static bool IsSuperblockVoteTriggered(int nBlockHeight);
    static void AppendFoundersReward(CMutableTransaction &txNewRet, int nBlockHeight,CTxOut&  txoutFound);
    static void CreateSuperblock(CMutableTransaction& txNewRet, int nBlockHeight, CTxOut&  txoutFound);

    static bool IsValid(const CTransaction& txNew, int nBlockHeight, CAmount blockReward);
};



/**
*   Trigger : Superblock
*
*   - Create payments on the network
*
*   object structure:
*   {
*       "governance_object_id" : last_id,
*       "type" : govtypes.trigger,
*       "subtype" : "superblock",
*       "superblock_name" : superblock_name,
*       "start_epoch" : start_epoch,
*       "payment_addresses" : "addr1|addr2|addr3",
*       "payment_amounts"   : "amount1|amount2|amount3"
*   }
*/


// Popchain DevTeam
class CSuperblock
{
private:

public:

    CSuperblock();
    CSuperblock(uint256& nHash);

    static bool IsValidBlockHeight(int nBlockHeight);
    static CAmount GetPaymentsLimit(int nBlockHeight); 
	static bool IsFounderValid(const CTransaction& txNew, int nBlockHeight, CAmount blockReward);

    // may use in the future
    bool IsValid(const CTransaction& txNew, int nBlockHeight, CAmount blockReward);
};

#endif
