/* speed.exe 00752a90 FUN_00752a90; analysis pseudocode, not buildable source.
 * calls 00747c40 FUN_00747c40
 * calls 00751540 FUN_00751540
 */

int FUN_00752a90(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[2];
  iVar2 = param_1[3];
  if (param_6 <= param_5) {
    return param_3;
  }
  do {
    for (iVar4 = FUN_00747c40(*param_1,param_5,0,0,0xffffffff); iVar3 = iVar1, iVar4 != 0;
        iVar4 = FUN_00747c40(*param_1,param_5,0,iVar4,0xffffffff)) {
      for (; iVar3 <= iVar2; iVar3 = iVar3 + 1) {
        if ((iVar4 != 0) && (iVar5 = FUN_00751540(0,iVar3), iVar5 != 0)) {
          if (param_3 < param_4) {
            *(int *)(param_2 + param_3 * 4) = iVar5;
          }
          param_3 = param_3 + 1;
        }
      }
    }
    param_5 = param_5 + 1;
  } while (param_5 < param_6);
  return param_3;
}

