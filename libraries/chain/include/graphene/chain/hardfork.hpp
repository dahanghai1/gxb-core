/*****************************************
 *                                       *
 * This file is automatically generated. *
 * To create new hardfork, please modify *
 * the .hf files in hardfork.d instead   *
 * of modifying this file.               *
 *                                       *
 *****************************************/

#pragma once
//#1001 is for commission rate
#ifndef HARDFORK_1001_TIME
#define HARDFORK_1001_TIME (fc::time_point_sec( 1506787200 ))
#endif
// hardfork 1002
// start at 2017-11-01 00:00:00
// voting with GXS
#ifndef HARDFORK_1002_TIME
#define HARDFORK_1002_TIME (fc::time_point_sec(1509465600))
#endif
// hardfork 1003 is for commission allocation
// x% --> reserve pool
#ifndef HARDFORK_1003_TIME
#define HARDFORK_1003_TIME (fc::time_point_sec( 1509292800 ))
#endif

// hardfork 1004 disable limit order
#ifndef HARDFORK_1004_TIME
#define HARDFORK_1004_TIME (fc::time_point_sec( 1524153600 ))
#endif

// hardfork 1005
// create asset fee
#ifndef HARDFORK_1005_TIME
#define HARDFORK_1005_TIME (fc::time_point_sec( 1524153600 ))
#endif

// hardfork 1006
// add wasm validate, for testnet
// start at 2018-08-20 18:00:00
#ifndef HARDFORK_1006_TIME
#define HARDFORK_1006_TIME (fc::time_point_sec( 1534759200 ))
#endif

// hardfork 1007
// enable smart contract 2.0
#ifndef HARDFORK_1007_TIME
// start at 2018-08-01 00:00:00
#define HARDFORK_1007_TIME (fc::time_point_sec( 1533052800 )) // for testnet
#endif

// hardfork 1008
// core asset hardfork
// UTC "2018-09-13 00:00:00"
#ifndef HARDFORK_1008_TIME
#define HARDFORK_1008_TIME (fc::time_point_sec( 1536768000 )) // for testnet
#endif

// hardfork 1009
// UTC "2018-09-26 00:00:00"
// for vesting balance object
#ifndef HARDFORK_1009_TIME
#define HARDFORK_1009_TIME (fc::time_point_sec( 1537891200 )) // for testnet

// enable witness guaranty
#ifndef HARDFORK_1129_TIME
#define HARDFORK_1129_TIME (fc::time_point_sec( 1543276800 )) // for testnet, 2018-11-27T00:00:00(UTC)
#endif

// #413 Add operation to claim asset fees
#ifndef HARDFORK_413_TIME
#define HARDFORK_413_TIME (fc::time_point_sec( 1446652800 ))
#endif
// #415 Default accept policy for asset with no whitelist authorities
#ifndef HARDFORK_415_TIME
#define HARDFORK_415_TIME (fc::time_point_sec( 1446652800 ))
#endif
// #416 enforce_white_list is inconsistently applied
#ifndef HARDFORK_416_TIME
#define HARDFORK_416_TIME (fc::time_point_sec( 1446652800 ))
#endif
// #419 Account can pay fees in blacklisted asset
#ifndef HARDFORK_419_TIME
#define HARDFORK_419_TIME (fc::time_point_sec( 1446652800 ))
#endif
// #436 Prevent margin call from being triggered unless feed < call price
#ifndef HARDFORK_436_TIME
#define HARDFORK_436_TIME (fc::time_point_sec( 1450288800 ))
#endif
// #445 Refund create order fees on cancel
#ifndef HARDFORK_445_TIME
#define HARDFORK_445_TIME (fc::time_point_sec( 1450288800 ))
#endif
// #453 Hardfork to retroactively correct referral percentages
#ifndef HARDFORK_453_TIME
#define HARDFORK_453_TIME (fc::time_point_sec( 1450288800 ))
#endif
// #480 Fix non-BTS MIA core_exchange_rate check
#ifndef HARDFORK_480_TIME
#define HARDFORK_480_TIME (fc::time_point_sec( 1450378800 ))
#endif
// #483 Operation history numbering change
#ifndef HARDFORK_483_TIME
#define HARDFORK_483_TIME (fc::time_point_sec( 1450378800 ))
#endif
// #538 Buyback accounts
#ifndef HARDFORK_538_TIME
#define HARDFORK_538_TIME (fc::time_point_sec( 1456250400 ))
#endif
// #555 Buyback accounts
#ifndef HARDFORK_555_TIME
#define HARDFORK_555_TIME (fc::time_point_sec( 1456250400 ))
#endif
// #563 Stealth fee routing
#ifndef HARDFORK_563_TIME
#define HARDFORK_563_TIME (fc::time_point_sec( 1456250400 ))
#endif
// #572 Allow asset to update permission flags when no supply exists
#ifndef HARDFORK_572_TIME
#define HARDFORK_572_TIME (fc::time_point_sec( 1456250400 ))
#endif
// #615 Fix price feed expiration check, so websocket server will never spam too much data
#ifndef HARDFORK_615_TIME
#define HARDFORK_615_TIME (fc::time_point_sec( 1458752400 ))
// #1103 the time point before you can renaming asset symbol
#ifndef HARDFORK_1103_TIME
#define HARDFORK_1103_TIME (fc::time_point_sec( 1541203200 ))
#endif

#endif
