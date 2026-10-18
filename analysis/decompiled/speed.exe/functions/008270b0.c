/* speed.exe 008270b0 FUN_008270b0; analysis pseudocode, not buildable source.
 * calls 00822050 FUN_00822050
 * calls 00828b2f FUN_00828b2f
 */

int FUN_008270b0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x24)) {
    iVar1 = FUN_00828b2f(&param_4,param_2);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar1;
    param_4 = param_4 + iVar1 * 4;
    if (iVar1 < param_2) {
      FUN_00822050(param_4,(param_2 - iVar1) * 4);
      iVar1 = iVar1 + (param_2 - iVar1);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

