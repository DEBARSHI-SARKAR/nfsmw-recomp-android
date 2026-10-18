/* speed.exe 0064a1e0 FUN_0064a1e0; analysis pseudocode, not buildable source.
 * calls 0056bb20 FUN_0056bb20
 * calls 006cbb40 FUN_006cbb40
 */

undefined * FUN_0064a1e0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_006cbb40();
  if (iVar1 == 0) {
    return &DAT_008a88c4;
  }
  if ((((iVar1 == 1) || (iVar1 == 5)) || (iVar1 == 6)) ||
     (((iVar1 == 7 || (iVar1 == 8)) || (iVar1 == 9)))) {
    uVar2 = FUN_0056bb20();
    switch(uVar2) {
    case 0:
      goto switchD_0064a23b_caseD_0;
    case 1:
      return &DAT_008a88b4;
    case 2:
      return &DAT_008a88b0;
    case 3:
      return &DAT_008a88ac;
    case 4:
      return &DAT_008a88a8;
    case 5:
      return &DAT_008a88a4;
    case 6:
      return &DAT_008a88a0;
    case 7:
      return &DAT_008a889c;
    default:
      return (undefined *)0x0;
    case 0xc:
      return &DAT_008a8898;
    case 0xd:
      return &DAT_008a8894;
    }
  }
  if (iVar1 == 2) {
    return &DAT_008a88c0;
  }
  if (iVar1 != 3) {
    if (iVar1 == 0xc) {
switchD_0064a23b_caseD_0:
      return &DAT_008a88b8;
    }
    return &DAT_008a88b8;
  }
  return &DAT_008a88bc;
}

