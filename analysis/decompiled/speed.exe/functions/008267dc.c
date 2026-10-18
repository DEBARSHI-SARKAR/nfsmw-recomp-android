/* speed.exe 008267dc FUN_008267dc; analysis pseudocode, not buildable source.
 * calls 0081eae9 FUN_0081eae9
 * calls 0081e9e7 FUN_0081e9e7
 * calls 00819670 FUN_00819670
 */

void FUN_008267dc(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_2;
  if (iVar1 < param_3) {
    if (iVar1 == 0) {
      *param_2 = param_3;
    }
    else {
      iVar3 = *param_2;
      do {
        iVar3 = iVar3 * 2;
      } while (iVar3 < param_3);
      *param_2 = iVar3;
    }
    iVar3 = *param_1;
    iVar2 = FUN_0081e9e7(*param_2 * param_4);
    if (iVar3 != 0) {
      FUN_00819670(iVar2,iVar3,iVar1 * param_4);
      FUN_0081eae9(iVar3);
    }
    *param_1 = iVar2;
  }
  return;
}

