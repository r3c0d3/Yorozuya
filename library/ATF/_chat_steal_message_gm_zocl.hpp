// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _chat_steal_message_gm_zocl
    {
        char byMessageType;
        unsigned int dwSenderSerial;
        char wszSenderName[17];
        char byRaceCode;
        bool bFiltering;
        char byPvpGrade;
        char bySize;
        char wszChatData[256];
    public:
        _chat_steal_message_gm_zocl();
        void ctor__chat_steal_message_gm_zocl();
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_chat_steal_message_gm_zocl, 282>(), "_chat_steal_message_gm_zocl");
END_ATF_NAMESPACE
