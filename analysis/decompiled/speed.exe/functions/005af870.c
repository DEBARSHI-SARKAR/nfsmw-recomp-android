/* speed.exe 005af870 FUN_005af870; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005af870(int param_1,char param_2)

{
  if (param_2 != '\0') {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xfffffffb;
    return;
  }
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 4;
  return;
}

