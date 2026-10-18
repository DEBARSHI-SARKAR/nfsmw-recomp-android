/* speed.exe 0070fc90 FUN_0070fc90; analysis pseudocode, not buildable source.
 * calls 0070fc90 FUN_0070fc90
 * calls 0070e0b0 FUN_0070e0b0
 * calls 0070bab0 FUN_0070bab0
 * calls 0070f020 FUN_0070f020
 * calls 0070c0b0 FUN_0070c0b0
 */

void FUN_0070fc90(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_0070fd27:
      if (1 < iVar1) {
        FUN_0070e0b0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_0070c0b0(param_1,param_2,param_4,0,0);
        }
        FUN_0070f020(param_1,param_2,param_4);
        return;
      }
      goto LAB_0070fd27;
    }
    FUN_0070bab0(&local_8,param_1,param_2,param_4);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      FUN_0070fc90(param_1,local_8,param_3,param_4);
      param_1 = iVar1;
    }
    else {
      FUN_0070fc90(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

