
// This is a TensorFlow Lite model file that has been converted into a C data
// array using the tensorflow.lite.util.convert_bytes_to_c_source() function.
// This form is useful for compiling into a binary for devices that don't have a
// file system.

#include "sine_model.h"

// We need to keep the data array aligned on some architectures.
#ifdef __has_attribute
#define HAVE_ATTRIBUTE(x) __has_attribute(x)
#else
#define HAVE_ATTRIBUTE(x) 0
#endif
#if HAVE_ATTRIBUTE(aligned) || (defined(__GNUC__) && !defined(__clang__))
#define DATA_ALIGN_ATTRIBUTE __attribute__((aligned(4)))
#else
#define DATA_ALIGN_ATTRIBUTE
#endif

const unsigned char sine_model[] DATA_ALIGN_ATTRIBUTE = {
    0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x14, 0x00, 0x20, 0x00, 0x1c,
    0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00,
    0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00,
    0x00, 0xec, 0x00, 0x00, 0x00, 0x08, 0x07, 0x00, 0x00, 0x18, 0x07, 0x00, 0x00,
    0x28, 0x0c, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00,
    0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00,
    0x00, 0x38, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76,
    0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x94, 0xff, 0xff, 0xff, 0x09, 0x00,
    0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e,
    0x73, 0x65, 0x5f, 0x38, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x86, 0xf9, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x64,
    0x65, 0x6e, 0x73, 0x65, 0x5f, 0x36, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x00,
    0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
    0x00, 0xdc, 0xff, 0xff, 0xff, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x13, 0x00, 0x00, 0x00, 0x43, 0x4f, 0x4e, 0x56, 0x45, 0x52, 0x53, 0x49, 0x4f,
    0x4e, 0x5f, 0x4d, 0x45, 0x54, 0x41, 0x44, 0x41, 0x54, 0x41, 0x00, 0x08, 0x00,
    0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x6d, 0x69, 0x6e, 0x5f,
    0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f, 0x76, 0x65, 0x72, 0x73, 0x69,
    0x6f, 0x6e, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x18, 0x06, 0x00, 0x00, 0x10, 0x06,
    0x00, 0x00, 0xfc, 0x05, 0x00, 0x00, 0xa4, 0x05, 0x00, 0x00, 0x54, 0x05, 0x00,
    0x00, 0x04, 0x05, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00,
    0x9c, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x6c,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x36, 0xfa, 0xff, 0xff, 0x04, 0x00,
    0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0e,
    0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xea, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04,
    0x00, 0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x32, 0x2e, 0x31, 0x35, 0x2e,
    0x30, 0x00, 0x00, 0x9a, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x31, 0x2e, 0x35, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xa8, 0xf5, 0xff, 0xff, 0xac, 0xf5, 0xff, 0xff,
    0xb0, 0xf5, 0xff, 0xff, 0xc2, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40,
    0x00, 0x00, 0x00, 0xbe, 0xac, 0x9c, 0xbf, 0xf2, 0x7d, 0xd5, 0xbe, 0x5f, 0x29,
    0xc5, 0x3f, 0xd5, 0x99, 0x2a, 0xbf, 0xdb, 0x6f, 0x67, 0xbf, 0x1d, 0xac, 0x7b,
    0xbe, 0xa2, 0x7b, 0x6d, 0xbe, 0x81, 0x2a, 0x17, 0xbf, 0x08, 0x64, 0xb7, 0xbf,
    0x03, 0x02, 0xbc, 0xbe, 0xa7, 0x72, 0x43, 0xbf, 0x68, 0xfa, 0x81, 0x3e, 0x21,
    0xf4, 0x95, 0xbe, 0x86, 0x13, 0x08, 0xbf, 0x4c, 0xa5, 0x68, 0x3e, 0xb3, 0xfe,
    0x98, 0xbd, 0x0e, 0xfb, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
    0x00, 0xb8, 0xc9, 0x27, 0xbe, 0xb8, 0x0b, 0xa6, 0xbe, 0xcc, 0x42, 0x47, 0xbc,
    0x20, 0xb9, 0x50, 0x3d, 0x4a, 0x4d, 0x14, 0xbe, 0x9a, 0x80, 0x37, 0xbe, 0x1d,
    0xdf, 0xd8, 0xbe, 0x39, 0xd7, 0xd8, 0x3e, 0x84, 0x5d, 0x9d, 0xbe, 0x9a, 0x8e,
    0x5b, 0x3e, 0x0b, 0x60, 0xc9, 0xbe, 0xf9, 0xdc, 0xc4, 0x3e, 0x44, 0x4e, 0x44,
    0xbf, 0x1c, 0x10, 0xd2, 0xbe, 0x5a, 0xc6, 0xe7, 0xbd, 0xa6, 0xce, 0x21, 0x3e,
    0x6b, 0xd1, 0xc5, 0xbe, 0xc4, 0xf3, 0x46, 0xbe, 0x8f, 0x60, 0x4d, 0xbd, 0xc3,
    0x40, 0xa9, 0x3d, 0x54, 0xc7, 0x02, 0xbf, 0x80, 0x73, 0xec, 0x3c, 0xc0, 0x39,
    0xf6, 0x3b, 0x7e, 0xef, 0x5c, 0x3e, 0xb0, 0x55, 0x0a, 0xbe, 0xd8, 0xeb, 0xeb,
    0xbd, 0x5f, 0xfd, 0x94, 0x3e, 0x63, 0xac, 0x84, 0x3e, 0x42, 0xe0, 0xaa, 0x39,
    0xc5, 0xa3, 0x7a, 0x3e, 0x56, 0x9a, 0x0c, 0xbf, 0xc7, 0x7e, 0xe8, 0x3e, 0xcb,
    0x3f, 0xc3, 0x3e, 0x02, 0xd0, 0xdc, 0xbe, 0x57, 0x93, 0x89, 0xbe, 0x16, 0x57,
    0x3d, 0x3e, 0xe0, 0x6a, 0x8f, 0xbf, 0x0b, 0x46, 0xa6, 0x3e, 0xa4, 0x0b, 0x82,
    0xbe, 0x3d, 0x86, 0xc1, 0x3e, 0x79, 0xbf, 0xb1, 0xbe, 0x57, 0xd8, 0x65, 0x3c,
    0xe4, 0x6b, 0xcd, 0x3d, 0x8e, 0x91, 0x94, 0x3f, 0x45, 0xcd, 0xc8, 0xbe, 0x23,
    0x44, 0x16, 0xbf, 0x9f, 0xe8, 0x60, 0xbf, 0xf2, 0x1a, 0x2b, 0x3f, 0x4d, 0xcb,
    0x8c, 0x3e, 0x3f, 0x58, 0xd8, 0x3e, 0x15, 0x3f, 0xbd, 0xbe, 0xb1, 0xab, 0x57,
    0xbe, 0x45, 0xa2, 0xed, 0xbe, 0x21, 0x5b, 0x8d, 0xbe, 0x9c, 0x81, 0x0f, 0xbe,
    0x31, 0x36, 0xcc, 0x3e, 0xb9, 0x71, 0x2c, 0xbf, 0x88, 0x5a, 0x5b, 0x3e, 0xe0,
    0xd5, 0xc5, 0xbd, 0xc2, 0x49, 0x2c, 0x3f, 0x03, 0x52, 0x24, 0xbe, 0xb6, 0xe4,
    0x55, 0xbe, 0xbb, 0x20, 0x26, 0xbd, 0x08, 0x72, 0x29, 0xbe, 0x18, 0xfa, 0x29,
    0xbe, 0x00, 0x0f, 0xf3, 0x3b, 0x7d, 0x05, 0x06, 0xbf, 0xd8, 0x18, 0x17, 0x3d,
    0x0f, 0x46, 0x16, 0xbf, 0x1c, 0x91, 0xa0, 0xbe, 0x5e, 0x16, 0x2e, 0xbe, 0x91,
    0xe4, 0x3b, 0xbe, 0xc4, 0x8a, 0x92, 0xbe, 0x9c, 0xb4, 0xb6, 0x3e, 0x00, 0x0b,
    0xd6, 0xba, 0x98, 0xf4, 0x1e, 0x3e, 0xd1, 0x65, 0xa8, 0x3e, 0x87, 0xf1, 0x2c,
    0xbd, 0x79, 0xd0, 0x2d, 0xbe, 0x4a, 0x00, 0x3d, 0x3e, 0x40, 0xbd, 0x45, 0x3d,
    0xe1, 0x86, 0x98, 0xbe, 0x56, 0xc3, 0xcf, 0x3d, 0xc1, 0xeb, 0x86, 0xbe, 0xe4,
    0x31, 0xdd, 0xbe, 0xd8, 0xcc, 0x8c, 0xbd, 0xcc, 0xd4, 0x9e, 0x3d, 0x7d, 0x4f,
    0xa4, 0x3e, 0xfd, 0x8a, 0xbd, 0xbd, 0xb1, 0x15, 0x79, 0x3e, 0x24, 0xc7, 0x81,
    0xbe, 0x38, 0x79, 0x99, 0xbe, 0xe5, 0xcb, 0x0c, 0x3e, 0xe5, 0x87, 0x4c, 0xbd,
    0x38, 0xd6, 0x00, 0xbe, 0xfb, 0x49, 0x57, 0xbb, 0x89, 0x34, 0x94, 0x3e, 0x24,
    0x40, 0xc7, 0x3d, 0x97, 0xb0, 0x82, 0x3e, 0x59, 0x58, 0x8f, 0xbe, 0xdd, 0x9a,
    0x36, 0xbe, 0x2e, 0x99, 0xae, 0xbe, 0xb8, 0xfc, 0x4d, 0xbe, 0x20, 0x37, 0xc2,
    0xbe, 0xf6, 0x12, 0x85, 0x3e, 0x90, 0x36, 0x9a, 0x3e, 0xa1, 0x3d, 0xd5, 0x3e,
    0x29, 0x83, 0xce, 0x3e, 0xd6, 0x82, 0x44, 0x3d, 0x8f, 0x9d, 0x92, 0x3e, 0x41,
    0xe0, 0x45, 0xbd, 0x4b, 0xfd, 0xa0, 0xbe, 0x2b, 0x42, 0x99, 0x3e, 0xd0, 0xb8,
    0xdb, 0x3c, 0xd6, 0xa9, 0xe0, 0xbe, 0xfa, 0x9b, 0x99, 0x3d, 0x48, 0x41, 0x32,
    0xbe, 0x73, 0x79, 0xab, 0x3e, 0x25, 0xc4, 0xb6, 0xbe, 0xaa, 0x32, 0x08, 0x3e,
    0xac, 0xfe, 0x0a, 0x3c, 0xc1, 0x60, 0x34, 0x3e, 0x0d, 0x3f, 0x58, 0xbe, 0x7a,
    0x03, 0x0e, 0x3e, 0xed, 0x25, 0xfe, 0xbd, 0x12, 0x1b, 0xeb, 0xbe, 0xd2, 0x06,
    0x3f, 0xbe, 0x85, 0x0c, 0xec, 0x3e, 0x80, 0x30, 0x21, 0xbb, 0x1c, 0x10, 0xb2,
    0x3d, 0xd9, 0x39, 0xfc, 0x3d, 0x4f, 0x8c, 0x86, 0x3e, 0x6d, 0x22, 0x99, 0xbe,
    0x18, 0xd4, 0x74, 0xbd, 0xa1, 0xb3, 0xdc, 0x3e, 0xa2, 0x98, 0x09, 0x3e, 0x6b,
    0xda, 0xae, 0x3b, 0xda, 0x42, 0x87, 0xbc, 0x14, 0x55, 0xaf, 0x3d, 0x9a, 0xd0,
    0xcf, 0x3e, 0x9d, 0x3c, 0x3c, 0xbf, 0x0c, 0xd8, 0x9c, 0x3d, 0x22, 0x68, 0x2b,
    0xbe, 0x3a, 0xaa, 0x6b, 0xbe, 0x21, 0xec, 0xda, 0xbe, 0x00, 0x3b, 0x68, 0x3b,
    0x98, 0x55, 0xe1, 0xbe, 0xd5, 0x49, 0xd0, 0xbe, 0xaf, 0x03, 0x9b, 0xbe, 0xf3,
    0xf3, 0xda, 0x3e, 0x20, 0x57, 0x07, 0xbc, 0x89, 0xf6, 0xa4, 0x3e, 0x20, 0x7c,
    0x8d, 0x3e, 0xca, 0x3c, 0xc8, 0x3e, 0x55, 0x9c, 0x8c, 0xbe, 0xe3, 0x96, 0x4b,
    0xbe, 0xd4, 0xa8, 0x76, 0x3e, 0x34, 0xc3, 0x10, 0xbe, 0x14, 0x37, 0x8b, 0xbe,
    0x9d, 0x01, 0x4c, 0x3e, 0xe6, 0x06, 0xba, 0xbe, 0xd4, 0xf7, 0xdd, 0x3d, 0x43,
    0x25, 0xe7, 0x3a, 0xc0, 0xf9, 0x95, 0xbe, 0x6b, 0x2c, 0x20, 0xbf, 0xda, 0x93,
    0x12, 0xbe, 0xc9, 0xbb, 0x4b, 0xbe, 0x94, 0x80, 0xc0, 0x3d, 0x9d, 0x59, 0x43,
    0x3e, 0xe1, 0x11, 0x56, 0x3d, 0x2f, 0x1b, 0xc7, 0x3e, 0x5e, 0x95, 0x94, 0x3d,
    0xa8, 0x50, 0xfc, 0xbe, 0x4a, 0x4c, 0x09, 0xbf, 0xd3, 0x1b, 0x90, 0xbe, 0x79,
    0x17, 0x11, 0x3e, 0xf0, 0xb3, 0x74, 0xbd, 0xaf, 0x51, 0x95, 0xbe, 0xa2, 0x06,
    0xde, 0xbd, 0xef, 0xc1, 0xd6, 0xbe, 0x65, 0x43, 0xb5, 0x3e, 0x80, 0x85, 0x72,
    0xbb, 0x66, 0xba, 0x94, 0xbe, 0x0c, 0x40, 0xd6, 0xbd, 0x13, 0x0d, 0xe9, 0xbd,
    0x08, 0x59, 0xbb, 0xbe, 0xb4, 0xbf, 0xe4, 0x3d, 0xd2, 0xaf, 0xaf, 0xbe, 0x22,
    0x71, 0xd4, 0x3d, 0xc5, 0x82, 0x82, 0xbd, 0x67, 0x38, 0x00, 0x3f, 0x92, 0xfc,
    0xb8, 0x3e, 0x82, 0x80, 0x4f, 0x3e, 0x64, 0x7b, 0xec, 0xbd, 0xbd, 0xb4, 0xad,
    0xbe, 0x1f, 0x66, 0x3f, 0xbe, 0x24, 0xad, 0x21, 0xbe, 0xff, 0x77, 0xc5, 0x3e,
    0x50, 0xb7, 0xaf, 0xbc, 0x61, 0x0d, 0xd9, 0x3e, 0xb0, 0xab, 0x27, 0x3d, 0xee,
    0xdc, 0x59, 0xbe, 0xc8, 0x2e, 0x04, 0xbe, 0x6a, 0x84, 0xd3, 0xbe, 0x22, 0x8c,
    0x13, 0xbe, 0x6e, 0xfc, 0x04, 0x3e, 0xa8, 0x89, 0x32, 0xbe, 0x89, 0x4e, 0xd4,
    0xbe, 0xa5, 0xde, 0xd6, 0xbe, 0xc9, 0x69, 0xb9, 0x3e, 0x9c, 0x26, 0xc5, 0xbe,
    0xe1, 0x34, 0xc8, 0x3e, 0x2d, 0x55, 0xc5, 0x3e, 0x82, 0x3f, 0x28, 0x3e, 0x41,
    0xc1, 0xa8, 0x3e, 0x6f, 0x2b, 0xbf, 0xbe, 0x66, 0xf6, 0xbd, 0xbd, 0xbd, 0x3d,
    0x93, 0x3e, 0xa9, 0x1b, 0x57, 0xbe, 0xc7, 0xf2, 0x4f, 0xbe, 0x5c, 0x52, 0xfa,
    0x3c, 0x00, 0x2e, 0x69, 0x3e, 0xfc, 0xa5, 0x7e, 0x3e, 0xf9, 0xd1, 0x4e, 0xbe,
    0x02, 0xc3, 0x3f, 0x3e, 0x05, 0x47, 0xc9, 0x3e, 0x08, 0xcc, 0x0c, 0x3e, 0xe7,
    0x11, 0xc8, 0x3e, 0xc4, 0xb3, 0xd1, 0x3d, 0x80, 0x71, 0xc0, 0xbb, 0x68, 0x66,
    0x66, 0xbd, 0x7f, 0x76, 0xba, 0x3e, 0x4a, 0x19, 0x16, 0x3e, 0x7a, 0x99, 0x65,
    0x3d, 0x00, 0xa3, 0x06, 0xbe, 0x0b, 0x26, 0x10, 0xbf, 0x1b, 0x4d, 0x87, 0x3e,
    0x63, 0x08, 0x1e, 0xbd, 0xa6, 0x9a, 0x25, 0x3f, 0x18, 0x29, 0x0b, 0xbc, 0x6c,
    0x12, 0x89, 0x3d, 0x26, 0x0f, 0x04, 0x3e, 0x55, 0xea, 0x89, 0x3e, 0x8c, 0xf8,
    0x27, 0x3e, 0x56, 0x86, 0x9b, 0xbe, 0x96, 0x94, 0x5a, 0x3e, 0xfe, 0x2b, 0x04,
    0x3e, 0x74, 0x54, 0xb7, 0xbd, 0xf6, 0x7d, 0x17, 0x3d, 0x48, 0x62, 0x81, 0x3c,
    0x0e, 0x76, 0xa9, 0xbe, 0xc6, 0x1c, 0x6d, 0x3d, 0x24, 0xf9, 0x87, 0x3e, 0x37,
    0xf5, 0x86, 0x3e, 0xc8, 0x0d, 0x6b, 0xbb, 0xe8, 0xf1, 0xa4, 0x3d, 0x1a, 0xff,
    0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x40, 0x4c, 0x33,
    0xbe, 0x00, 0x5d, 0x52, 0xbc, 0xf0, 0x6f, 0x5e, 0x3e, 0xa9, 0xee, 0xd9, 0xbb,
    0x1a, 0x88, 0xc2, 0x3e, 0x00, 0x2a, 0x61, 0xbc, 0x24, 0xda, 0x52, 0xbe, 0x98,
    0x29, 0xd7, 0xbd, 0xf7, 0x9a, 0xb2, 0x3e, 0x5d, 0xb2, 0x87, 0x3d, 0xa6, 0x59,
    0x53, 0xbe, 0x28, 0xd5, 0xdd, 0x3c, 0x5f, 0x97, 0x0c, 0x3f, 0xb7, 0xa4, 0x2a,
    0x3e, 0xe8, 0x3c, 0x91, 0x3e, 0x04, 0x08, 0x9f, 0x3e, 0x66, 0xff, 0xff, 0xff,
    0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xe6, 0xd1, 0xc2, 0xbe, 0x29, 0xdc, 0x07, 0xbc, 0xde, 0x28,
    0x6a, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x32, 0xaf, 0x8e, 0xbe, 0x80, 0xa0, 0x01, 0x3e, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xe0, 0xf5, 0x3e, 0xc2, 0x50, 0x61, 0xbb, 0x14, 0xe9, 0x77, 0xbe, 0x5e,
    0x2d, 0x26, 0xbf, 0x72, 0x96, 0x7c, 0x3f, 0xb2, 0xff, 0xff, 0xff, 0x04, 0x00,
    0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xb9, 0xef, 0x70, 0x3e, 0x45, 0x44, 0x4e,
    0x3e, 0x56, 0x13, 0x81, 0x3f, 0xcd, 0xba, 0x90, 0x3e, 0x3a, 0xfd, 0x81, 0x3e,
    0x59, 0x9a, 0x95, 0xbd, 0x12, 0x0d, 0x2f, 0x3e, 0xa4, 0xdf, 0x63, 0x3e, 0xa7,
    0x8b, 0xc6, 0x3e, 0x1f, 0xbd, 0x0c, 0x3e, 0x02, 0x63, 0x65, 0x3e, 0xff, 0xa2,
    0x0e, 0xbe, 0x00, 0x00, 0x00, 0x00, 0xba, 0xc2, 0xfb, 0xbc, 0xd8, 0xae, 0x60,
    0xbe, 0x8b, 0x00, 0x8f, 0x3d, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00,
    0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xbc,
    0x82, 0x11, 0xbe, 0x08, 0xfb, 0xff, 0xff, 0x0c, 0xfb, 0xff, 0xff, 0x0f, 0x00,
    0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72,
    0x74, 0x65, 0x64, 0x2e, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08,
    0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00,
    0x00, 0x00, 0xd8, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0x9a, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x84, 0xfb, 0xff,
    0xff, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xca,
    0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x00,
    0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xba, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x07, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0e, 0x00, 0x16, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x0b, 0x00,
    0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,
    0x08, 0x00, 0x07, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0a, 0x00, 0x00, 0x00, 0xa4, 0x03, 0x00, 0x00, 0x34, 0x03, 0x00, 0x00, 0xc4,
    0x02, 0x00, 0x00, 0x6c, 0x02, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0xd4, 0x01,
    0x00, 0x00, 0x88, 0x01, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x9a, 0xfc, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
    0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0a,
    0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff,
    0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x84, 0xfc, 0xff, 0xff, 0x19, 0x00, 0x00,
    0x00, 0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c, 0x50, 0x61, 0x72, 0x74,
    0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c, 0x3a, 0x30,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0xf2, 0xfc, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00,
    0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
    0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x10,
    0x00, 0x00, 0x00, 0xdc, 0xfc, 0xff, 0xff, 0x52, 0x00, 0x00, 0x00, 0x73, 0x65,
    0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33, 0x2f, 0x64, 0x65,
    0x6e, 0x73, 0x65, 0x5f, 0x37, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b,
    0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33, 0x2f,
    0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x37, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b,
    0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33, 0x2f,
    0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x37, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41,
    0x64, 0x64, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10,
    0x00, 0x00, 0x00, 0x82, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00,
    0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00,
    0x00, 0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
    0x10, 0x00, 0x00, 0x00, 0x6c, 0xfd, 0xff, 0xff, 0x52, 0x00, 0x00, 0x00, 0x73,
    0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33, 0x2f, 0x64,
    0x65, 0x6e, 0x73, 0x65, 0x5f, 0x36, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c,
    0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33,
    0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x36, 0x2f, 0x52, 0x65, 0x6c, 0x75,
    0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33,
    0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x36, 0x2f, 0x42, 0x69, 0x61, 0x73,
    0x41, 0x64, 0x64, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x7e, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x28, 0x00,
    0x00, 0x00, 0xec, 0xfd, 0xff, 0xff, 0x1b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71,
    0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33, 0x2f, 0x64, 0x65, 0x6e,
    0x73, 0x65, 0x5f, 0x38, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0xc6, 0xfe,
    0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
    0x00, 0x06, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x34, 0xfe, 0xff, 0xff,
    0x1b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61,
    0x6c, 0x5f, 0x33, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x37, 0x2f, 0x4d,
    0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
    0x00, 0x10, 0x00, 0x00, 0x00, 0x0e, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
    0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x28,
    0x00, 0x00, 0x00, 0x7c, 0xfe, 0xff, 0xff, 0x1b, 0x00, 0x00, 0x00, 0x73, 0x65,
    0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33, 0x2f, 0x64, 0x65,
    0x6e, 0x73, 0x65, 0x5f, 0x36, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x56,
    0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0xc4, 0xfe, 0xff,
    0xff, 0x2b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
    0x61, 0x6c, 0x5f, 0x33, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x36, 0x2f,
    0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56,
    0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x10, 0x00, 0x00, 0x00, 0xaa, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
    0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x38,
    0x00, 0x00, 0x00, 0x18, 0xff, 0xff, 0xff, 0x2b, 0x00, 0x00, 0x00, 0x73, 0x65,
    0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x33, 0x2f, 0x64, 0x65,
    0x6e, 0x73, 0x65, 0x5f, 0x37, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64,
    0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65,
    0x4f, 0x70, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x16, 0x00, 0x18, 0x00, 0x14, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x84, 0xff, 0xff, 0xff, 0x2b, 0x00,
    0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f,
    0x33, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x38, 0x2f, 0x42, 0x69, 0x61,
    0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69,
    0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x1c, 0x00, 0x18, 0x00, 0x00, 0x00, 0x14,
    0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x07, 0x00,
    0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x20,
    0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x00,
    0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00,
    0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75,
    0x6c, 0x74, 0x5f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x36, 0x5f, 0x69, 0x6e,
    0x70, 0x75, 0x74, 0x3a, 0x30, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0c,
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
};
const int sine_model_len = 3196;
