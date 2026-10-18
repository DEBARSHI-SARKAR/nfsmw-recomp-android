/* speed.exe 007283d0 FUN_007283d0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __thiscall FUN_007283d0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x844) + 0x28);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
  }
  FUN_004655f0(param_2);
  for (puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x844) + 0x28);
      puVar1 != (undefined4 *)(*(int *)(param_1 + 0x844) + 0x28); puVar1 = (undefined4 *)*puVar1) {
  }
  return;
}

