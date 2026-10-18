/* speed.exe 005796a0 FUN_005796a0; analysis pseudocode, not buildable source.
 * calls 0056d5e0 FUN_0056d5e0
 * calls 0056d660 FUN_0056d660
 */

int __fastcall FUN_005796a0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined1 *)(param_1 + 0x21) = 2;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0x42ff0000;
  *(bool *)(param_1 + 0x17) = DAT_008f41c0 != 0;
  FUN_0056d5e0();
  *(undefined4 *)(param_1 + 0x68) = 2;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  *(undefined1 *)(param_1 + 0x5d) = 1;
  *(undefined1 *)(param_1 + 0x5e) = 1;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  *(undefined1 *)(param_1 + 0x61) = 1;
  *(undefined1 *)(param_1 + 0x62) = 1;
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined1 *)(param_1 + 99) = 1;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 1;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 0x71) = 1;
  *(undefined1 *)(param_1 + 0x72) = 1;
  *(undefined1 *)(param_1 + 0x73) = 1;
  *(undefined1 *)(param_1 + 0x75) = 1;
  *(undefined1 *)(param_1 + 0x76) = 1;
  *(undefined1 *)(param_1 + 0x74) = 1;
  *(undefined1 *)(param_1 + 0x77) = 1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x82) = 1;
  FUN_0056d660();
  return param_1;
}

