/* speed.exe 0044cc90 FUN_0044cc90; analysis pseudocode, not buildable source.
 * calls 00730bf0 FUN_00730bf0
 * calls 00447280 FUN_00447280
 * calls 0044ac30 FUN_0044ac30
 * calls 0075be90 FUN_0075be90
 * calls 004471c0 FUN_004471c0
 * calls 00723a00 FUN_00723a00
 * calls 007317a0 FUN_007317a0
 * calls 00465a70 FUN_00465a70
 * calls 0044a5d0 FUN_0044a5d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0044cc90(uint param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  if (DAT_0090da10 != '\0') {
    return 0;
  }
  iVar2 = FUN_0044ac30(param_1);
  if ((iVar2 != 0) || (DAT_0090d9e4 == (uint *)0x0)) {
    return 0;
  }
  uVar4 = 0;
  bVar1 = false;
  if (*DAT_0090d9e4 != 0) {
    puVar3 = DAT_0090d9e4 + 1;
    do {
      if (*puVar3 == param_1) {
        _DAT_0090db38 = *puVar3;
        DAT_0090db3c = puVar3[1];
        bVar1 = true;
        break;
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 2;
      bVar1 = false;
    } while (uVar4 < *DAT_0090d9e4);
  }
  if (!bVar1) {
    return 0;
  }
  iVar2 = FUN_00447280();
  if (3000000 < iVar2) {
    _DAT_0090da1c = 0;
    return 0;
  }
  if (DAT_008ec310 < iVar2) {
    FUN_007317a0();
    FUN_00730bf0(iVar2,1);
    _DAT_0090da1c = FUN_00723a00(iVar2,"NISMemory",0);
    DAT_0090da24 = 2;
    if (_DAT_0090da1c != 0) goto LAB_0044cdaa;
    FUN_0075be90(iVar2);
    _DAT_0090da1c = FUN_004471c0(iVar2,"NISMemory");
    DAT_0090da24 = 1;
  }
  else {
    DAT_0090da24 = 0;
    _DAT_0090da1c = FUN_00465a70(iVar2,0x2000);
  }
  if (_DAT_0090da1c == 0) {
    return 0;
  }
LAB_0044cdaa:
  DAT_0090da10 = 1;
  DAT_0090da14 = 0;
  DAT_0090da18 = 0;
  DAT_0090da20 = _DAT_0090da1c;
  FUN_0044a5d0();
  return 1;
}

