// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _NCB
    {
        char ncb_command;
        char ncb_retcode;
        char ncb_lsn;
        char ncb_num;
        char *ncb_buffer;
        unsigned __int16 ncb_length;
        char ncb_callname[16];
        char ncb_name[16];
        char ncb_rto;
        char ncb_sto;
        void (WINAPIV *ncb_post)(_NCB *);
        char ncb_lana_num;
        char ncb_cmd_cplt;
        char ncb_reserve[18];
        void *ncb_event;
    };
END_ATF_NAMESPACE
