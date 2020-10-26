#include <stdint.h>
#include <stdlib.h>

int main()
{
    uint8_t buf_len[2]  = { 0 };
    uint8_t tpdata[8] = { 0 };

    uint16_t tplen = (uint16_t)(buf_len[1] << 8) | (uint8_t)buf_len[0];

    if (tpdata[2] == 0x01) //touch report ID
    {
        uint8_t event_id = ((uint8_t)tpdata[8] & 0xF0U) >> 4U;
        printf("%d %d", event_id, tplen);
    }
    return 0;
}
