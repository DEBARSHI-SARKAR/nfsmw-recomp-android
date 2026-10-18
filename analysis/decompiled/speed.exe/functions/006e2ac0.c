/* speed.exe 006e2ac0 FUN_006e2ac0; analysis pseudocode, not buildable source.
 * calls 006e2320 FUN_006e2320
 * calls 006ddb60 FUN_006ddb60
 * calls 006e2560 FUN_006e2560
 * calls 006e29a0 FUN_006e29a0
 * calls 006e2ac0 FUN_006e2ac0
 */

void FUN_006e2ac0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_006e2b43:
      if (1 < iVar1) {
        FUN_006e2560(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          FUN_006ddb60(param_1,param_2,0,0);
        }
        FUN_006e29a0(param_1,param_2);
        return;
      }
      goto LAB_006e2b43;
    }
    FUN_006e2320(&local_8,param_1,param_2);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_8 - param_1 & 0xfffffff8U) < (int)(param_2 - local_4 & 0xfffffff8U)) {
      FUN_006e2ac0(param_1,local_8,param_3);
      param_1 = iVar1;
    }
    else {
      FUN_006e2ac0(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

