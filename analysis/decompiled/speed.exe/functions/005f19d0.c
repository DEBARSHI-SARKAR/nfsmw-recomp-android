/* speed.exe 005f19d0 FUN_005f19d0; analysis pseudocode, not buildable source.
 * calls 005ede20 FUN_005ede20
 * calls 005eef00 FUN_005eef00
 * calls 00727240 FUN_00727240
 * calls 00460bf0 FUN_00460bf0
 */

void FUN_005f19d0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_0091e00c;
  if (DAT_0091e00c != 0) {
    FUN_005eef00(0xc);
    uVar2 = FUN_00460bf0("IconMarker");
    FUN_00727240(&LAB_005ebe70,uVar2);
    if (*(char *)(iVar1 + 0x118) != '\0') {
      FUN_005ede20();
      return;
    }
  }
  return;
}

