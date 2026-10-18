/* speed.exe 00836650 FUN_00836650; analysis pseudocode, not buildable source.
 * calls 00835d00 FUN_00835d00
 */

void FUN_00836650(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x18 + *(int *)(param_1 + 0x58) * 4);
  if (param_2 != 0x1000) {
    iVar2 = 0;
    while ((char)(&DAT_008c623c)[iVar2 + iVar1 * 3] != param_2) {
      iVar2 = iVar2 + 1;
      if (2 < iVar2) {
        return;
      }
    }
    if (iVar1 == 3) {
      FUN_00835d00(param_1,param_2,0);
      return;
    }
  }
  FUN_00835d00(param_1,param_2,1);
  return;
}

