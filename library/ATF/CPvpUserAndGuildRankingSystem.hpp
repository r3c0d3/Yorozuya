// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CLogFile.hpp>
#include <CUserRankingProcess.hpp>
#include <_PVP_RANK_DATA.hpp>


START_ATF_NAMESPACE
    struct CPvpUserAndGuildRankingSystem
    {
        CLogFile *m_pkLogger;
        bool m_bInit;
        CUserRankingProcess m_kUserRankingProcess;
    public:
        void ApplyUpdatedBossInfo();
        CPvpUserAndGuildRankingSystem();
        void ctor_CPvpUserAndGuildRankingSystem();
        void CompleteGuildRankStep1(char byRet, char* szData);
        void CompleteGuildRankStep2(char byRet, char* szData);
        void CompleteGuildRankStep3(char byRet, char* szData);
        void CompleteGuildRankStep4(char byRet, char* szData);
        void CompleteRaceRankStep1(char byRet, char* szData);
        void CompleteRaceRankStep10(char byRet, char* szData);
        void CompleteRaceRankStep11(char byRet, char* szData);
        void CompleteRaceRankStep2(char byRet, char* szData);
        void CompleteRaceRankStep3(char byRet, char* szData);
        void CompleteRaceRankStep4(char byRet, char* szData);
        void CompleteRaceRankStep5(char byRet, char* szData);
        void CompleteRaceRankStep6(char byRet, char* szData);
        void CompleteRaceRankStep7(char byRet, char* szData);
        void CompleteRaceRankStep8(char byRet, char* szData);
        void CompleteRaceRankStep9(char byRet, char* szData);
        void CompleteRankInGuildStep1(char byRet, char* szData);
        void CompleteRankInGuildStep2(char byRet, char* szData);
        void CompleteRankInGuildStep3(char byRet, char* szData);
        void CompleteRankInGuildStep4(char byRet, char* szData);
        void CompleteRankInGuildStep5(char byRet, char* szData);
        void CompleteRankInGuildStep6(char byRet, char* szData);
        void CompleteRankUpdateAndSelectGarde(char byRet, char* szData);
        static void Destroy();
        unsigned int FindRank(char byRaceCode, unsigned int dwAvatorSerial);
        char GetBossType(char byRace, unsigned int dwSerial);
        struct _PVP_RANK_DATA* GetCurrentPvpRankData(char byRace, char byNth);
        unsigned int GetCurrentRaceBossSerial(char byRace, char byNth);
        bool Init();
        bool InitLogger();
        static struct CPvpUserAndGuildRankingSystem* Instance();
        bool IsCurrentRaceBossGroup(char byRace, unsigned int dwSerial);
        bool IsRaceViceBoss(char byRace, unsigned int dwSerial);
        bool Load();
        void Log(char* szFormat);
        void Loop();
        void PvpRankDataPacking();
        void PvpRankListRequest(uint16_t wIndex, char byRace, char byVersion, char byPage);
        void SetCurrentRaceBossSerial(char byRace, char byNth, unsigned int dwSerial);
        void SetUpdateRaceBossSerial(char byRace, char byNth, unsigned int dwSerial);
        char UpdateAndSelectGuildGrade(char* szData);
        char UpdateGuildRankStep1(char* szData);
        char UpdateGuildRankStep2(char* szData);
        char UpdateGuildRankStep3(char* szData);
        char UpdateGuildRankStep4(char* szData);
        char UpdateRaceRankStep1(char* szData);
        char UpdateRaceRankStep10(char* szData);
        char UpdateRaceRankStep11(char* szData);
        char UpdateRaceRankStep2(char* szData);
        char UpdateRaceRankStep3(char* szData);
        char UpdateRaceRankStep4(char* szData);
        char UpdateRaceRankStep5(char* szData);
        char UpdateRaceRankStep6(char* szData);
        char UpdateRaceRankStep7(char* szData);
        char UpdateRaceRankStep8(char* szData);
        char UpdateRaceRankStep9(char* szData);
        char UpdateRankinGuildStep1(char* szData);
        char UpdateRankinGuildStep2(char* szData);
        char UpdateRankinGuildStep3(char* szData);
        char UpdateRankinGuildStep4(char* szData);
        char UpdateRankinGuildStep5(char* szData);
        char UpdateRankinGuildStep6(char* szData);
        ~CPvpUserAndGuildRankingSystem();
        void dtor_CPvpUserAndGuildRankingSystem();
    };
END_ATF_NAMESPACE
