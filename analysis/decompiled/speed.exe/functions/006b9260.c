/* speed.exe 006b9260 FUN_006b9260; analysis pseudocode, not buildable source.
 * calls 006b50e0 FUN_006b50e0
 * calls 006b9260 FUN_006b9260
 * calls 006b1770 FUN_006b1770
 * calls 006b54b0 FUN_006b54b0
 * calls 006b7570 FUN_006b7570
 */

void FUN_006b9260(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 / 0x30;
    if (iVar1 < 0x21) {
LAB_006b9330:
      if (1 < iVar1) {
        FUN_006b54b0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (param_2 - param_1) / 0x30) {
          FUN_006b1770(param_1,param_2,0,0);
        }
        FUN_006b7570(param_1,param_2);
        return;
      }
      goto LAB_006b9330;
    }
    FUN_006b50e0(&local_8,param_1,param_2);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_8 - param_1) / 0x30 < (param_2 - local_4) / 0x30) {
      FUN_006b9260(param_1,local_8,param_3);
      param_1 = iVar1;
    }
    else {
      FUN_006b9260(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

