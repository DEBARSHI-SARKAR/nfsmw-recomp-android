/* speed.exe 0070fd80 FUN_0070fd80; analysis pseudocode, not buildable source.
 * calls 0070f070 FUN_0070f070
 * calls 0070bc70 FUN_0070bc70
 * calls 0070fd80 FUN_0070fd80
 * calls 0070e1a0 FUN_0070e1a0
 * calls 0070c0f0 FUN_0070c0f0
 */

void FUN_0070fd80(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 / 0x2c;
    if (iVar1 < 0x21) {
LAB_0070fe50:
      if (1 < iVar1) {
        FUN_0070e1a0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (param_2 - param_1) / 0x2c) {
          FUN_0070c0f0(param_1,param_2,0,0);
        }
        FUN_0070f070(param_1,param_2);
        return;
      }
      goto LAB_0070fe50;
    }
    FUN_0070bc70(&local_8,param_1,param_2);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_8 - param_1) / 0x2c < (param_2 - local_4) / 0x2c) {
      FUN_0070fd80(param_1,local_8,param_3);
      param_1 = iVar1;
    }
    else {
      FUN_0070fd80(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

