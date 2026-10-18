/* speed.exe 00763840 FUN_00763840; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00763840(int param_1,undefined4 param_2)

{
  if (*(uint *)(param_1 + 0x20) < 4) {
    *(undefined4 *)(param_1 + 0x24 + *(uint *)(param_1 + 0x20) * 4) = param_2;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return;
}

