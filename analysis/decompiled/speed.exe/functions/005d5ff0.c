/* speed.exe 005d5ff0 FUN_005d5ff0; analysis pseudocode, not buildable source.
 * calls 005d4b00 FUN_005d4b00
 * calls 005d4ee0 FUN_005d4ee0
 * calls 005d5db0 FUN_005d5db0
 * calls 005d5ff0 FUN_005d5ff0
 * calls 005d5530 FUN_005d5530
 */

void FUN_005d5ff0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_005d6073:
      if (1 < iVar1) {
        FUN_005d5530(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          FUN_005d4ee0(param_1,param_2,0,0);
        }
        FUN_005d5db0(param_1,param_2);
        return;
      }
      goto LAB_005d6073;
    }
    FUN_005d4b00(&local_8,param_1,param_2);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffff8U) < (int)(param_2 - local_4 & 0xfffffff8U)) {
      FUN_005d5ff0(param_1,local_8,param_3);
      param_1 = iVar1;
    }
    else {
      FUN_005d5ff0(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

