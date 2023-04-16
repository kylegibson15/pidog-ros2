from enum import IntEnum


class PWMPin(IntEnum):
    """Maps Joints to PWM Pins"""

    FR_HUMERUS = 14
    FR_RADIUS = 15
    FR_SHOULDER = 13
    FL_HUMERUS = 10
    FL_RADIUS = 11
    FL_SHOULDER = 9
    BR_FEMUR = 7
    BR_TIBIA = 6
    BL_FEMUR = 3
    BL_TIBIA = 2
