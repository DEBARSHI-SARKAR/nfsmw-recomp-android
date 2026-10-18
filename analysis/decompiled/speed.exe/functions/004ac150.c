/* speed.exe 004ac150 FUN_004ac150; analysis pseudocode, not buildable source.
 * calls 004519d0 FUN_004519d0
 * calls 004522f0 FUN_004522f0
 */

void __fastcall FUN_004ac150(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0xffffffff;
  uVar2 = FUN_004522f0(&DAT_00890978);
  uVar1 = FUN_004519d0(&DAT_00890978);
  *(undefined8 *)(param_1 + 2) = uVar2;
  param_1[5] = &DAT_00890978;
  param_1[4] = uVar1;
  param_1[6] = 0;
  return;
}

