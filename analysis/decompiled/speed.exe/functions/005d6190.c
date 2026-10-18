/* speed.exe 005d6190 FUN_005d6190; analysis pseudocode, not buildable source.
 * calls 005d6190 FUN_005d6190
 * calls 005d5e90 FUN_005d5e90
 * calls 005d5660 FUN_005d5660
 * calls 005d5830 FUN_005d5830
 * calls 005d5080 FUN_005d5080
 */

void FUN_005d6190(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_005d6213:
      if (1 < iVar1) {
        FUN_005d5830(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_005d5080(param_1,param_2,0,0);
        }
        FUN_005d5e90(param_1,param_2);
        return;
      }
      goto LAB_005d6213;
    }
    FUN_005d5660(&local_8,param_1,param_2);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      FUN_005d6190(param_1,local_8,param_3);
      param_1 = iVar1;
    }
    else {
      FUN_005d6190(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

