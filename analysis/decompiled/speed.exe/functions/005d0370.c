/* speed.exe 005d0370 FUN_005d0370; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __thiscall FUN_005d0370(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  
  if (0x400 < param_3) {
    FUN_004655f0(param_2);
    return;
  }
  uVar1 = param_3 - 1 >> 4;
  *param_2 = *(undefined4 *)(param_1 + uVar1 * 4);
  *(undefined4 **)(param_1 + uVar1 * 4) = param_2;
  return;
}

