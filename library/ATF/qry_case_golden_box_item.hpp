// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_db_golden_box_item.hpp>


START_ATF_NAMESPACE
    struct qry_case_golden_box_item
    {
        int nSerial;
        _db_golden_box_item NewData;
        _db_golden_box_item OldData;
    public:
        qry_case_golden_box_item();
        void ctor_qry_case_golden_box_item();
        int size();
    };    
    static_assert(ATF::checkSize<qry_case_golden_box_item, 3252>(), "qry_case_golden_box_item");
END_ATF_NAMESPACE
