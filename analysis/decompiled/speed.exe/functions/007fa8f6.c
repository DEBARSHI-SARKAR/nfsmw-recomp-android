/* speed.exe 007fa8f6 FUN_007fa8f6; analysis pseudocode, not buildable source.
 * calls 007fa470 FUN_007fa470
 * calls 007fa455 FUN_007fa455
 * calls 007fa41e FUN_007fa41e
 * calls 007fa6d1 FUN_007fa6d1
 */

undefined4 __thiscall FUN_007fa8f6(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *local_8;
  
  local_8 = param_1;
  FUN_007fa455(&local_8);
  if (param_1[3] == 0) {
    param_2 = param_2 - param_1[7];
    if (param_2 < 3) {
      if (0 < param_2) {
        do {
          iVar1 = FUN_007fa41e();
          if (iVar1 == 0x4d414465) {
            FUN_007fa470(local_8);
            FUN_007fa455(&local_8);
          }
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
    }
    else {
      do {
        FUN_007fa470(local_8);
        FUN_007fa455(&local_8);
        iVar1 = FUN_007fa41e();
      } while (iVar1 != 0x4d41446b);
    }
  }
  if (local_8 == (int *)0x0) {
    if (param_1[6] != 0) {
      (**(code **)(*param_1 + 0x14))(param_1[6]);
      param_1[6] = 0;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_007fa6d1(local_8);
    FUN_007fa470(local_8);
  }
  return uVar2;
}

