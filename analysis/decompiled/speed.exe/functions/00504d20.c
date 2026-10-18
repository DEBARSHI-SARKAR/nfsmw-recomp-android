/* speed.exe 00504d20 FUN_00504d20; analysis pseudocode, not buildable source.
 * calls 00500bc0 FUN_00500bc0
 */

int FUN_00504d20(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 < 1) {
    return param_4;
  }
  do {
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    if (((iVar1 != 0) && (iVar1 = FUN_00500bc0(iVar1), iVar1 != 0)) && (*(int *)(iVar1 + 0x14) != 0)
       ) {
      *(int *)(param_3 + param_4 * 4) = *(int *)(iVar1 + 0x14);
      param_4 = param_4 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < param_2);
  return param_4;
}

