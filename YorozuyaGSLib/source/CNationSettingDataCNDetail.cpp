#include <CNationSettingDataCNDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingDataCNctor_CNationSettingDataCN2_ptr CNationSettingDataCNctor_CNationSettingDataCN2_next(nullptr);
        Info::CNationSettingDataCNctor_CNationSettingDataCN2_clbk CNationSettingDataCNctor_CNationSettingDataCN2_user(nullptr);
        
        Info::CNationSettingDataCNCreateBilling4_ptr CNationSettingDataCNCreateBilling4_next(nullptr);
        Info::CNationSettingDataCNCreateBilling4_clbk CNationSettingDataCNCreateBilling4_user(nullptr);
        
        Info::CNationSettingDataCNCreateComplete6_ptr CNationSettingDataCNCreateComplete6_next(nullptr);
        Info::CNationSettingDataCNCreateComplete6_clbk CNationSettingDataCNCreateComplete6_user(nullptr);
        
        Info::CNationSettingDataCNCreateWorker8_ptr CNationSettingDataCNCreateWorker8_next(nullptr);
        Info::CNationSettingDataCNCreateWorker8_clbk CNationSettingDataCNCreateWorker8_user(nullptr);
        
        Info::CNationSettingDataCNGetCashItemPrice10_ptr CNationSettingDataCNGetCashItemPrice10_next(nullptr);
        Info::CNationSettingDataCNGetCashItemPrice10_clbk CNationSettingDataCNGetCashItemPrice10_user(nullptr);
        
        Info::CNationSettingDataCNGetItemName12_ptr CNationSettingDataCNGetItemName12_next(nullptr);
        Info::CNationSettingDataCNGetItemName12_clbk CNationSettingDataCNGetItemName12_user(nullptr);
        
        Info::CNationSettingDataCNInit14_ptr CNationSettingDataCNInit14_next(nullptr);
        Info::CNationSettingDataCNInit14_clbk CNationSettingDataCNInit14_user(nullptr);
        
        Info::CNationSettingDataCNLoop16_ptr CNationSettingDataCNLoop16_next(nullptr);
        Info::CNationSettingDataCNLoop16_clbk CNationSettingDataCNLoop16_user(nullptr);
        
        Info::CNationSettingDataCNNetClose18_ptr CNationSettingDataCNNetClose18_next(nullptr);
        Info::CNationSettingDataCNNetClose18_clbk CNationSettingDataCNNetClose18_user(nullptr);
        
        Info::CNationSettingDataCNReadSystemPass20_ptr CNationSettingDataCNReadSystemPass20_next(nullptr);
        Info::CNationSettingDataCNReadSystemPass20_clbk CNationSettingDataCNReadSystemPass20_user(nullptr);
        
        
        void CNationSettingDataCNctor_CNationSettingDataCN2_wrapper(struct CNationSettingDataCN* _this)
        {
           CNationSettingDataCNctor_CNationSettingDataCN2_user(_this, CNationSettingDataCNctor_CNationSettingDataCN2_next);
        };
        struct CBilling* CNationSettingDataCNCreateBilling4_wrapper(struct CNationSettingDataCN* _this)
        {
           return CNationSettingDataCNCreateBilling4_user(_this, CNationSettingDataCNCreateBilling4_next);
        };
        void CNationSettingDataCNCreateComplete6_wrapper(struct CNationSettingDataCN* _this, struct CPlayer* pOne)
        {
           CNationSettingDataCNCreateComplete6_user(_this, pOne, CNationSettingDataCNCreateComplete6_next);
        };
        struct CashDbWorker* CNationSettingDataCNCreateWorker8_wrapper(struct CNationSettingDataCN* _this)
        {
           return CNationSettingDataCNCreateWorker8_user(_this, CNationSettingDataCNCreateWorker8_next);
        };
        int CNationSettingDataCNGetCashItemPrice10_wrapper(struct CNationSettingDataCN* _this, struct _CashShop_str_fld* pFld)
        {
           return CNationSettingDataCNGetCashItemPrice10_user(_this, pFld, CNationSettingDataCNGetCashItemPrice10_next);
        };
        char* CNationSettingDataCNGetItemName12_wrapper(struct CNationSettingDataCN* _this, struct _NameTxt_fld* pFld)
        {
           return CNationSettingDataCNGetItemName12_user(_this, pFld, CNationSettingDataCNGetItemName12_next);
        };
        int CNationSettingDataCNInit14_wrapper(struct CNationSettingDataCN* _this)
        {
           return CNationSettingDataCNInit14_user(_this, CNationSettingDataCNInit14_next);
        };
        void CNationSettingDataCNLoop16_wrapper(struct CNationSettingDataCN* _this)
        {
           CNationSettingDataCNLoop16_user(_this, CNationSettingDataCNLoop16_next);
        };
        void CNationSettingDataCNNetClose18_wrapper(struct CNationSettingDataCN* _this, struct CPlayer* pOne)
        {
           CNationSettingDataCNNetClose18_user(_this, pOne, CNationSettingDataCNNetClose18_next);
        };
        bool CNationSettingDataCNReadSystemPass20_wrapper(struct CNationSettingDataCN* _this)
        {
           return CNationSettingDataCNReadSystemPass20_user(_this, CNationSettingDataCNReadSystemPass20_next);
        };
        
        ::std::array<hook_record, 10> CNationSettingDataCN_functions = 
        {
            _hook_record {
                (LPVOID)0x140230fc0L,
                (LPVOID *)&CNationSettingDataCNctor_CNationSettingDataCN2_user,
                (LPVOID *)&CNationSettingDataCNctor_CNationSettingDataCN2_next,
                (LPVOID)cast_pointer_function(CNationSettingDataCNctor_CNationSettingDataCN2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataCN::*)())&CNationSettingDataCN::ctor_CNationSettingDataCN)
            },
            _hook_record {
                (LPVOID)0x1402307c0L,
                (LPVOID *)&CNationSettingDataCNCreateBilling4_user,
                (LPVOID *)&CNationSettingDataCNCreateBilling4_next,
                (LPVOID)cast_pointer_function(CNationSettingDataCNCreateBilling4_wrapper),
                (LPVOID)cast_pointer_function((struct CBilling*(CNationSettingDataCN::*)())&CNationSettingDataCN::CreateBilling)
            },
            _hook_record {
                (LPVOID)0x140230870L,
                (LPVOID *)&CNationSettingDataCNCreateComplete6_user,
                (LPVOID *)&CNationSettingDataCNCreateComplete6_next,
                (LPVOID)cast_pointer_function(CNationSettingDataCNCreateComplete6_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataCN::*)(struct CPlayer*))&CNationSettingDataCN::CreateComplete)
            },
            _hook_record {
                (LPVOID)0x140230710L,
                (LPVOID *)&CNationSettingDataCNCreateWorker8_user,
                (LPVOID *)&CNationSettingDataCNCreateWorker8_next,
                (LPVOID)cast_pointer_function(CNationSettingDataCNCreateWorker8_wrapper),
                (LPVOID)cast_pointer_function((struct CashDbWorker*(CNationSettingDataCN::*)())&CNationSettingDataCN::CreateWorker)
            },
            _hook_record {
                (LPVOID)0x140230920L,
                (LPVOID *)&CNationSettingDataCNGetCashItemPrice10_user,
                (LPVOID *)&CNationSettingDataCNGetCashItemPrice10_next,
                (LPVOID)cast_pointer_function(CNationSettingDataCNGetCashItemPrice10_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataCN::*)(struct _CashShop_str_fld*))&CNationSettingDataCN::GetCashItemPrice)
            },
            _hook_record {
                (LPVOID)0x1402306f0L,
                (LPVOID *)&CNationSettingDataCNGetItemName12_user,
                (LPVOID *)&CNationSettingDataCNGetItemName12_next,
                (LPVOID)cast_pointer_function(CNationSettingDataCNGetItemName12_wrapper),
                (LPVOID)cast_pointer_function((char*(CNationSettingDataCN::*)(struct _NameTxt_fld*))&CNationSettingDataCN::GetItemName)
            },
            _hook_record {
                (LPVOID)0x140230570L,
                (LPVOID *)&CNationSettingDataCNInit14_user,
                (LPVOID *)&CNationSettingDataCNInit14_next,
                (LPVOID)cast_pointer_function(CNationSettingDataCNInit14_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataCN::*)())&CNationSettingDataCN::Init)
            },
            _hook_record {
                (LPVOID)0x1402306a0L,
                (LPVOID *)&CNationSettingDataCNLoop16_user,
                (LPVOID *)&CNationSettingDataCNLoop16_next,
                (LPVOID)cast_pointer_function(CNationSettingDataCNLoop16_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataCN::*)())&CNationSettingDataCN::Loop)
            },
            _hook_record {
                (LPVOID)0x1402308d0L,
                (LPVOID *)&CNationSettingDataCNNetClose18_user,
                (LPVOID *)&CNationSettingDataCNNetClose18_next,
                (LPVOID)cast_pointer_function(CNationSettingDataCNNetClose18_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataCN::*)(struct CPlayer*))&CNationSettingDataCN::NetClose)
            },
            _hook_record {
                (LPVOID)0x140230940L,
                (LPVOID *)&CNationSettingDataCNReadSystemPass20_user,
                (LPVOID *)&CNationSettingDataCNReadSystemPass20_next,
                (LPVOID)cast_pointer_function(CNationSettingDataCNReadSystemPass20_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataCN::*)())&CNationSettingDataCN::ReadSystemPass)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
