/* speed.exe 005ef130 FUN_005ef130; analysis pseudocode, not buildable source.
 * calls 005ed2e0 FUN_005ed2e0
 * calls 005eb1f0 FUN_005eb1f0
 * calls 005ed170 FUN_005ed170
 * calls 005ef130 FUN_005ef130
 * calls 005ee7d0 FUN_005ee7d0
 */

void FUN_005ef130(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_005ef1b3:
      if (1 < iVar1) {
        FUN_005ed2e0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_005eb1f0(param_1,param_2,0,0);
        }
        FUN_005ee7d0(param_1,param_2);
        return;
      }
      goto LAB_005ef1b3;
    }
    FUN_005ed170(&local_8,param_1,param_2);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      FUN_005ef130(param_1,local_8,param_3);
      param_1 = iVar1;
    }
    else {
      FUN_005ef130(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

