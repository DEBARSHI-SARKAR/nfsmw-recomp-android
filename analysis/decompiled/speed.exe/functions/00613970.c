/* speed.exe 00613970 FUN_00613970; analysis pseudocode, not buildable source.
 * calls 00613880 FUN_00613880
 * calls 00606980 FUN_00606980
 */

int FUN_00613970(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5)

{
  int *piVar1;
  
  if (param_4 == 0) {
    if (param_2 == 0) {
      return 0;
    }
    (*DAT_0091e0e4)(param_1,param_2,param_3,param_5);
    param_2 = 0;
  }
  else if (param_4 < 0xfffffffd) {
    param_2 = (*DAT_0091e0e0)(param_1,param_2,param_3,param_4,param_5);
    if (param_2 == 0) {
      if (param_1 == 0) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00606980(param_1,4);
    }
  }
  else {
    FUN_00613880(param_1,"memory allocation error: block too big");
  }
  if (param_1 != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x24);
    *piVar1 = *piVar1 - param_3;
    piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x24);
    *piVar1 = *piVar1 + param_4;
  }
  return param_2;
}

