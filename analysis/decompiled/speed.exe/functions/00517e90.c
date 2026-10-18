/* speed.exe 00517e90 FUN_00517e90; analysis pseudocode, not buildable source.
 * calls 00660270 FUN_00660270
 * calls 00660320 FUN_00660320
 */

void FUN_00517e90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  FUN_00660320(*param_1,9);
  uVar1 = FUN_00660270(param_1[1],0x10,9);
  param_1[1] = uVar1;
  uVar1 = FUN_00660270(param_1[2],0x20,9);
  param_1[2] = uVar1;
  uVar1 = FUN_00660270(param_1[3],0x20,9);
  param_1[3] = uVar1;
  uVar1 = FUN_00660270(param_1[4],0x20,9);
  param_1[4] = uVar1;
  uVar1 = FUN_00660270(param_1[6],0x20,9);
  param_1[6] = uVar1;
  uVar1 = FUN_00660270(param_1[5],0x20,9);
  param_1[5] = uVar1;
  FUN_00660320(param_1 + 7,9);
  FUN_00660320((int)param_1 + 0x1e,9);
  return;
}

