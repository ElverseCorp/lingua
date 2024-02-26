/* Include llibs.h header */ 
#include <llibs.h>

lsz lslen(lc* str) {
    lsz len = 0;
    while (*str != '\0') {
        if ((*str & 0xC0) != 0x80) {
            ++len;
        }
        ++str;
    }
    return len;
}

lsz lssize(lc* str) {
    lsz size = 0;
    while (*str != '\0') {
        ++size; ++str;
    }
    return size;
}

lsz lssizen(lc* str, lsz n) {
    lsz size = 0;
    while (*str != '\0' && n) {
        if ((*str & 0xC0) != 0x80) {
            --n;
        }
        ++str; ++size;
    }

    while (*str != '\0') {
        if ((*str & 0xC0) != 0x80) {
            break;
        }
        ++str; ++size;
    }
    return size;
}