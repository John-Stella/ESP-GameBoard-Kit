#ifndef EEZ_LVGL_UI_STRUCTS_H
#define EEZ_LVGL_UI_STRUCTS_H

#include "eez-flow.h"


#if defined(EEZ_FOR_LVGL)

#include <stdint.h>
#include <stdbool.h>

#include "vars.h"

using namespace eez;

enum FlowStructures {
    FLOW_STRUCTURE_TEST = 16384
};

enum FlowArrayOfStructures {
    FLOW_ARRAY_OF_STRUCTURE_TEST = 81920
};

enum testFlowStructureFields {
    FLOW_STRUCTURE_TEST_FIELD_BOARD_STATE = 0,
    FLOW_STRUCTURE_TEST_NUM_FIELDS
};

struct testValue {
    Value value;
    
    testValue() {
        value = Value::makeArrayRef(FLOW_STRUCTURE_TEST_NUM_FIELDS, FLOW_STRUCTURE_TEST, 0);
    }
    
    testValue(Value value) : value(value) {}
    
    operator Value() const { return value; }
    
    operator bool() const { return value.isArray(); }
    
    ArrayOfInteger board_state() {
        return value.getArray()->values[FLOW_STRUCTURE_TEST_FIELD_BOARD_STATE];
    }
    void board_state(ArrayOfInteger board_state) {
        value.getArray()->values[FLOW_STRUCTURE_TEST_FIELD_BOARD_STATE] = board_state.value;
    }
};

typedef ArrayOf<testValue, FLOW_ARRAY_OF_STRUCTURE_TEST> ArrayOftestValue;


#endif

#endif /*EEZ_LVGL_UI_STRUCTS_H*/
