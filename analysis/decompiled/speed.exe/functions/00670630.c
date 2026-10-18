/* speed.exe 00670630 FUN_00670630; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __fastcall FUN_00670630(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x58))();
  if (iVar1 == 0) {
    if (DAT_00926168 != '\0') {
      if ((_DAT_0092c710 & 1) == 0) {
        _DAT_0092c710 = _DAT_0092c710 | 1;
      }
      _DAT_0092c6f8 = 0;
      _DAT_0092c6fc = 0;
      _DAT_0092c700 = 0;
      _DAT_0092c6f4 = 0;
      _DAT_0092c704 = DAT_00926164;
      _DAT_0092c708 = 0;
      _DAT_0092c70c = 0;
      return &DAT_0092c6f4;
    }
    iVar1 = param_1[0xe];
    if (iVar1 != 0) {
      return (undefined *)(*(int *)(iVar1 + 0x18c) * 0x1c + 0x138 + iVar1);
    }
  }
  return (undefined *)0x0;
}

