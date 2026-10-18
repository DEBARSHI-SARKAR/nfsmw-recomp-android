/* speed.exe 005b35a0 FUN_005b35a0; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_005b35a0(int param_1,uint param_2)

{
  if (param_2 < 3) {
    return *(undefined4 *)(param_1 + 0x60 + param_2 * 4);
  }
  return 0xffffffff;
}

