/* speed.exe 0056d7a0 FUN_0056d7a0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0056d7a0(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0xc) < param_2) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) - param_2;
  return;
}

