#include <CTotalGuildRankInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CTotalGuildRankInfoctor_CTotalGuildRankInfo2_ptr CTotalGuildRankInfoctor_CTotalGuildRankInfo2_next(nullptr);
        Info::CTotalGuildRankInfoctor_CTotalGuildRankInfo2_clbk CTotalGuildRankInfoctor_CTotalGuildRankInfo2_user(nullptr);
        
        Info::CTotalGuildRankInfoClear4_ptr CTotalGuildRankInfoClear4_next(nullptr);
        Info::CTotalGuildRankInfoClear4_clbk CTotalGuildRankInfoClear4_user(nullptr);
        
        Info::CTotalGuildRankInfoFind6_ptr CTotalGuildRankInfoFind6_next(nullptr);
        Info::CTotalGuildRankInfoFind6_clbk CTotalGuildRankInfoFind6_user(nullptr);
        
        Info::CTotalGuildRankInfoInit8_ptr CTotalGuildRankInfoInit8_next(nullptr);
        Info::CTotalGuildRankInfoInit8_clbk CTotalGuildRankInfoInit8_user(nullptr);
        
        Info::CTotalGuildRankInfoLoad10_ptr CTotalGuildRankInfoLoad10_next(nullptr);
        Info::CTotalGuildRankInfoLoad10_clbk CTotalGuildRankInfoLoad10_user(nullptr);
        
        Info::CTotalGuildRankInfoSend12_ptr CTotalGuildRankInfoSend12_next(nullptr);
        Info::CTotalGuildRankInfoSend12_clbk CTotalGuildRankInfoSend12_user(nullptr);
        
        Info::CTotalGuildRankInfoSetNoDataFlag14_ptr CTotalGuildRankInfoSetNoDataFlag14_next(nullptr);
        Info::CTotalGuildRankInfoSetNoDataFlag14_clbk CTotalGuildRankInfoSetNoDataFlag14_user(nullptr);
        
        Info::CTotalGuildRankInfoUpdate16_ptr CTotalGuildRankInfoUpdate16_next(nullptr);
        Info::CTotalGuildRankInfoUpdate16_clbk CTotalGuildRankInfoUpdate16_user(nullptr);
        
        
        Info::CTotalGuildRankInfodtor_CTotalGuildRankInfo18_ptr CTotalGuildRankInfodtor_CTotalGuildRankInfo18_next(nullptr);
        Info::CTotalGuildRankInfodtor_CTotalGuildRankInfo18_clbk CTotalGuildRankInfodtor_CTotalGuildRankInfo18_user(nullptr);
        
        
        void CTotalGuildRankInfoctor_CTotalGuildRankInfo2_wrapper(struct CTotalGuildRankInfo* _this)
        {
           CTotalGuildRankInfoctor_CTotalGuildRankInfo2_user(_this, CTotalGuildRankInfoctor_CTotalGuildRankInfo2_next);
        };
        void CTotalGuildRankInfoClear4_wrapper(struct CTotalGuildRankInfo* _this)
        {
           CTotalGuildRankInfoClear4_user(_this, CTotalGuildRankInfoClear4_next);
        };
        int CTotalGuildRankInfoFind6_wrapper(struct CTotalGuildRankInfo* _this, char byRace, unsigned int dwGuildSerial)
        {
           return CTotalGuildRankInfoFind6_user(_this, byRace, dwGuildSerial, CTotalGuildRankInfoFind6_next);
        };
        bool CTotalGuildRankInfoInit8_wrapper(struct CTotalGuildRankInfo* _this)
        {
           return CTotalGuildRankInfoInit8_user(_this, CTotalGuildRankInfoInit8_next);
        };
        bool CTotalGuildRankInfoLoad10_wrapper(struct CTotalGuildRankInfo* _this, struct _total_guild_rank_info* pkInfo)
        {
           return CTotalGuildRankInfoLoad10_user(_this, pkInfo, CTotalGuildRankInfoLoad10_next);
        };
        void CTotalGuildRankInfoSend12_wrapper(struct CTotalGuildRankInfo* _this, unsigned int dwVer, int n, char byTabRace, char bySelfRace, unsigned int dwGuildSerial)
        {
           CTotalGuildRankInfoSend12_user(_this, dwVer, n, byTabRace, bySelfRace, dwGuildSerial, CTotalGuildRankInfoSend12_next);
        };
        void CTotalGuildRankInfoSetNoDataFlag14_wrapper(struct CTotalGuildRankInfo* _this)
        {
           CTotalGuildRankInfoSetNoDataFlag14_user(_this, CTotalGuildRankInfoSetNoDataFlag14_next);
        };
        bool CTotalGuildRankInfoUpdate16_wrapper(struct CTotalGuildRankInfo* _this, struct _total_guild_rank_info* pkInfo)
        {
           return CTotalGuildRankInfoUpdate16_user(_this, pkInfo, CTotalGuildRankInfoUpdate16_next);
        };
        
        void CTotalGuildRankInfodtor_CTotalGuildRankInfo18_wrapper(struct CTotalGuildRankInfo* _this)
        {
           CTotalGuildRankInfodtor_CTotalGuildRankInfo18_user(_this, CTotalGuildRankInfodtor_CTotalGuildRankInfo18_next);
        };
        
        ::std::array<hook_record, 9> CTotalGuildRankInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x1402c86e0L,
                (LPVOID *)&CTotalGuildRankInfoctor_CTotalGuildRankInfo2_user,
                (LPVOID *)&CTotalGuildRankInfoctor_CTotalGuildRankInfo2_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankInfoctor_CTotalGuildRankInfo2_wrapper),
                (LPVOID)cast_pointer_function((void(CTotalGuildRankInfo::*)())&CTotalGuildRankInfo::ctor_CTotalGuildRankInfo)
            },
            _hook_record {
                (LPVOID)0x1402c93d0L,
                (LPVOID *)&CTotalGuildRankInfoClear4_user,
                (LPVOID *)&CTotalGuildRankInfoClear4_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankInfoClear4_wrapper),
                (LPVOID)cast_pointer_function((void(CTotalGuildRankInfo::*)())&CTotalGuildRankInfo::Clear)
            },
            _hook_record {
                (LPVOID)0x1402c9300L,
                (LPVOID *)&CTotalGuildRankInfoFind6_user,
                (LPVOID *)&CTotalGuildRankInfoFind6_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankInfoFind6_wrapper),
                (LPVOID)cast_pointer_function((int(CTotalGuildRankInfo::*)(char, unsigned int))&CTotalGuildRankInfo::Find)
            },
            _hook_record {
                (LPVOID)0x1402c8870L,
                (LPVOID *)&CTotalGuildRankInfoInit8_user,
                (LPVOID *)&CTotalGuildRankInfoInit8_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankInfoInit8_wrapper),
                (LPVOID)cast_pointer_function((bool(CTotalGuildRankInfo::*)())&CTotalGuildRankInfo::Init)
            },
            _hook_record {
                (LPVOID)0x1402c8a20L,
                (LPVOID *)&CTotalGuildRankInfoLoad10_user,
                (LPVOID *)&CTotalGuildRankInfoLoad10_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankInfoLoad10_wrapper),
                (LPVOID)cast_pointer_function((bool(CTotalGuildRankInfo::*)(struct _total_guild_rank_info*))&CTotalGuildRankInfo::Load)
            },
            _hook_record {
                (LPVOID)0x1402c8e60L,
                (LPVOID *)&CTotalGuildRankInfoSend12_user,
                (LPVOID *)&CTotalGuildRankInfoSend12_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankInfoSend12_wrapper),
                (LPVOID)cast_pointer_function((void(CTotalGuildRankInfo::*)(unsigned int, int, char, char, unsigned int))&CTotalGuildRankInfo::Send)
            },
            _hook_record {
                (LPVOID)0x1402ca480L,
                (LPVOID *)&CTotalGuildRankInfoSetNoDataFlag14_user,
                (LPVOID *)&CTotalGuildRankInfoSetNoDataFlag14_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankInfoSetNoDataFlag14_wrapper),
                (LPVOID)cast_pointer_function((void(CTotalGuildRankInfo::*)())&CTotalGuildRankInfo::SetNoDataFlag)
            },
            _hook_record {
                (LPVOID)0x1402ca4a0L,
                (LPVOID *)&CTotalGuildRankInfoUpdate16_user,
                (LPVOID *)&CTotalGuildRankInfoUpdate16_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankInfoUpdate16_wrapper),
                (LPVOID)cast_pointer_function((bool(CTotalGuildRankInfo::*)(struct _total_guild_rank_info*))&CTotalGuildRankInfo::Update)
            },
            _hook_record {
                (LPVOID)0x1402c8740L,
                (LPVOID *)&CTotalGuildRankInfodtor_CTotalGuildRankInfo18_user,
                (LPVOID *)&CTotalGuildRankInfodtor_CTotalGuildRankInfo18_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankInfodtor_CTotalGuildRankInfo18_wrapper),
                (LPVOID)cast_pointer_function((void(CTotalGuildRankInfo::*)())&CTotalGuildRankInfo::dtor_CTotalGuildRankInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
