/* speed.exe 008646a0 FUN_008646a0; analysis pseudocode, not buildable source.
 * calls 0084af40 FUN_0084af40
 * calls 0084af70 FUN_0084af70
 * calls 0084af90 FUN_0084af90
 */

undefined4 FUN_008646a0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = param_1[0x8e];
  if (iVar1 == 2) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      if (iVar1 == param_1[1]) {
        FUN_0084af70(iVar1);
        param_1[1] = 0;
      }
      else {
        FUN_0084af90(iVar1,2);
        FUN_0084af40(*param_1);
      }
      *param_1 = 0;
    }
    if ((param_2 != (int *)0x0) && (param_3 != (int *)0x0)) {
      *param_2 = param_1[4];
      *param_3 = param_1[5];
    }
    param_1[0x8e] = 0;
    return 1;
  }
  if ((iVar1 != 1) && (iVar1 != 4)) {
    return 0xffffffff;
  }
  return 0;
}

