/* speed.exe 00506af0 FUN_00506af0; analysis pseudocode, not buildable source.
 * calls 005018f0 FUN_005018f0
 * calls 005014c0 FUN_005014c0
 */

void __thiscall FUN_00506af0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  param_1[2] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_2 != 0) {
    *DAT_00917404 = param_1;
    puVar1 = param_1;
    param_1[1] = DAT_00917404;
    DAT_00917404 = puVar1;
    *param_1 = &DAT_00917400;
  }
  if (param_1[2] != 0) {
    uVar2 = FUN_005018f0(param_1[2],0);
    FUN_005014c0(uVar2);
  }
  return;
}

