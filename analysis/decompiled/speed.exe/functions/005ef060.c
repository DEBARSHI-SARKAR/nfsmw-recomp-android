/* speed.exe 005ef060 FUN_005ef060; analysis pseudocode, not buildable source.
 * calls 005ed100 FUN_005ed100
 * calls 005eb050 FUN_005eb050
 * calls 005ecf10 FUN_005ecf10
 * calls 005ef060 FUN_005ef060
 * calls 005ee780 FUN_005ee780
 */

void FUN_005ef060(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_005ef0e3:
      if (1 < iVar1) {
        FUN_005ed100(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          FUN_005eb050(param_1,param_2,0,0);
        }
        FUN_005ee780(param_1,param_2);
        return;
      }
      goto LAB_005ef0e3;
    }
    FUN_005ecf10(&local_8,param_1,param_2);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffff8U) < (int)(param_2 - local_4 & 0xfffffff8U)) {
      FUN_005ef060(param_1,local_8,param_3);
      param_1 = iVar1;
    }
    else {
      FUN_005ef060(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

