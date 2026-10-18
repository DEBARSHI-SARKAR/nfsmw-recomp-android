/* speed.exe 0076fe90 FUN_0076fe90; analysis pseudocode, not buildable source.
 * calls 00766680 FUN_00766680
 */

undefined4 __fastcall FUN_0076fe90(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    return 0;
  }
  iVar1 = *(short *)(param_1 + 0x8e) * 0x16;
  iVar2 = iVar1 + DAT_009b38c0;
  if ((*(byte *)(iVar1 + 10 + DAT_009b38c0) & 1) != 0) {
    iVar2 = FUN_00766680((uint)*(ushort *)(iVar2 + *(char *)(param_1 + 0x8c) * 2) * 0x20 +
                         DAT_009b38bc,(int)*(short *)(param_1 + 0x8e));
  }
  if ((iVar2 != 0) && ((~(*(byte *)(iVar2 + 10) >> 1) & 1) != 0)) {
    return 1;
  }
  return 0;
}

