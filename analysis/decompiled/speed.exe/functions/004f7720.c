/* speed.exe 004f7720 FUN_004f7720; analysis pseudocode, not buildable source.
 * calls 004f4770 FUN_004f4770
 * calls 004f2630 FUN_004f2630
 * calls 004f7720 FUN_004f7720
 * calls 004f4940 FUN_004f4940
 * calls 004f50e0 FUN_004f50e0
 */

void FUN_004f7720(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_004f77b7:
      if (1 < iVar1) {
        FUN_004f4940(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_004f2630(param_1,param_2,param_4,0,0);
        }
        FUN_004f50e0(param_1,param_2,param_4);
        return;
      }
      goto LAB_004f77b7;
    }
    FUN_004f4770(&local_8,param_1,param_2,param_4);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffffcU) < (int)(param_2 - local_4 & 0xfffffffcU)) {
      FUN_004f7720(param_1,local_8,param_3,param_4);
      param_1 = iVar1;
    }
    else {
      FUN_004f7720(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

