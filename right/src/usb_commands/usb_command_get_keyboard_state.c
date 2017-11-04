#include "fsl_common.h"
#include "usb_commands/usb_command_get_keyboard_state.h"
#include "usb_protocol_handler.h"
#include "eeprom.h"
#include "peripherals/merge_sensor.h"
#include "slave_drivers/uhk_module_driver.h"

void UsbCommand_GetKeyboardState(void)
{
    GenericHidOutBuffer[1] = IsEepromBusy;
    GenericHidOutBuffer[2] = MERGE_SENSOR_IS_MERGED;
    GenericHidOutBuffer[3] = UhkModuleStates[UhkModuleDriverId_LeftKeyboardHalf].moduleId;
    GenericHidOutBuffer[4] = UhkModuleStates[UhkModuleDriverId_LeftAddon].moduleId;
    GenericHidOutBuffer[5] = UhkModuleStates[UhkModuleDriverId_RightAddon].moduleId;
}
