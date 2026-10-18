/* speed.exe 004ea6f0 FUN_004ea6f0; analysis pseudocode, not buildable source.
 * calls 004ea9b0 FUN_004ea9b0
 */

void __thiscall FUN_004ea6f0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((uint)param_1[2] <= (uint)param_1[3]) {
    uVar2 = (**(code **)(*param_1 + 0xc))(param_1[3] + 1);
    FUN_004ea9b0(uVar2);
  }
  puVar1 = (undefined4 *)(param_1[1] + param_1[3] * 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
  }
  param_1[3] = param_1[3] + 1;
  return;
}

