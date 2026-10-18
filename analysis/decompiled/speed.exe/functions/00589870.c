/* speed.exe 00589870 FUN_00589870; analysis pseudocode, not buildable source.
 * calls 00589770 FUN_00589770
 * calls 005752d0 FUN_005752d0
 * calls 00514d10 FUN_00514d10
 */

void __thiscall FUN_00589870(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (param_5 == -1) {
    param_5 = param_4;
  }
  if ((param_2 < param_3) && (param_3 != 0)) {
    FUN_00589770(1);
    FUN_005752d0(param_2,param_3,param_4);
    if (param_5 == 1) {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x48),0x9e99,1);
      return;
    }
    if (param_5 == param_3) {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x4c),0x9e99,1);
      return;
    }
  }
  else {
    FUN_00589770(0);
  }
  return;
}

