/* speed.exe 00820ccf FUN_00820ccf; analysis pseudocode, not buildable source.
 * calls 00820c64 FUN_00820c64
 * calls 00822050 FUN_00822050
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 007c5df0 _atexit
 * calls 00820762 FUN_00820762
 * calls 0081e9e7 FUN_0081e9e7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00820ccf(undefined4 param_1)

{
  int iVar1;
  
  FUN_0081bccb();
  DAT_009c2014 = FUN_0081e9e7(DAT_009c218c * 0x88);
  FUN_00822050(DAT_009c2014,DAT_009c218c * 0x88);
  FUN_0081bcd9();
  if (DAT_009c204f == -1) {
    _DAT_0090bf3c = _DAT_0090bf3c - _DAT_00890bf8;
  }
  else if (DAT_009c204f == '\x01') {
    _DAT_0090bf3c = _DAT_0090bf3c + _DAT_00894b64;
  }
  else if (DAT_009c204f == '\x02') {
    _DAT_0090bf3c = _DAT_0090bf3c + _DAT_00890dd0;
  }
  if (DAT_009c2012 == '\0') {
    _atexit((_func_4879 *)&LAB_00822356);
    DAT_009c2012 = '\x01';
  }
  iVar1 = FUN_00820762(param_1,1);
  if (-1 < iVar1) {
    FUN_00820c64();
  }
  return iVar1;
}

