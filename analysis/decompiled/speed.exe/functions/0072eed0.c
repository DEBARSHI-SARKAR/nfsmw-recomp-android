/* speed.exe 0072eed0 FUN_0072eed0; analysis pseudocode, not buildable source.
 * calls 0072d3d0 FUN_0072d3d0
 * calls 0072e6e0 FUN_0072e6e0
 * calls 0072ecf0 FUN_0072ecf0
 * calls 0072eed0 FUN_0072eed0
 * calls 0072e570 FUN_0072e570
 */

void FUN_0072eed0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_0072ef53:
      if (1 < iVar1) {
        FUN_0072e6e0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_0072d3d0(param_1,param_2,0,0);
        }
        FUN_0072ecf0(param_1,param_2);
        return;
      }
      goto LAB_0072ef53;
    }
    FUN_0072e570(&local_8,param_1,param_2);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      FUN_0072eed0(param_1,local_8,param_3);
      param_1 = iVar1;
    }
    else {
      FUN_0072eed0(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

