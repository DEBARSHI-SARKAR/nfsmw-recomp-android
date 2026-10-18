/* speed.exe 004e4120 FUN_004e4120; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e4120(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0x7fff;
  }
  iVar1 = (int)((ulonglong)((longlong)param_1 * -0x1b37484b) >> 0x20);
  _DAT_00914420 = (iVar1 >> 6) - (iVar1 >> 0x1f);
  _DAT_00914424 = -(param_1 % 0x25a);
  _DAT_0091441c = *(int *)(&DAT_008f0d4c + (param_1 % 0x25a) * 4) >> ((byte)_DAT_00914420 & 0x1f);
  if (_DAT_0091441c < 0x32) {
    _DAT_0091441c = 0;
  }
  return _DAT_0091441c;
}

