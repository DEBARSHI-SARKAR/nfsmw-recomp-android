/* speed.exe 00817cc0 FUN_00817cc0; analysis pseudocode, not buildable source.
 * calls 00817c43 FUN_00817c43
 * calls 00817f21 FUN_00817f21
 * calls 00817bbd FUN_00817bbd
 */

void FUN_00817cc0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = param_1 - param_2;
    param_1 = param_2;
  }
  if (iVar1 != 1) {
    if (iVar1 == param_4) {
      FUN_00817c43(param_1,param_3,param_4,param_4,8,8,&DAT_0090b440 + param_6 * 0x20);
      return;
    }
    if (iVar1 == param_4 + -1) {
      param_1 = param_1 + -1;
    }
    else if (iVar1 != param_4 + 1) {
      return;
    }
    FUN_00817f21(param_1,param_3,param_4,&DAT_0090b440 + param_5 * 0x20,
                 &DAT_0090b440 + param_6 * 0x20);
    return;
  }
  FUN_00817bbd(param_1,param_3,param_4,1,8,8,&DAT_0090b440 + param_5 * 0x20);
  return;
}

