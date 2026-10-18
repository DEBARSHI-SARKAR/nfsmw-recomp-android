/* speed.exe 00458690 FUN_00458690; analysis pseudocode, not buildable source.
 * calls 00457270 FUN_00457270
 * calls 00457090 FUN_00457090
 * calls 00458690 FUN_00458690
 * calls 00456910 FUN_00456910
 * calls 00457a00 FUN_00457a00
 */

void FUN_00458690(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_00458713:
      if (1 < iVar1) {
        FUN_00457270(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          FUN_00456910(param_1,param_2,0,0);
        }
        FUN_00457a00(param_1,param_2);
        return;
      }
      goto LAB_00458713;
    }
    FUN_00457090(&local_8,param_1,param_2);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffff8U) < (int)(param_2 - local_4 & 0xfffffff8U)) {
      FUN_00458690(param_1,local_8,param_3);
      param_1 = iVar1;
    }
    else {
      FUN_00458690(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

