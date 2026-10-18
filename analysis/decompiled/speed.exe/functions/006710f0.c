/* speed.exe 006710f0 FUN_006710f0; analysis pseudocode, not buildable source.
 * calls 005d06a0 FUN_005d06a0
 */

void __thiscall FUN_006710f0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_10 [16];
  
  FUN_005d06a0(param_2,local_10);
  (**(code **)(*(int *)(param_1 + -0x18) + 0x74))(local_10);
  puVar2 = (undefined4 *)(**(int **)(param_1 + 0x18) + 0x70);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}

