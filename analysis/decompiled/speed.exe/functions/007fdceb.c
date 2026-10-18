/* speed.exe 007fdceb FUN_007fdceb; analysis pseudocode, not buildable source.
 * calls 007fdbf5 FUN_007fdbf5
 * calls 007fdcb3 FUN_007fdcb3
 */

void FUN_007fdceb(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = param_1 - param_2;
    param_1 = param_2;
  }
  if (iVar1 == 1) {
    iVar2 = 1;
    param_6 = param_5;
  }
  else {
    iVar2 = param_4;
    if (iVar1 != param_4) {
      if (iVar1 == param_4 + -1) {
        param_1 = param_1 + -1;
      }
      else if (iVar1 != param_4 + 1) {
        return;
      }
      FUN_007fdcb3(param_1,param_3,param_4,&DAT_0090a378 + param_5 * 8,&DAT_0090a378 + param_6 * 8);
      return;
    }
  }
  FUN_007fdbf5(param_1,param_3,param_4,iVar2,8,8,&DAT_0090a378 + param_6 * 8);
  return;
}

