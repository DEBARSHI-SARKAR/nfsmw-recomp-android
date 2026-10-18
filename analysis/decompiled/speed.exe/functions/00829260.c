/* speed.exe 00829260 FUN_00829260; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00829260(int param_1)

{
  (**(code **)(**(int **)(param_1 + 300) + 0xc))();
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x1f00000;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0xffff;
  return 0;
}

