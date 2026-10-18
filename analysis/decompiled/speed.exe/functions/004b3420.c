/* speed.exe 004b3420 FUN_004b3420; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_004b3420(int param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    return *(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x40;
  }
  if (param_3 != 2) {
    return *(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x40;
  }
  if (param_2 == 0) {
    return param_1 + 0xd0;
  }
  return param_1 + 0xe0;
}

