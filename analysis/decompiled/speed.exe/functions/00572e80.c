/* speed.exe 00572e80 FUN_00572e80; analysis pseudocode, not buildable source.
 * calls 00516c50 FUN_00516c50
 */

void FUN_00572e80(byte param_1,char param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = 1 << (param_1 & 0x1f);
  if (param_2 == '\0') {
    uVar1 = DAT_0091d264 & (uVar1 ^ 0xff);
  }
  else {
    uVar1 = DAT_0091d264 | uVar1;
  }
  bVar2 = uVar1 != DAT_0091d264;
  DAT_0091d264 = uVar1;
  if (bVar2) {
    FUN_00516c50(0x9757a0c0,0,0xff);
  }
  return;
}

