/* speed.exe 006f3960 FUN_006f3960; analysis pseudocode, not buildable source.
 * calls 006ef960 FUN_006ef960
 */

void __thiscall FUN_006f3960(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((uint)param_1[2] <= (uint)param_1[3]) {
    uVar2 = (**(code **)(*param_1 + 0xc))(param_1[3] + 1);
    FUN_006ef960(uVar2);
  }
  puVar1 = (undefined4 *)(param_1[1] + param_1[3] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  param_1[3] = param_1[3] + 1;
  return;
}

