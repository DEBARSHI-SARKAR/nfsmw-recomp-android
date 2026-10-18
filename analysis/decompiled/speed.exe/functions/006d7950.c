/* speed.exe 006d7950 FUN_006d7950; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 006cf400 FUN_006cf400
 */

void FUN_006d7950(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(&DAT_00919cb0 + param_1 * 0x70);
  if (DAT_00911020 == 0) {
    iVar2 = FUN_007c4b80();
    *(short *)(iVar1 + 0xc4) =
         (short)((ulonglong)((longlong)iVar2 * 0xb60b60b7) >> 0x28) -
         ((short)(char)((char)(iVar2 / 0x1680000) + (char)(iVar2 >> 0x1f)) >> 0xf);
  }
  *(undefined4 *)(iVar1 + 0xbc) = DAT_008faec0;
  *(undefined4 *)(iVar1 + 0xc0) = DAT_008faec4;
  FUN_006cf400(&DAT_00919c70 + param_1 * 0x1c,0,0,0,1);
  return;
}

