/* speed.exe 008440a0 FUN_008440a0; analysis pseudocode, not buildable source.
 * calls 00855020 FUN_00855020
 * calls 0078af60 thunk_FUN_004655f0
 */

undefined4 * FUN_008440a0(undefined4 *param_1,undefined *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((int)param_2 < 0x989681) {
    if ((int)param_2 < 0x1341) {
      return (undefined4 *)0x0;
    }
  }
  else {
    param_2 = &DAT_00989680;
  }
  puVar2 = param_1;
  for (iVar1 = 0x490; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = param_1 + 0x490;
  param_1[1] = param_2 + -0x1240;
  param_1[0x48f] = 0;
  iVar1 = FUN_00855020(0x1000);
  param_1[0x489] = iVar1;
  if (iVar1 != 0) {
    return param_1;
  }
  if (param_1[0x42] != 0) {
    thunk_FUN_004655f0(param_1[0x42]);
  }
  return (undefined4 *)0x0;
}

