/* speed.exe 007fdae8 FUN_007fdae8; analysis pseudocode, not buildable source.
 * calls 007fd952 FUN_007fd952
 * calls 007fd78e FUN_007fd78e
 * calls 007fdab0 FUN_007fdab0
 * calls 007fd98f FUN_007fd98f
 */

void FUN_007fdae8(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = param_1 - param_2;
    param_1 = param_2;
  }
  if (iVar1 == 1) {
    if (param_7 == 0) {
      iVar1 = 1;
LAB_007fdb6c:
      FUN_007fd98f(param_1,param_3,param_4,iVar1,8,8,&DAT_0090a378 + param_5 * 8);
      return;
    }
    iVar1 = 1;
  }
  else {
    if (iVar1 != param_4) {
      if (iVar1 == param_4 + -1) {
        if (param_7 != 0) {
          param_1 = param_1 + -1;
LAB_007fdbe8:
          FUN_007fd952(param_1,param_3,param_4,&DAT_0090a2f8 + param_5 * 0x10,
                       &DAT_0090a2f8 + param_6 * 0x10);
          return;
        }
        param_1 = param_1 + -1;
      }
      else {
        if (iVar1 != param_4 + 1) {
          return;
        }
        if (param_7 != 0) goto LAB_007fdbe8;
      }
      FUN_007fdab0(param_1,param_3,param_4,&DAT_0090a378 + param_5 * 8,&DAT_0090a378 + param_6 * 8);
      return;
    }
    iVar1 = param_4;
    param_5 = param_6;
    if (param_7 == 0) goto LAB_007fdb6c;
  }
  FUN_007fd78e(param_1,param_3,param_4,iVar1,8,8,&DAT_0090a2f8 + param_5 * 0x10);
  return;
}

