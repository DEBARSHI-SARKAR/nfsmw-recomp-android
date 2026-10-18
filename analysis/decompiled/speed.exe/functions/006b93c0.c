/* speed.exe 006b93c0 FUN_006b93c0; analysis pseudocode, not buildable source.
 * calls 006a61c0 FUN_006a61c0
 * calls 0048c910 FUN_0048c910
 * calls 006b7900 FUN_006b7900
 * calls 006b4fa0 FUN_006b4fa0
 */

void FUN_006b93c0(undefined4 param_1)

{
  int *piVar1;
  int local_8;
  int local_4;
  
  local_4 = 0;
  local_8 = 0;
  if (DAT_009382ec == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(DAT_009382ec + -0x70);
  }
  while (piVar1 != (int *)&DAT_0093827c) {
    (**(code **)(*piVar1 + 0x2c))(param_1);
    FUN_006b7900(&local_4,&local_8);
    if (piVar1[0x1c] == 0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)(piVar1[0x1c] + -0x70);
    }
  }
  FUN_006a61c0(DAT_009383a0);
  FUN_006a61c0(DAT_009383a4);
  FUN_006b4fa0(local_4 < local_8,&LAB_006998c0,param_1);
  if (DAT_009382ec == 0) goto LAB_006b9460;
  piVar1 = (int *)(DAT_009382ec + -0x70);
  while (piVar1 != (int *)&DAT_0093827c) {
    (**(code **)(*piVar1 + 0x30))(param_1);
    if (piVar1[0x1c] == 0) {
LAB_006b9460:
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)(piVar1[0x1c] + -0x70);
    }
  }
  FUN_0048c910();
  return;
}

