/* speed.exe 0070feb0 FUN_0070feb0; analysis pseudocode, not buildable source.
 * calls 0070c190 FUN_0070c190
 * calls 0070e250 FUN_0070e250
 * calls 0070bef0 FUN_0070bef0
 * calls 0070f110 FUN_0070f110
 * calls 0070feb0 FUN_0070feb0
 */

void FUN_0070feb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_0070ff33:
      if (1 < iVar1) {
        FUN_0070e250(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_0070c190(param_1,param_2,0,0);
        }
        FUN_0070f110(param_1,param_2);
        return;
      }
      goto LAB_0070ff33;
    }
    FUN_0070bef0(&local_8,param_1,param_2);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      FUN_0070feb0(param_1,local_8,param_3);
      param_1 = iVar1;
    }
    else {
      FUN_0070feb0(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

