/* speed.exe 0056f180 FUN_0056f180; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_0056f180(int param_1,uint param_2)

{
  param_2 = *(uint *)(param_1 + 0xc) & param_2;
  if (((param_2 & 0xffff0000) != 0) && ((param_2 & 0xffff) != 0)) {
    return 1;
  }
  return 0;
}

