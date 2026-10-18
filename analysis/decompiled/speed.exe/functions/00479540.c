/* speed.exe 00479540 FUN_00479540; analysis pseudocode, not buildable source.
 * calls 00478db0 FUN_00478db0
 */

void __fastcall FUN_00479540(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((uint)param_1[2] <= (uint)param_1[3]) {
    uVar2 = (**(code **)(*param_1 + 0xc))(param_1[3] + 1);
    FUN_00478db0(uVar2);
  }
  puVar1 = (undefined4 *)(param_1[1] + param_1[3] * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  param_1[3] = param_1[3] + 1;
  return;
}

