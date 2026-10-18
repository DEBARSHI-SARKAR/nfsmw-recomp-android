/* speed.exe 00681020 FUN_00681020; analysis pseudocode, not buildable source.
 * calls 0067b110 FUN_0067b110
 * calls 006805c0 FUN_006805c0
 * calls 00681020 FUN_00681020
 * calls 0067de60 FUN_0067de60
 * calls 0067e430 FUN_0067e430
 */

void FUN_00681020(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 / 0x18;
    if (iVar1 < 0x21) {
LAB_00681100:
      if (1 < iVar1) {
        FUN_0067e430(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (param_2 - param_1) / 0x18) {
          FUN_0067b110(param_1,param_2,param_4,0,0);
        }
        FUN_006805c0(param_1,param_2,param_4);
        return;
      }
      goto LAB_00681100;
    }
    FUN_0067de60(&local_8,param_1,param_2,param_4);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_8 - param_1) / 0x18 < (param_2 - local_4) / 0x18) {
      FUN_00681020(param_1,local_8,param_3,param_4);
      param_1 = iVar1;
    }
    else {
      FUN_00681020(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

