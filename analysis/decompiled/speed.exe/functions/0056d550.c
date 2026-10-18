/* speed.exe 0056d550 FUN_0056d550; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0056d550(int param_1,uint param_2,char param_3)

{
  if (param_3 != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | param_2;
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~param_2;
  return;
}

