/* speed.exe 0067a5e0 FUN_0067a5e0; analysis pseudocode, not buildable source.
 * calls 006749e0 FUN_006749e0
 */

void __thiscall FUN_0067a5e0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(uint *)(param_1 + 0x518) <= *(uint *)(param_1 + 0x51c)) {
    uVar2 = (**(code **)(*(int *)(param_1 + 0x510) + 0xc))(*(uint *)(param_1 + 0x51c) + 1);
    FUN_006749e0(uVar2);
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x514) + *(int *)(param_1 + 0x51c) * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = 1;
  }
  *(int *)(param_1 + 0x51c) = *(int *)(param_1 + 0x51c) + 1;
  *(int *)(param_1 + 0xa20) = *(int *)(param_1 + 0xa20) + 1;
  return;
}

