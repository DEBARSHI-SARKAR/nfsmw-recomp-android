/* speed.exe 00681170 FUN_00681170; analysis pseudocode, not buildable source.
 * calls 0067b2c0 FUN_0067b2c0
 * calls 00681170 FUN_00681170
 * calls 00680660 FUN_00680660
 * calls 0067e540 FUN_0067e540
 * calls 0067e710 FUN_0067e710
 */

void FUN_00681170(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_00681207:
      if (1 < iVar1) {
        FUN_0067e710(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_0067b2c0(param_1,param_2,param_4,0,0);
        }
        FUN_00680660(param_1,param_2,param_4);
        return;
      }
      goto LAB_00681207;
    }
    FUN_0067e540(&local_8,param_1,param_2,param_4);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      FUN_00681170(param_1,local_8,param_3,param_4);
      param_1 = iVar1;
    }
    else {
      FUN_00681170(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

