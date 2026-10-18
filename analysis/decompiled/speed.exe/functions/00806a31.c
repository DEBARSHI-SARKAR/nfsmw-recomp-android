/* speed.exe 00806a31 FUN_00806a31; analysis pseudocode, not buildable source.
 */

void FUN_00806a31(int param_1)

{
  int iVar1;
  
  *(undefined **)(param_1 + 0x13c) = &DAT_0090b0b8;
  iVar1 = 0;
  do {
    *(char *)(*(int *)(&DAT_0090b0b8 + (&DAT_0090aeb8)[iVar1] * 4) + 0x140 + param_1) = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40);
  return;
}

