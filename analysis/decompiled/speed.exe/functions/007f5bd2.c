/* speed.exe 007f5bd2 FUN_007f5bd2; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007f5bd2(int param_1,int param_2,uint param_3)

{
  if (param_2 == 1) {
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | param_3;
  }
  else {
    if (param_2 == 2) {
      *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | param_3;
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & ~param_3;
      return;
    }
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & ~param_3;
  }
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & ~param_3;
  return;
}

