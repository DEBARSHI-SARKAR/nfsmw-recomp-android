/* speed.exe 00765c30 FUN_00765c30; analysis pseudocode, not buildable source.
 * calls 005d0bf0 FUN_005d0bf0
 */

void __thiscall FUN_00765c30(int param_1,int param_2)

{
  if ((*(byte *)(param_2 + 0xb) & 1) != 0) {
    FUN_005d0bf0(param_1 + 0xd4,param_1 + 0xec,param_1 + 200,param_1 + 0xe0);
    if (*(char *)(param_1 + 0x55) != '\0') {
      FUN_005d0bf0(param_1 + 0x104,param_1 + 0x11c,param_1 + 0xf8,param_1 + 0x110);
      FUN_005d0bf0(param_1 + 0x134,param_1 + 0x14c,param_1 + 0x128,param_1 + 0x140);
    }
  }
  return;
}

