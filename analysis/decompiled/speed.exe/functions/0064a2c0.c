/* speed.exe 0064a2c0 FUN_0064a2c0; analysis pseudocode, not buildable source.
 * calls 0056bb20 FUN_0056bb20
 * calls 006cbb40 FUN_006cbb40
 */

undefined1 * FUN_0064a2c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_006cbb40();
  if (iVar1 == 0) {
    return &DAT_008a88f8;
  }
  if ((((iVar1 == 1) || (iVar1 == 5)) || (iVar1 == 6)) ||
     (((iVar1 == 7 || (iVar1 == 8)) || (iVar1 == 9)))) {
    uVar2 = FUN_0056bb20();
    switch(uVar2) {
    case 0:
      return &DAT_008a88ec;
    case 1:
      return &DAT_008a88e8;
    case 2:
      return &DAT_008a88e4;
    case 3:
      return &DAT_008a88e0;
    case 4:
      return &DAT_008a88dc;
    case 5:
      return &DAT_008a88d8;
    case 6:
      return &DAT_008a88d4;
    case 7:
      return &DAT_008a88d0;
    default:
      return (undefined1 *)0x0;
    case 0xc:
      return &DAT_008a88cc;
    case 0xd:
      return &DAT_008a88c8;
    }
  }
  if (iVar1 == 2) {
    return &DAT_008a88f4;
  }
  if (iVar1 == 3) {
    return &DAT_008a8854;
  }
  return &DAT_008a88f0;
}

