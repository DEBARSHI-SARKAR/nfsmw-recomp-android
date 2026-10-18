/* speed.exe 00832e1f FUN_00832e1f; analysis pseudocode, not buildable source.
 * calls 00831df4 FUN_00831df4
 * calls 00831e63 FUN_00831e63
 * calls 00832d79 FUN_00832d79
 * calls 0083267a FUN_0083267a
 * calls 00834576 FUN_00834576
 * calls 00834846 FUN_00834846
 * calls 0083403a FUN_0083403a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00832e1f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  s_oSPCHAUTHOR__Tlbuild__Tuesday_05_0090d287[1] = 'S';
  if ((DAT_009c2bf8 != 0) && (DAT_009c2bfc != 0)) {
    DAT_009c2be0 = param_1;
    DAT_009c2be4 = 0;
    DAT_009c2be8 = 0;
    DAT_009c2bec = 0;
    DAT_009c2bf0 = 0;
    DAT_009c2bf4 = param_2;
    DAT_009c29f4 = param_3;
    _DAT_009c2c20 = FUN_00832289;
    FUN_00834846(param_2);
    FUN_0083403a();
    FUN_00834576(0);
    puVar2 = &DAT_009c29f8;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    FUN_00831df4();
    FUN_00832d79();
    FUN_0083267a();
    FUN_00831e63();
    DAT_009c2c0c = 0x1789a34;
    return 1;
  }
  return 0;
}

