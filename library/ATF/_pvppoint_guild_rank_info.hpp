// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _pvppoint_guild_rank_info
    {
        struct _list
        {
            unsigned int dwSerial;
            unsigned __int16 wRank;
            char wszGuildName[17];
            char byRace;
            char byGrade;
            long double dKillPvpPoint;
            long double dGuildBattlePvpPoint;
            long double dSumPvpPoint;
        };
        unsigned __int16 wRaceCnt[4];
        unsigned __int16 wCount;
        _list list[500];
    };    
    #pragma pack(pop)
    static_assert(ATF::checkSize<_pvppoint_guild_rank_info, 28016>(), "_pvppoint_guild_rank_info");
END_ATF_NAMESPACE
