/* speed.exe 00818542 FUN_00818542; analysis pseudocode, not buildable source.
 * calls 00818240 FUN_00818240
 * calls 008182a6 FUN_008182a6
 * calls 0081830a FUN_0081830a
 */

void FUN_00818542(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = param_1 - param_2;
    param_1 = param_2;
  }
  if (iVar1 != 1) {
    if (iVar1 == param_4) {
      FUN_008182a6(param_1,param_3,param_4,param_4,8,8,&DAT_0090b770 + param_6 * 0x20);
      return;
    }
    if (iVar1 == param_4 + -1) {
      param_1 = param_1 + -1;
    }
    else if (iVar1 != param_4 + 1) {
      return;
    }
    FUN_0081830a(param_1,param_3,param_4,&DAT_0090b770 + param_5 * 0x20,
                 &DAT_0090b770 + param_6 * 0x20);
    return;
  }
  FUN_00818240(param_1,param_3,param_4,1,8,8,&DAT_0090b770 + param_5 * 0x20);
  return;
}

