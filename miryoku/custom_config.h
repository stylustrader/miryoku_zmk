// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_CLIPBOARD=MACSWAP
#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define CONFIG_BT_CTLR_TX_PWR_PLUS_8=y
#define CONFIG_ZMK_MOUSE=y

#define CONFIG_BT_PERIPHERAL_PREF_MAX_INT=9
#define CONFIG_BT_PERIPHERAL_PREF_LATENCY=16
#define CONFIG_BT_BUF_ACL_TX_COUNT=32
#define CONFIG_BT_L2CAP_TX_BUF_COUNT=32

#define CONFIG_ZMK_BLE_EXPERIMENTAL_CONN=y
#define CONFIG_ZMK_SPLIT_BLE_CENTRAL_BATTERY_LEVEL_FETCHING=y
#define CONFIG_ZMK_SPLIT_BLE_CENTRAL_BATTERY_LEVEL_PROXY=y
#define CONFIG_ZMK_BEHAVIORS_QUEUE_SIZE=512
#define CONFIG_BT_LL_SW_LLCP_LEGACY=y

