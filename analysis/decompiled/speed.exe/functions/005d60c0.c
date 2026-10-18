/* speed.exe 005d60c0 FUN_005d60c0; analysis pseudocode, not buildable source.
 * calls 005d55e0 FUN_005d55e0
 * calls 005d4cc0 FUN_005d4cc0
 * calls 005d60c0 FUN_005d60c0
 * calls 005d5e20 FUN_005d5e20
 * calls 005d4f60 FUN_005d4f60
 */

void FUN_005d60c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_005d6143:
      if (1 < iVar1) {
        FUN_005d55e0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          FUN_005d4f60(param_1,param_2,0,0);
        }
        FUN_005d5e20(param_1,param_2);
        return;
      }
      goto LAB_005d6143;
    }
    FUN_005d4cc0(&local_8,param_1,param_2);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffff8U) < (int)(param_2 - local_4 & 0xfffffff8U)) {
      FUN_005d60c0(param_1,local_8,param_3);
      param_1 = iVar1;
    }
    else {
      FUN_005d60c0(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

