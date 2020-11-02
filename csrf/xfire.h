


//uint8_t createCrossfireChannelsFrame(uint8_t * frame, int16_t * pulses);
uint8_t createCrossfireChannelsFrame(uint8_t * frame);
uint8_t startCrossfire();
uint8_t runCrossfire();
void setupPulsesCrossfire();
uint8_t crc8(const uint8_t * ptr, uint32_t len);

#define CROSSFIRE_CH_BITS           11
#define CROSSFIRE_CENTER            0x3E0
#define CROSSFIRE_CENTER_CH_OFFSET(ch)            (0)

#define CROSSFIRE_CHANNELS_COUNT  12
#define MODULE_ADDRESS              0xEE
#define CHANNELS_ID                 0x16
#define CROSSFIRE_FRAME_MAXLEN         64
#define REFRESH_INTERVAL 4 //ms