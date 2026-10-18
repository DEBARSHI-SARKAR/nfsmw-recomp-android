/* speed.exe 00675150 FUN_00675150; analysis pseudocode, not buildable source.
 * calls 00674740 FUN_00674740
 */

void __thiscall FUN_00675150(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((uint)param_1[2] <= (uint)param_1[3]) {
    uVar2 = (**(code **)(*param_1 + 0xc))(param_1[3] + 1);
    FUN_00674740(uVar2);
  }
  puVar1 = (undefined4 *)(param_1[1] + param_1[3] * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  param_1[3] = param_1[3] + 1;
  return;
}

