/* speed.exe 006697c0 FUN_006697c0; analysis pseudocode, not buildable source.
 * calls 006fc060 FUN_006fc060
 */

uint __thiscall FUN_006697c0(uint param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    return param_1 & 0xffffff00;
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    if (param_2 != 0) {
      uVar1 = FUN_006fc060(param_2);
      return uVar1;
    }
  }
  else if ((param_2 == 0) || (*(int *)(*(int *)(param_1 + 0x54) + 4) != *(int *)(param_2 + 4)))
  goto LAB_006697f9;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
LAB_006697f9:
  uVar1 = FUN_006fc060(param_2);
  return uVar1;
}

