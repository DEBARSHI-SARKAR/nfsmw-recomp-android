/* speed.exe 00504c50 FUN_00504c50; analysis pseudocode, not buildable source.
 * calls 0073d320 FUN_0073d320
 * calls 0072aac0 FUN_0072aac0
 * calls 0072cc50 FUN_0072cc50
 * calls 00725580 FUN_00725580
 * calls 00503830 FUN_00503830
 * calls 00502640 FUN_00502640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00504c50(undefined4 param_1)

{
  float fVar1;
  bool bVar2;
  
  FUN_0072cc50(param_1);
  FUN_00503830();
  FUN_0073d320();
  FUN_0072aac0(&DAT_00919650);
  FUN_0072aac0(&DAT_009196c0);
  FUN_00725580(&DAT_00919650);
  FUN_00725580(&DAT_009196c0);
  FUN_00502640();
  _DAT_00915998 = DAT_0091969c;
  _DAT_00915110 = DAT_009196a0;
  bVar2 = DAT_009196a4 < 0;
  fVar1 = (float)DAT_009196a4;
  _DAT_00915f70 = DAT_009196a4;
  DAT_0091969c = 0;
  DAT_009196a0 = 0;
  DAT_009196a4 = 0;
  if (bVar2) {
    fVar1 = fVar1 + _DAT_00891214;
  }
  _DAT_008f2260 = _DAT_0089096c - fVar1 * _DAT_00895074;
  if (_DAT_008f2260 < _DAT_008910f0) {
    _DAT_008f2260 = 0.25;
  }
  return;
}

