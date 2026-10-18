/* speed.exe 006bfab0 FUN_006bfab0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000ca GetClientRect
 * calls EXTERNAL:000000c9 GetWindowRect
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006bfab0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0093e82c;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (DAT_00982bf0 != 0) {
    GetWindowRect(DAT_00982bf4,(LPRECT)&DAT_0093daa4);
    GetClientRect(DAT_00982bf4,(LPRECT)&DAT_0093cad0);
    _DAT_0093e85c = 0;
  }
  _DAT_0093e84c = DAT_00982bf0;
  DAT_0093e82c = param_1;
  DAT_0093e830 = param_2;
  if (((DAT_0093d928 & 0x20) != 0) || (_DAT_0093e844 = 3, DAT_00982c04 != 0)) {
    _DAT_0093e844 = 1;
  }
  _DAT_0093e834 = DAT_008f8ff0;
  _DAT_0093e854 = (-(uint)(DAT_00982b54 != 0) & 5) + 0x4b;
  _DAT_0093e860 = (-(uint)(DAT_00901824 != 0) & 0x80000001) + 0x80000000;
  _DAT_0093e848 = DAT_00982bf4;
  _DAT_0093e850 = 1;
  _DAT_0093e858 = 0;
  DAT_00982be8 = param_2;
  DAT_00982be4 = param_1;
  if (0 < DAT_00901808) {
    _DAT_0093e83c = 1;
    _DAT_0093e840 = DAT_00901808;
    return;
  }
  _DAT_0093e83c = 0;
  _DAT_0093e840 = 0;
  return;
}

