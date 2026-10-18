/* speed.exe 004774b0 FUN_004774b0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 004700d0 FUN_004700d0
 * calls 00477250 FUN_00477250
 */

void __thiscall FUN_004774b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00477250();
  if (DAT_00911020 == 0) {
    iVar1 = FUN_007c4b80();
    *(short *)(*(int *)(param_1 + 0x1c) + 0xc4) =
         (short)((ulonglong)((longlong)iVar1 * 0xb60b60b7) >> 0x28) -
         ((short)(char)((char)(iVar1 / 0x1680000) + (char)(iVar1 >> 0x1f)) >> 0xf);
    if ((DAT_00911020 == 0) &&
       (*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb8) = *(undefined4 *)(param_1 + 0xa8),
       DAT_00911020 == 0)) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb4) = *(undefined4 *)(param_1 + 0xa4);
    }
  }
  FUN_004700d0(param_1 + 0xb0,param_2);
  return;
}

