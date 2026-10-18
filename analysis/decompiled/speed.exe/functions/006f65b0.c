/* speed.exe 006f65b0 FUN_006f65b0; analysis pseudocode, not buildable source.
 * calls 006efa70 FUN_006efa70
 */

void __thiscall FUN_006f65b0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(uint *)(param_1 + 0x47d8) <= *(uint *)(param_1 + 0x47dc)) {
    uVar2 = (**(code **)(*(int *)(param_1 + 0x47d0) + 0xc))(*(uint *)(param_1 + 0x47dc) + 1);
    FUN_006efa70(uVar2);
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x47d4) + *(int *)(param_1 + 0x47dc) * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = 1;
  }
  *(int *)(param_1 + 0x47dc) = *(int *)(param_1 + 0x47dc) + 1;
  *(int *)(param_1 + 0x8fa0) = *(int *)(param_1 + 0x8fa0) + 1;
  return;
}

