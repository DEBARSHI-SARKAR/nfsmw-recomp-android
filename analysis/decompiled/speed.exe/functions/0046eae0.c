/* speed.exe 0046eae0 FUN_0046eae0; analysis pseudocode, not buildable source.
 * calls 005169b0 FUN_005169b0
 * calls 0046e9c0 FUN_0046e9c0
 * calls 00516b50 FUN_00516b50
 */

void FUN_0046eae0(void)

{
  char cVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  
  if ((DAT_009110a1 & 0x7f) != 0) {
    uVar2 = FUN_0046e9c0(CONCAT31((int3)((uint)in_EAX >> 8),DAT_009110a1) & 0xffffff7f);
    cVar1 = FUN_00516b50(uVar2);
    if (cVar1 != '\0') {
      uVar2 = FUN_0046e9c0(DAT_009110a1 & 0x7f);
      FUN_005169b0(uVar2);
      DAT_009110a1 = 0;
      return;
    }
    DAT_009110a1 = DAT_009110a1 | 0x80;
  }
  return;
}

