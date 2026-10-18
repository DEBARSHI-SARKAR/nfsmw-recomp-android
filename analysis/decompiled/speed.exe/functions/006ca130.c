/* speed.exe 006ca130 FUN_006ca130; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_006ca130(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    return *(undefined4 *)(param_1 + 0x4450 + param_2 * 4);
  }
  if (param_3 != 1) {
    if (param_3 != 2) {
      return 0;
    }
    return *(undefined4 *)(param_1 + 0x4458 + param_2 * 4);
  }
  return *(undefined4 *)(param_1 + 0x4448 + param_2 * 4);
}

