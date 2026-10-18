/* speed.exe 00608230 FUN_00608230; analysis pseudocode, not buildable source.
 * calls 006081c0 FUN_006081c0
 * calls 00608100 FUN_00608100
 * calls 00606930 FUN_00606930
 */

uint FUN_00608230(undefined4 param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 != *param_3) {
    uVar1 = FUN_00606930(param_1,param_2,param_3);
    return uVar1;
  }
  if (iVar2 == 3) {
    if ((float)param_2[1] < (float)param_3[1]) {
      return 1;
    }
    return 0;
  }
  if (iVar2 == 4) {
    iVar2 = FUN_006081c0();
    return (uint)(iVar2 < 0);
  }
  uVar1 = FUN_00608100(param_1,param_3);
  if (uVar1 == 0xffffffff) {
    uVar1 = FUN_00606930(param_1,param_2,param_3);
  }
  return uVar1;
}

