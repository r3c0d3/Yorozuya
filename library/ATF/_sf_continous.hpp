// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _sf_continous
    {
        bool m_bExist;
        char m_byEffectCode;
        unsigned __int16 m_wEffectIndex;
        char m_byLv;
        unsigned int m_dwStartSec;
        unsigned __int16 m_wDurSec;
        unsigned int m_dwEffSerial;
        int m_nCumulCounter;
        unsigned int m_dwPlayerSerial;
        char m_wszPlayerName[17];
    public:
        static unsigned int GetSFContCurTime();
        _sf_continous();
        void ctor__sf_continous();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_sf_continous, 48>(), "_sf_continous");
END_ATF_NAMESPACE
