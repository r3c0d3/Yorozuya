// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <HINSTANCE__.hpp>
#include <HWND__.hpp>



START_ATF_NAMESPACE
    struct tagFINDREPLACEW
    {
        unsigned int lStructSize;
        HWND__ *hwndOwner;
        HINSTANCE__ *hInstance;
        unsigned int Flags;
        wchar_t *lpstrFindWhat;
        wchar_t *lpstrReplaceWith;
        unsigned __int16 wFindWhatLen;
        unsigned __int16 wReplaceWithLen;
        __int64 lCustData;
        unsigned __int64 (WINAPIV *lpfnHook)(HWND__ *, unsigned int, unsigned __int64, __int64);
        const wchar_t *lpTemplateName;
    };
END_ATF_NAMESPACE
