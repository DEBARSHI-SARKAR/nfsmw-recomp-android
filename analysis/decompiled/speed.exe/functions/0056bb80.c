/* speed.exe 0056bb80 FUN_0056bb80; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_0056bb80(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_0091cf80 == 0) {
    return 0;
  }
  uVar4 = 0;
  uVar3 = DAT_0091cf78 - 1;
  uVar2 = uVar3 >> 1;
  uVar1 = *(uint *)(DAT_0091cf80 + uVar2 * 8);
  while (uVar1 != param_2) {
    if (uVar3 - uVar4 < 3) {
      if (*(uint *)(DAT_0091cf80 + uVar4 * 8) == param_2) {
        return *(undefined4 *)(DAT_0091cf80 + 4 + uVar4 * 8);
      }
      if (uVar1 == param_2) break;
      if (*(uint *)(DAT_0091cf80 + uVar3 * 8) == param_2) {
        return *(undefined4 *)(DAT_0091cf80 + 4 + uVar3 * 8);
      }
    }
    if (uVar2 == uVar4) {
      return 0;
    }
    if (param_2 < uVar1) {
      uVar3 = uVar2;
    }
    if (uVar1 < param_2) {
      uVar4 = uVar2;
    }
    uVar2 = uVar3 + uVar4 >> 1;
    uVar1 = *(uint *)(DAT_0091cf80 + uVar2 * 8);
  }
  return *(undefined4 *)(DAT_0091cf80 + 4 + uVar2 * 8);
}

