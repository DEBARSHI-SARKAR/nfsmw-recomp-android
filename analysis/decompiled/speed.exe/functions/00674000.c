/* speed.exe 00674000 FUN_00674000; analysis pseudocode, not buildable source.
 * calls 00674060 FUN_00674060
 */

void __thiscall FUN_00674000(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((uint)param_1[2] <= (uint)param_1[3]) {
    uVar2 = (**(code **)(*param_1 + 0xc))(param_1[3] + 1);
    FUN_00674060(uVar2);
  }
  puVar1 = (undefined4 *)(param_1[1] + param_1[3] * 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    puVar1[5] = param_2[5];
  }
  param_1[3] = param_1[3] + 1;
  return;
}

