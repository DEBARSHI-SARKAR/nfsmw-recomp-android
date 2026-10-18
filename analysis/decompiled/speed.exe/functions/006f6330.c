/* speed.exe 006f6330 FUN_006f6330; analysis pseudocode, not buildable source.
 * calls 006ef850 FUN_006ef850
 */

void __thiscall FUN_006f6330(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(uint *)(param_1 + 0x158) <= *(uint *)(param_1 + 0x15c)) {
    uVar2 = (**(code **)(*(int *)(param_1 + 0x150) + 0xc))(*(uint *)(param_1 + 0x15c) + 1);
    FUN_006ef850(uVar2);
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x154) + *(int *)(param_1 + 0x15c) * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = 1;
  }
  *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
  *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + 1;
  return;
}

