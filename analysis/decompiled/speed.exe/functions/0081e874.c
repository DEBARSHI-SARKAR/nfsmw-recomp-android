/* speed.exe 0081e874 FUN_0081e874; analysis pseudocode, not buildable source.
 * calls 0081fed2 FUN_0081fed2
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081e6ae FUN_0081e6ae
 * calls 008205a2 FUN_008205a2
 * calls 00821a6e FUN_00821a6e
 * calls 00820ccf FUN_00820ccf
 * calls 0081e784 FUN_0081e784
 * calls 0081e9e7 FUN_0081e9e7
 * calls 00822050 FUN_00822050
 * calls 0081fb87 FUN_0081fb87
 * calls 0081e639 FUN_0081e639
 * calls 0081bccb FUN_0081bccb
 * calls 00821a5d FUN_00821a5d
 * calls 0081e98c FUN_0081e98c
 * calls 0081eb3d FUN_0081eb3d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0081e874(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  s_SNDAUTHOR__Adamchan__Tuesday_02__0090c690[0] = 'S';
  if (DAT_009c2188 != '\0') {
    return 0;
  }
  FUN_00822050(param_1,param_2);
  FUN_0081e98c(param_1,param_2);
  if (DAT_009c218c == 0) {
    iVar1 = FUN_0081e639(&DAT_009c2020);
    if (iVar1 < 0) {
      return iVar1;
    }
    FUN_0081e6ae(&DAT_009c2020);
  }
  FUN_0081eb3d(DAT_009c2040);
  FUN_00821a5d();
  DAT_009c2188 = 1;
  FUN_0081bccb();
  FUN_0081e784();
  DAT_009c21f8 = FUN_0081e9e7((uint)DAT_009c2044 << 3);
  FUN_0081bcd9();
  _DAT_0090bd14 = 0x3f800000;
  DAT_009c2190 = 0;
  DAT_009c218e = 0;
  DAT_009c218a = 0;
  DAT_009c218b = 0;
  iVar1 = FUN_00820ccf(0);
  if (iVar1 < 0) {
    FUN_008205a2(0);
    FUN_00821a6e();
    DAT_009c2188 = 0;
  }
  else {
    DAT_009c1fd8 = DAT_009c2060 + DAT_009c205f;
    FUN_0081fed2();
    FUN_0081fb87();
    iVar1 = 0;
  }
  return iVar1;
}

