// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <DfAIMgr.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using DfAIMgrAction_Attack_OnLoop2_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrAction_Attack_OnLoop2_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrAction_Attack_OnLoop2_ptr);
        using DfAIMgrAction_Change_Handler4_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrAction_Change_Handler4_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrAction_Change_Handler4_ptr);
        using DfAIMgrAction_Patrol_OnLoop6_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrAction_Patrol_OnLoop6_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrAction_Patrol_OnLoop6_ptr);
        using DfAIMgrAction_Runaway_OnLoop8_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrAction_Runaway_OnLoop8_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrAction_Runaway_OnLoop8_ptr);
        using DfAIMgrAction_Wait_OnLoop10_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrAction_Wait_OnLoop10_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrAction_Wait_OnLoop10_ptr);
        using DfAIMgrAssist_OnChange12_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrAssist_OnChange12_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrAssist_OnChange12_ptr);
        using DfAIMgrAssist_OnLoop14_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrAssist_OnLoop14_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrAssist_OnLoop14_ptr);
        using DfAIMgrAtp_Lost_Handler16_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrAtp_Lost_Handler16_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrAtp_Lost_Handler16_ptr);
        using DfAIMgrAtp_SearchStart_OnLoop18_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrAtp_SearchStart_OnLoop18_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrAtp_SearchStart_OnLoop18_ptr);
        using DfAIMgrAtp_Searched_Handler20_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrAtp_Searched_Handler20_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrAtp_Searched_Handler20_ptr);
        using DfAIMgrChangeTargetPos22_ptr = void (WINAPIV*)(struct CMonster*, float*);
        using DfAIMgrChangeTargetPos22_clbk = void (WINAPIV*)(struct CMonster*, float*, DfAIMgrChangeTargetPos22_ptr);
        using DfAIMgrCheckAlienation24_ptr = int (WINAPIV*)(struct CMonster*);
        using DfAIMgrCheckAlienation24_clbk = int (WINAPIV*)(struct CMonster*, DfAIMgrCheckAlienation24_ptr);
        using DfAIMgrCheckEmotionBad26_ptr = int (WINAPIV*)(struct CMonster*, struct CMonsterAI*, int);
        using DfAIMgrCheckEmotionBad26_clbk = int (WINAPIV*)(struct CMonster*, struct CMonsterAI*, int, DfAIMgrCheckEmotionBad26_ptr);
        using DfAIMgrCheckGen28_ptr = int (WINAPIV*)(struct CMonsterAI*, struct CMonster*);
        using DfAIMgrCheckGen28_clbk = int (WINAPIV*)(struct CMonsterAI*, struct CMonster*, DfAIMgrCheckGen28_ptr);
        using DfAIMgrCheckMonArea_N_ChangeState30_ptr = int (WINAPIV*)(struct CMonsterAI*, struct CMonster*, int);
        using DfAIMgrCheckMonArea_N_ChangeState30_clbk = int (WINAPIV*)(struct CMonsterAI*, struct CMonster*, int, DfAIMgrCheckMonArea_N_ChangeState30_ptr);
        using DfAIMgrCheckSPF32_ptr = int (WINAPIV*)(struct CMonsterAI*, struct CMonster*);
        using DfAIMgrCheckSPF32_clbk = int (WINAPIV*)(struct CMonsterAI*, struct CMonster*, DfAIMgrCheckSPF32_ptr);
        using DfAIMgrCheckSPFDelayTime34_ptr = int (WINAPIV*)(struct CMonsterAI*, int, unsigned int);
        using DfAIMgrCheckSPFDelayTime34_clbk = int (WINAPIV*)(struct CMonsterAI*, int, unsigned int, DfAIMgrCheckSPFDelayTime34_ptr);
        using DfAIMgrCheckSPF_MON_MOTIVE_ATTACK_MODE_PASSAGE36_ptr = int (WINAPIV*)(struct CMonsterSkill*, int, struct CMonsterAI*, struct CMonster*, struct CCharacter**);
        using DfAIMgrCheckSPF_MON_MOTIVE_ATTACK_MODE_PASSAGE36_clbk = int (WINAPIV*)(struct CMonsterSkill*, int, struct CMonsterAI*, struct CMonster*, struct CCharacter**, DfAIMgrCheckSPF_MON_MOTIVE_ATTACK_MODE_PASSAGE36_ptr);
        using DfAIMgrCheckSPF_MON_MOTIVE_DF38_ptr = int (WINAPIV*)(struct CMonsterSkill*, int, struct CMonsterAI*, struct CMonster*, struct CCharacter**);
        using DfAIMgrCheckSPF_MON_MOTIVE_DF38_clbk = int (WINAPIV*)(struct CMonsterSkill*, int, struct CMonsterAI*, struct CMonster*, struct CCharacter**, DfAIMgrCheckSPF_MON_MOTIVE_DF38_ptr);
        using DfAIMgrCheckSPF_MON_MOTIVE_MY_HP_DOWN40_ptr = int (WINAPIV*)(struct CMonsterSkill*, int, struct CMonsterAI*, struct CMonster*, struct CCharacter**);
        using DfAIMgrCheckSPF_MON_MOTIVE_MY_HP_DOWN40_clbk = int (WINAPIV*)(struct CMonsterSkill*, int, struct CMonsterAI*, struct CMonster*, struct CCharacter**, DfAIMgrCheckSPF_MON_MOTIVE_MY_HP_DOWN40_ptr);
        using DfAIMgrCheckSPF_MON_MOTIVE_OTHER_HP_DOWN42_ptr = int (WINAPIV*)(struct CMonsterSkill*, int, struct CMonsterAI*, struct CMonster*, struct CCharacter**);
        using DfAIMgrCheckSPF_MON_MOTIVE_OTHER_HP_DOWN42_clbk = int (WINAPIV*)(struct CMonsterSkill*, int, struct CMonsterAI*, struct CMonster*, struct CCharacter**, DfAIMgrCheckSPF_MON_MOTIVE_OTHER_HP_DOWN42_ptr);
        using DfAIMgrCondition_OnChange44_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrCondition_OnChange44_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrCondition_OnChange44_ptr);
        using DfAIMgrCondition_OnLoop46_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrCondition_OnLoop46_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrCondition_OnLoop46_ptr);
        
        using DfAIMgrctor_DfAIMgr48_ptr = void (WINAPIV*)(struct DfAIMgr*);
        using DfAIMgrctor_DfAIMgr48_clbk = void (WINAPIV*)(struct DfAIMgr*, DfAIMgrctor_DfAIMgr48_ptr);
        using DfAIMgrEmotion_OnChange50_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrEmotion_OnChange50_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrEmotion_OnChange50_ptr);
        using DfAIMgrEmotion_OnLoop52_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrEmotion_OnLoop52_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrEmotion_OnLoop52_ptr);
        using DfAIMgrGetWisdomTarget54_ptr = struct CCharacter* (WINAPIV*)(int, struct CMonsterAI*, struct CMonster*);
        using DfAIMgrGetWisdomTarget54_clbk = struct CCharacter* (WINAPIV*)(int, struct CMonsterAI*, struct CMonster*, DfAIMgrGetWisdomTarget54_ptr);
        using DfAIMgrMon_SearchStart_OnLoop56_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrMon_SearchStart_OnLoop56_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrMon_SearchStart_OnLoop56_ptr);
        using DfAIMgrMon_Searched_Handler58_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrMon_Searched_Handler58_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrMon_Searched_Handler58_ptr);
        using DfAIMgrMv_Go_OnLoop60_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrMv_Go_OnLoop60_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrMv_Go_OnLoop60_ptr);
        using DfAIMgrMv_Stop_Handler62_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*);
        using DfAIMgrMv_Stop_Handler62_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, DfAIMgrMv_Stop_Handler62_ptr);
        using DfAIMgrOnDFInitHFSM64_ptr = int (WINAPIV*)(struct UsStateTBL*, struct Us_HFSM*);
        using DfAIMgrOnDFInitHFSM64_clbk = int (WINAPIV*)(struct UsStateTBL*, struct Us_HFSM*, DfAIMgrOnDFInitHFSM64_ptr);
        using DfAIMgrOnDfExternCallFun66_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, int);
        using DfAIMgrOnDfExternCallFun66_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, int, DfAIMgrOnDfExternCallFun66_ptr);
        using DfAIMgrOnUsStateTBLInit68_ptr = int (WINAPIV*)();
        using DfAIMgrOnUsStateTBLInit68_clbk = int (WINAPIV*)(DfAIMgrOnUsStateTBLInit68_ptr);
        using DfAIMgrSearchCharacterPath70_ptr = bool (WINAPIV*)(struct CMonsterAI*, struct CMonster*, struct CCharacter*);
        using DfAIMgrSearchCharacterPath70_clbk = bool (WINAPIV*)(struct CMonsterAI*, struct CMonster*, struct CCharacter*, DfAIMgrSearchCharacterPath70_ptr);
        using DfAIMgrSearchPatrollPath72_ptr = void (WINAPIV*)(struct CMonsterAI*, struct CMonster*);
        using DfAIMgrSearchPatrollPath72_clbk = void (WINAPIV*)(struct CMonsterAI*, struct CMonster*, DfAIMgrSearchPatrollPath72_ptr);
        using DfAIMgrUseSkill_Target74_ptr = int (WINAPIV*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*);
        using DfAIMgrUseSkill_Target74_clbk = int (WINAPIV*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*, DfAIMgrUseSkill_Target74_ptr);
        
        using DfAIMgrdtor_DfAIMgr79_ptr = void (WINAPIV*)(struct DfAIMgr*);
        using DfAIMgrdtor_DfAIMgr79_clbk = void (WINAPIV*)(struct DfAIMgr*, DfAIMgrdtor_DfAIMgr79_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
