/* speed.exe 0072bf00 FUN_0072bf00; analysis pseudocode, not buildable source.
 * calls 00728730 FUN_00728730
 */

undefined4 __thiscall FUN_0072bf00(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 0x34110) {
    FUN_00728730();
    *param_1 = 0;
    param_1[1] = 0;
    return 1;
  }
  if (iVar1 == 0x34113) {
    param_1[2] = 0;
    param_1[3] = 0;
    return 1;
  }
  if (iVar1 == 0x34111) {
    param_1[4] = 0;
    return 1;
  }
  if (iVar1 == 0x34112) {
    param_1[6] = 0;
    param_1[5] = 0;
    return 1;
  }
  return 0;
}

