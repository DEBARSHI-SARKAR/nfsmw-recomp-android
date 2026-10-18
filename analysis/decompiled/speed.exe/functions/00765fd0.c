/* speed.exe 00765fd0 FUN_00765fd0; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00765fd0(int param_1)

{
  short sVar1;
  
  if (((*(char *)(param_1 + 0x51) != '\0') && (DAT_009b3829 != '\0')) &&
     (*(char *)(param_1 + 0x50) != '\0')) {
    sVar1 = *(short *)(*(short *)(param_1 + 0x8e) * 0x16 + DAT_009b38c0 + 10);
    if ((sVar1 < 0) && ((bool)((byte)sVar1 >> 2 & 1) != (*(char *)(param_1 + 0x8c) == '\x01'))) {
      return 1;
    }
    return 0;
  }
  return 0;
}

