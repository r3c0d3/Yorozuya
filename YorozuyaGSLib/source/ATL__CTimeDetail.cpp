#include <ATL__CTimeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace ATL
    {
        namespace Detail
        {
            
            Info::ATL__CTimector_CTime1_ptr ATL__CTimector_CTime1_next(nullptr);
            Info::ATL__CTimector_CTime1_clbk ATL__CTimector_CTime1_user(nullptr);
            
            
            Info::ATL__CTimector_CTime2_ptr ATL__CTimector_CTime2_next(nullptr);
            Info::ATL__CTimector_CTime2_clbk ATL__CTimector_CTime2_user(nullptr);
            
            
            Info::ATL__CTimector_CTime3_ptr ATL__CTimector_CTime3_next(nullptr);
            Info::ATL__CTimector_CTime3_clbk ATL__CTimector_CTime3_user(nullptr);
            
            
            Info::ATL__CTimector_CTime4_ptr ATL__CTimector_CTime4_next(nullptr);
            Info::ATL__CTimector_CTime4_clbk ATL__CTimector_CTime4_user(nullptr);
            
            
            Info::ATL__CTimector_CTime5_ptr ATL__CTimector_CTime5_next(nullptr);
            Info::ATL__CTimector_CTime5_clbk ATL__CTimector_CTime5_user(nullptr);
            
            
            Info::ATL__CTimector_CTime6_ptr ATL__CTimector_CTime6_next(nullptr);
            Info::ATL__CTimector_CTime6_clbk ATL__CTimector_CTime6_user(nullptr);
            
            Info::ATL__CTimeGetAsSystemTime7_ptr ATL__CTimeGetAsSystemTime7_next(nullptr);
            Info::ATL__CTimeGetAsSystemTime7_clbk ATL__CTimeGetAsSystemTime7_user(nullptr);
            
            Info::ATL__CTimeGetDay8_ptr ATL__CTimeGetDay8_next(nullptr);
            Info::ATL__CTimeGetDay8_clbk ATL__CTimeGetDay8_user(nullptr);
            
            Info::ATL__CTimeGetDayOfWeek9_ptr ATL__CTimeGetDayOfWeek9_next(nullptr);
            Info::ATL__CTimeGetDayOfWeek9_clbk ATL__CTimeGetDayOfWeek9_user(nullptr);
            
            Info::ATL__CTimeGetGmtTm10_ptr ATL__CTimeGetGmtTm10_next(nullptr);
            Info::ATL__CTimeGetGmtTm10_clbk ATL__CTimeGetGmtTm10_user(nullptr);
            
            Info::ATL__CTimeGetHour11_ptr ATL__CTimeGetHour11_next(nullptr);
            Info::ATL__CTimeGetHour11_clbk ATL__CTimeGetHour11_user(nullptr);
            
            Info::ATL__CTimeGetLocalTm12_ptr ATL__CTimeGetLocalTm12_next(nullptr);
            Info::ATL__CTimeGetLocalTm12_clbk ATL__CTimeGetLocalTm12_user(nullptr);
            
            Info::ATL__CTimeGetMinute13_ptr ATL__CTimeGetMinute13_next(nullptr);
            Info::ATL__CTimeGetMinute13_clbk ATL__CTimeGetMinute13_user(nullptr);
            
            Info::ATL__CTimeGetMonth14_ptr ATL__CTimeGetMonth14_next(nullptr);
            Info::ATL__CTimeGetMonth14_clbk ATL__CTimeGetMonth14_user(nullptr);
            
            Info::ATL__CTimeGetSecond15_ptr ATL__CTimeGetSecond15_next(nullptr);
            Info::ATL__CTimeGetSecond15_clbk ATL__CTimeGetSecond15_user(nullptr);
            
            Info::ATL__CTimeGetTickCount16_ptr ATL__CTimeGetTickCount16_next(nullptr);
            Info::ATL__CTimeGetTickCount16_clbk ATL__CTimeGetTickCount16_user(nullptr);
            
            Info::ATL__CTimeGetTime17_ptr ATL__CTimeGetTime17_next(nullptr);
            Info::ATL__CTimeGetTime17_clbk ATL__CTimeGetTime17_user(nullptr);
            
            Info::ATL__CTimeGetYear18_ptr ATL__CTimeGetYear18_next(nullptr);
            Info::ATL__CTimeGetYear18_clbk ATL__CTimeGetYear18_user(nullptr);
            
            Info::ATL__CTimeIsValidFILETIME19_ptr ATL__CTimeIsValidFILETIME19_next(nullptr);
            Info::ATL__CTimeIsValidFILETIME19_clbk ATL__CTimeIsValidFILETIME19_user(nullptr);
            
            
            void ATL__CTimector_CTime1_wrapper(struct ATL::CTime* _this, struct _FILETIME* fileTime, int nDST)
            {
               ATL__CTimector_CTime1_user(_this, fileTime, nDST, ATL__CTimector_CTime1_next);
            };
            
            void ATL__CTimector_CTime2_wrapper(struct ATL::CTime* _this, struct _SYSTEMTIME* sysTime, int nDST)
            {
               ATL__CTimector_CTime2_user(_this, sysTime, nDST, ATL__CTimector_CTime2_next);
            };
            
            void ATL__CTimector_CTime3_wrapper(struct ATL::CTime* _this, int64_t time)
            {
               ATL__CTimector_CTime3_user(_this, time, ATL__CTimector_CTime3_next);
            };
            
            void ATL__CTimector_CTime4_wrapper(struct ATL::CTime* _this, int nYear, int nMonth, int nDay, int nHour, int nMin, int nSec, int nDST)
            {
               ATL__CTimector_CTime4_user(_this, nYear, nMonth, nDay, nHour, nMin, nSec, nDST, ATL__CTimector_CTime4_next);
            };
            
            void ATL__CTimector_CTime5_wrapper(struct ATL::CTime* _this, uint16_t wDosDate, uint16_t wDosTime, int nDST)
            {
               ATL__CTimector_CTime5_user(_this, wDosDate, wDosTime, nDST, ATL__CTimector_CTime5_next);
            };
            
            void ATL__CTimector_CTime6_wrapper(struct ATL::CTime* _this)
            {
               ATL__CTimector_CTime6_user(_this, ATL__CTimector_CTime6_next);
            };
            bool ATL__CTimeGetAsSystemTime7_wrapper(struct ATL::CTime* _this, struct _SYSTEMTIME* timeDest)
            {
               return ATL__CTimeGetAsSystemTime7_user(_this, timeDest, ATL__CTimeGetAsSystemTime7_next);
            };
            int ATL__CTimeGetDay8_wrapper(struct ATL::CTime* _this)
            {
               return ATL__CTimeGetDay8_user(_this, ATL__CTimeGetDay8_next);
            };
            int ATL__CTimeGetDayOfWeek9_wrapper(struct ATL::CTime* _this)
            {
               return ATL__CTimeGetDayOfWeek9_user(_this, ATL__CTimeGetDayOfWeek9_next);
            };
            struct tm* ATL__CTimeGetGmtTm10_wrapper(struct ATL::CTime* _this, struct tm* ptm)
            {
               return ATL__CTimeGetGmtTm10_user(_this, ptm, ATL__CTimeGetGmtTm10_next);
            };
            int ATL__CTimeGetHour11_wrapper(struct ATL::CTime* _this)
            {
               return ATL__CTimeGetHour11_user(_this, ATL__CTimeGetHour11_next);
            };
            struct tm* ATL__CTimeGetLocalTm12_wrapper(struct ATL::CTime* _this, struct tm* ptm)
            {
               return ATL__CTimeGetLocalTm12_user(_this, ptm, ATL__CTimeGetLocalTm12_next);
            };
            int ATL__CTimeGetMinute13_wrapper(struct ATL::CTime* _this)
            {
               return ATL__CTimeGetMinute13_user(_this, ATL__CTimeGetMinute13_next);
            };
            int ATL__CTimeGetMonth14_wrapper(struct ATL::CTime* _this)
            {
               return ATL__CTimeGetMonth14_user(_this, ATL__CTimeGetMonth14_next);
            };
            int ATL__CTimeGetSecond15_wrapper(struct ATL::CTime* _this)
            {
               return ATL__CTimeGetSecond15_user(_this, ATL__CTimeGetSecond15_next);
            };
            struct ATL::CTime* ATL__CTimeGetTickCount16_wrapper(struct ATL::CTime* result)
            {
               return ATL__CTimeGetTickCount16_user(result, ATL__CTimeGetTickCount16_next);
            };
            int64_t ATL__CTimeGetTime17_wrapper(struct ATL::CTime* _this)
            {
               return ATL__CTimeGetTime17_user(_this, ATL__CTimeGetTime17_next);
            };
            int ATL__CTimeGetYear18_wrapper(struct ATL::CTime* _this)
            {
               return ATL__CTimeGetYear18_user(_this, ATL__CTimeGetYear18_next);
            };
            int ATL__CTimeIsValidFILETIME19_wrapper(struct _FILETIME* fileTime)
            {
               return ATL__CTimeIsValidFILETIME19_user(fileTime, ATL__CTimeIsValidFILETIME19_next);
            };
            
            ::std::array<hook_record, 19> CTime_functions = 
            {
                _hook_record {
                    (LPVOID)0x140672cf0L,
                    (LPVOID *)&ATL__CTimector_CTime1_user,
                    (LPVOID *)&ATL__CTimector_CTime1_next,
                    (LPVOID)cast_pointer_function(ATL__CTimector_CTime1_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CTime::*)(struct _FILETIME*, int))&ATL::CTime::ctor_CTime)
                },
                _hook_record {
                    (LPVOID)0x140672c10L,
                    (LPVOID *)&ATL__CTimector_CTime2_user,
                    (LPVOID *)&ATL__CTimector_CTime2_next,
                    (LPVOID)cast_pointer_function(ATL__CTimector_CTime2_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CTime::*)(struct _SYSTEMTIME*, int))&ATL::CTime::ctor_CTime)
                },
                _hook_record {
                    (LPVOID)0x1406726e0L,
                    (LPVOID *)&ATL__CTimector_CTime3_user,
                    (LPVOID *)&ATL__CTimector_CTime3_next,
                    (LPVOID)cast_pointer_function(ATL__CTimector_CTime3_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CTime::*)(int64_t))&ATL::CTime::ctor_CTime)
                },
                _hook_record {
                    (LPVOID)0x140672710L,
                    (LPVOID *)&ATL__CTimector_CTime4_user,
                    (LPVOID *)&ATL__CTimector_CTime4_next,
                    (LPVOID)cast_pointer_function(ATL__CTimector_CTime4_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CTime::*)(int, int, int, int, int, int, int))&ATL::CTime::ctor_CTime)
                },
                _hook_record {
                    (LPVOID)0x140672b00L,
                    (LPVOID *)&ATL__CTimector_CTime5_user,
                    (LPVOID *)&ATL__CTimector_CTime5_next,
                    (LPVOID)cast_pointer_function(ATL__CTimector_CTime5_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CTime::*)(uint16_t, uint16_t, int))&ATL::CTime::ctor_CTime)
                },
                _hook_record {
                    (LPVOID)0x1406726c0L,
                    (LPVOID *)&ATL__CTimector_CTime6_user,
                    (LPVOID *)&ATL__CTimector_CTime6_next,
                    (LPVOID)cast_pointer_function(ATL__CTimector_CTime6_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CTime::*)())&ATL::CTime::ctor_CTime)
                },
                _hook_record {
                    (LPVOID)0x140673260L,
                    (LPVOID *)&ATL__CTimeGetAsSystemTime7_user,
                    (LPVOID *)&ATL__CTimeGetAsSystemTime7_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeGetAsSystemTime7_wrapper),
                    (LPVOID)cast_pointer_function((bool(ATL::CTime::*)(struct _SYSTEMTIME*))&ATL::CTime::GetAsSystemTime)
                },
                _hook_record {
                    (LPVOID)0x1406733f0L,
                    (LPVOID *)&ATL__CTimeGetDay8_user,
                    (LPVOID *)&ATL__CTimeGetDay8_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeGetDay8_wrapper),
                    (LPVOID)cast_pointer_function((int(ATL::CTime::*)())&ATL::CTime::GetDay)
                },
                _hook_record {
                    (LPVOID)0x140673530L,
                    (LPVOID *)&ATL__CTimeGetDayOfWeek9_user,
                    (LPVOID *)&ATL__CTimeGetDayOfWeek9_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeGetDayOfWeek9_wrapper),
                    (LPVOID)cast_pointer_function((int(ATL::CTime::*)())&ATL::CTime::GetDayOfWeek)
                },
                _hook_record {
                    (LPVOID)0x1406730a0L,
                    (LPVOID *)&ATL__CTimeGetGmtTm10_user,
                    (LPVOID *)&ATL__CTimeGetGmtTm10_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeGetGmtTm10_wrapper),
                    (LPVOID)cast_pointer_function((struct tm*(ATL::CTime::*)(struct tm*))&ATL::CTime::GetGmtTm)
                },
                _hook_record {
                    (LPVOID)0x140673440L,
                    (LPVOID *)&ATL__CTimeGetHour11_user,
                    (LPVOID *)&ATL__CTimeGetHour11_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeGetHour11_wrapper),
                    (LPVOID)cast_pointer_function((int(ATL::CTime::*)())&ATL::CTime::GetHour)
                },
                _hook_record {
                    (LPVOID)0x140673180L,
                    (LPVOID *)&ATL__CTimeGetLocalTm12_user,
                    (LPVOID *)&ATL__CTimeGetLocalTm12_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeGetLocalTm12_wrapper),
                    (LPVOID)cast_pointer_function((struct tm*(ATL::CTime::*)(struct tm*))&ATL::CTime::GetLocalTm)
                },
                _hook_record {
                    (LPVOID)0x140673490L,
                    (LPVOID *)&ATL__CTimeGetMinute13_user,
                    (LPVOID *)&ATL__CTimeGetMinute13_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeGetMinute13_wrapper),
                    (LPVOID)cast_pointer_function((int(ATL::CTime::*)())&ATL::CTime::GetMinute)
                },
                _hook_record {
                    (LPVOID)0x1406733a0L,
                    (LPVOID *)&ATL__CTimeGetMonth14_user,
                    (LPVOID *)&ATL__CTimeGetMonth14_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeGetMonth14_wrapper),
                    (LPVOID)cast_pointer_function((int(ATL::CTime::*)())&ATL::CTime::GetMonth)
                },
                _hook_record {
                    (LPVOID)0x1406734e0L,
                    (LPVOID *)&ATL__CTimeGetSecond15_user,
                    (LPVOID *)&ATL__CTimeGetSecond15_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeGetSecond15_wrapper),
                    (LPVOID)cast_pointer_function((int(ATL::CTime::*)())&ATL::CTime::GetSecond)
                },
                _hook_record {
                    (LPVOID)0x140672640L,
                    (LPVOID *)&ATL__CTimeGetTickCount16_user,
                    (LPVOID *)&ATL__CTimeGetTickCount16_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeGetTickCount16_wrapper),
                    (LPVOID)cast_pointer_function((struct ATL::CTime*(*)(struct ATL::CTime*))&ATL::CTime::GetTickCount)
                },
                _hook_record {
                    (LPVOID)0x140673330L,
                    (LPVOID *)&ATL__CTimeGetTime17_user,
                    (LPVOID *)&ATL__CTimeGetTime17_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeGetTime17_wrapper),
                    (LPVOID)cast_pointer_function((int64_t(ATL::CTime::*)())&ATL::CTime::GetTime)
                },
                _hook_record {
                    (LPVOID)0x140673350L,
                    (LPVOID *)&ATL__CTimeGetYear18_user,
                    (LPVOID *)&ATL__CTimeGetYear18_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeGetYear18_wrapper),
                    (LPVOID)cast_pointer_function((int(ATL::CTime::*)())&ATL::CTime::GetYear)
                },
                _hook_record {
                    (LPVOID)0x140672670L,
                    (LPVOID *)&ATL__CTimeIsValidFILETIME19_user,
                    (LPVOID *)&ATL__CTimeIsValidFILETIME19_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeIsValidFILETIME19_wrapper),
                    (LPVOID)cast_pointer_function((int(*)(struct _FILETIME*))&ATL::CTime::IsValidFILETIME)
                },
            };
        }; // end namespace Detail
    }; // end namespace ATL
END_ATF_NAMESPACE
