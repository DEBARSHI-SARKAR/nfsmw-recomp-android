/* speed.exe 004eb7d0 FUN_004eb7d0; analysis pseudocode, not buildable source.
 * calls 004ea620 FUN_004ea620
 */

uint __thiscall FUN_004eb7d0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if (4 < param_3) {
    return 0;
  }
  uVar1 = *(int *)(*(int *)(param_1 + 0x10) + ((int)param_2 >> 1) * 4) >>
          (sbyte)((param_2 & 1) << 4);
  switch(param_3) {
  default:
    return uVar1 & 0x7fff;
  case 1:
    uVar1 = FUN_004ea620(uVar1 & 0xffff);
    return uVar1;
  case 3:
    break;
  }
  if (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0) {
    return 0;
  }
  return uVar1 & 0xffff;
}

