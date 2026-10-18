/* speed.exe 005ddb00 FUN_005ddb00; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_005ddb00(int param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0xb4)) {
    return *(undefined4 *)(param_1 + 0xb8 + param_2 * 4);
  }
  return 0;
}

