/* speed.exe 00633e70 FUN_00633e70; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_00633e70(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1[2];
  uVar2 = uVar1 / 0x32;
  uVar3 = uVar1 % 0x32;
  *param_1 = 0xf874af01;
  param_1[1] = 0;
  param_1[3] = 0;
  if (uVar3 != 0) {
    uVar5 = 0xf874af01;
    uVar4 = uVar3;
    do {
      uVar2 = uVar1 * uVar5;
      uVar5 = uVar2 & 0xffff;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *param_1 = uVar5;
    param_1[1] = uVar2;
    param_1[3] = uVar3;
  }
  return uVar2;
}

