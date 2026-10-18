/* speed.exe 0056dbe0 FUN_0056dbe0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0056dbe0(int param_1,int param_2)

{
  if (10 < param_2) {
    return param_1 + 0x1c + *(int *)(param_1 + 0x18) * 0x18;
  }
  return param_1 + 0x1c + param_2 * 0x18;
}

