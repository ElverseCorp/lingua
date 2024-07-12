/* Include Llibs framework */
#include <llibs.h>

/** 
 * @brief Convert int64 to binary string
 * 
 * @param[in] num integer number to convert
 * @param[out] out output string buffer
 * @return Length of the resulting string
 */
lsz lsi64bin(li64 num, lc* out) {
    lc* ptr = out;
    li64 mask = (li64)1 << 63;

    while (mask > 0) {
        *ptr++ = (num & mask) ? '1' : '0';
        mask >>= 1;
    }
    *ptr = '\0';

    return ptr - out;
}

/** 
 * @brief Convert int64 to decimal string
 * 
 * @param[in] num integer number to convert
 * @param[out] out output string buffer
 * @return Length of the resulting string
 */
lsz lsi64dec(li64 num, lc* out) {
    lc buffer[21];
    lc* ptr = buffer + 20;
    *ptr = '\0';
    li64 abs_num = num < 0 ? -num : num;
    do {
        *--ptr = '0' + (abs_num % 10);
        abs_num /= 10;
    } while (abs_num > 0);

    if (num < 0) {
        *--ptr = '-';
    }

    lsz len = buffer + 20 - ptr;
    lscpy(out, ptr);

    return len;
}

/** 
 * @brief Convert int64 to octal string
 * 
 * @param[in] num integer number to convert
 * @param[out] out output string buffer
 * @return Length of the resulting string
 */
lsz lsi64oct(li64 num, lc* out) {
    lc buffer[23];
    lc* ptr = buffer + 22;
    *ptr = '\0';
    li64 abs_num = num < 0 ? -num : num;
    do {
        *--ptr = '0' + (abs_num & 7);
        abs_num >>= 3;
    } while (abs_num > 0);

    if (num < 0) {
        *--ptr = '-';
    }

    lsz len = buffer + 22 - ptr;
    lscpy(out, ptr);

    return len;
}

/** 
 * @brief Convert int64 to hexadecimal string
 * 
 * @param[in] num integer number to convert
 * @param[out] out output string buffer
 * @return Length of the resulting string
 */
lsz lsi64hex(li64 num, lc* out) {
    lc buffer[17];
    lc* ptr = buffer + 16;
    *ptr = '\0';
    li64 abs_num = num < 0 ? -num : num;
    const lc* digits = "0123456789ABCDEF";
    do {
        *--ptr = digits[abs_num & 0xF];
        abs_num >>= 4;
    } while (abs_num > 0);

    if (num < 0) {
        *--ptr = '-';
    }

    lsz len = buffer + 16 - ptr;
    lscpy(out, ptr);

    return len;
}
