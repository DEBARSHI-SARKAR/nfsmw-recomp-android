/* speed.exe 004061b0 FUN_004061b0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_004061b0(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 2)) {
    return *(int *)(param_1 + 0x10 + param_2 * 4) + 0x414;
  }
  return 0;
}

