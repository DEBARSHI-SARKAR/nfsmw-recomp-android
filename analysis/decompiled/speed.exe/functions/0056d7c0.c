/* speed.exe 0056d7c0 FUN_0056d7c0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0056d7c0(int param_1,char param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  if (param_2 != '\0') {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 10000;
  }
  return;
}

