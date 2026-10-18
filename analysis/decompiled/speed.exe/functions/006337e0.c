/* speed.exe 006337e0 FUN_006337e0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_006337e0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((&DAT_008a569c)[uVar1] == param_1) {
      if (uVar1 == 0) {
        uVar1 = (*_DAT_008f66d4)(param_2,param_3,param_4,param_5,param_6);
        return uVar1;
      }
      break;
    }
    uVar1 = ((uint)(&DAT_008a569c)[uVar1] < param_1) + 1 + uVar1 * 2;
  } while (uVar1 == 0);
  return uVar1 & 0xffffff00;
}

