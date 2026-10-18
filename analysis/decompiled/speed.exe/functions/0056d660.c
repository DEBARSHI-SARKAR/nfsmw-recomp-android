/* speed.exe 0056d660 FUN_0056d660; analysis pseudocode, not buildable source.
 * calls 0056d5e0 FUN_0056d5e0
 */

void __fastcall FUN_0056d660(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x3f800000;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_0056d5e0();
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  param_1[7] = 0xffffffff;
  param_1[9] = 0x42ff0000;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)((int)param_1 + 0x15) = 1;
  *(undefined1 *)((int)param_1 + 0x16) = 1;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)((int)param_1 + 0x23) = 1;
  *(undefined1 *)((int)param_1 + 0x21) = 2;
  *(bool *)((int)param_1 + 0x17) = DAT_008f41c0 != 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((int)param_1 + 0x6d) = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  *(undefined1 *)((int)param_1 + 0x5d) = 1;
  *(undefined1 *)((int)param_1 + 0x5e) = 1;
  *(undefined1 *)((int)param_1 + 0x5f) = 1;
  *(undefined1 *)((int)param_1 + 0x61) = 1;
  *(undefined1 *)((int)param_1 + 0x62) = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)((int)param_1 + 99) = 1;
  param_1[0x1a] = 2;
  *(undefined1 *)((int)param_1 + 0x6e) = 1;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)((int)param_1 + 0x71) = 1;
  *(undefined1 *)((int)param_1 + 0x72) = 1;
  *(undefined1 *)((int)param_1 + 0x73) = 1;
  *(undefined1 *)((int)param_1 + 0x75) = 1;
  *(undefined1 *)((int)param_1 + 0x76) = 1;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *(undefined1 *)((int)param_1 + 0x77) = 1;
  param_1[0x1f] = 2;
  *(undefined1 *)((int)param_1 + 0x82) = 1;
  return;
}

