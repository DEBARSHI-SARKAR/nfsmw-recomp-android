/* speed.exe 005ef200 FUN_005ef200; analysis pseudocode, not buildable source.
 * calls 005ed4c0 FUN_005ed4c0
 * calls 005ed350 FUN_005ed350
 * calls 005ef200 FUN_005ef200
 * calls 005eb350 FUN_005eb350
 * calls 005ee820 FUN_005ee820
 */

void FUN_005ef200(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_005ef283:
      if (1 < iVar1) {
        FUN_005ed4c0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_005eb350(param_1,param_2,0,0);
        }
        FUN_005ee820(param_1,param_2);
        return;
      }
      goto LAB_005ef283;
    }
    FUN_005ed350(&local_8,param_1,param_2);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      FUN_005ef200(param_1,local_8,param_3);
      param_1 = iVar1;
    }
    else {
      FUN_005ef200(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

