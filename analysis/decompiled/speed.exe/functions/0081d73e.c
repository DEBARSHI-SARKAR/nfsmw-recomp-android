/* speed.exe 0081d73e FUN_0081d73e; analysis pseudocode, not buildable source.
 * calls 008621ee FUN_008621ee
 * calls 007ec4d2 FUN_007ec4d2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0081d73e(void)

{
  _DAT_009c20e0 = &DAT_0081d73d;
  if (DAT_009c1c3c == 0) {
    FUN_007ec4d2(&LAB_0081d738,0,1,0);
    DAT_009c1c3c = 1;
  }
  FUN_008621ee(&LAB_00822356);
  return 0;
}

