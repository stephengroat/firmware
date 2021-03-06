#ifndef __USB_DESCRIPTOR_GENERIC_HID_REPORT_H__
#define __USB_DESCRIPTOR_GENERIC_HID_REPORT_H__

// Macros:

    #define USB_GENERIC_HID_REPORT_DESCRIPTOR_LENGTH 33

    #define USB_GENERIC_HID_REPORT_DESCRIPTOR_VENDOR_USAGE_PAGE_INDEX 0x80
    #define USB_GENERIC_HID_REPORT_DESCRIPTOR_VENDOR_USAGE_COLLECTION 0x81
    #define USB_GENERIC_HID_REPORT_DESCRIPTOR_VENDOR_USAGE_DATA_IN    0x82
    #define USB_GENERIC_HID_REPORT_DESCRIPTOR_VENDOR_USAGE_DATA_OUT   0x83

// Variables:

    extern uint8_t UsbGenericHidReportDescriptor[USB_GENERIC_HID_REPORT_DESCRIPTOR_LENGTH];

#endif
