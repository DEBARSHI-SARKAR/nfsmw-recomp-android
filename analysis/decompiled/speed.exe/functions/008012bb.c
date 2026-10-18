/* speed.exe 008012bb FUN_008012bb; analysis pseudocode, not buildable source.
 */

void FUN_008012bb(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(&DAT_008c4e18 + param_3 * 4);
  }
  else {
    iVar1 = *(int *)(&DAT_008c5214 + param_3 * -4);
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar1;
  return;
}

