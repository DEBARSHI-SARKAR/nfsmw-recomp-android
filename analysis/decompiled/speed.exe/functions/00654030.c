/* speed.exe 00654030 FUN_00654030; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00654030(void)

{
  FUN_006e8de0();
  DAT_00925ae8 = FUN_007c4b80();
  DAT_008f830c = 1;
  DAT_008f8310 = 1;
  DAT_008f8308 = (float)DAT_00925ae8 * _DAT_00890984;
  _DAT_0092596c = 0;
  DAT_00925970 = 0;
  _DAT_00925974 = 0;
  DAT_008f8314 = 0;
  return;
}

