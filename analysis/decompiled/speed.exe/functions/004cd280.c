/* speed.exe 004cd280 FUN_004cd280; analysis pseudocode, not buildable source.
 * calls 004c9a30 FUN_004c9a30
 * calls 004cccf0 FUN_004cccf0
 * calls 004c9bf0 FUN_004c9bf0
 * calls 004cd280 FUN_004cd280
 * calls 004cbb90 FUN_004cbb90
 */

void FUN_004cd280(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_004cd303:
      if (1 < iVar1) {
        FUN_004cbb90(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          FUN_004c9bf0(param_1,param_2,0,0);
        }
        FUN_004cccf0(param_1,param_2);
        return;
      }
      goto LAB_004cd303;
    }
    FUN_004c9a30(&local_8,param_1,param_2);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffff8U) < (int)(param_2 - local_4 & 0xfffffff8U)) {
      FUN_004cd280(param_1,local_8,param_3);
      param_1 = iVar1;
    }
    else {
      FUN_004cd280(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

