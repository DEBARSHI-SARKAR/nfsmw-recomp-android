/* speed.exe 004652a0 FUN_004652a0; analysis pseudocode, not buildable source.
 * calls 00464d80 FUN_00464d80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004652a0(void)

{
  if (DAT_0090e688 == 0) {
    DAT_0090de49 = 0;
    _DAT_0090de4c = 0xffffffff;
    DAT_0090df10 = &DAT_0090dff0;
    FUN_00464d80(0,0,"Main Pool");
    DAT_0090e688 = 1;
  }
  return;
}

