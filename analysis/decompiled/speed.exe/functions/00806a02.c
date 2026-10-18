/* speed.exe 00806a02 FUN_00806a02; analysis pseudocode, not buildable source.
 */

void FUN_00806a02(int param_1)

{
  int iVar1;
  
  *(undefined **)(param_1 + 0x13c) = &DAT_0090afb8;
  iVar1 = 0;
  do {
    *(char *)(*(int *)(&DAT_0090afb8 + (&DAT_0090aeb8)[iVar1] * 4) + 0x140 + param_1) = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40);
  return;
}

