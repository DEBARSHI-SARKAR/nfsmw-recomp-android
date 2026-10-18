/* speed.exe 004527b0 FUN_004527b0; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_004527b0(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10 + param_2 * 0x14);
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 0x2c) + 8 + param_2 * 0x10);
  if (uVar1 < (uint)(*(int **)(param_1 + 4))[2]) {
    return *(undefined4 *)(**(int **)(param_1 + 4) + uVar1 * 8);
  }
  return 0;
}

