/* speed.exe 006540b0 FUN_006540b0; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006540b0(undefined4 param_1)

{
  float10 extraout_ST0;
  
  if ((DAT_008f8318 == 0) && (DAT_008f8318 = 1, DAT_00925970 != _DAT_00890968)) {
    _DAT_0092596c = FUN_007c4b80(param_1);
    DAT_008f830c = DAT_008f8310 + _DAT_0092596c;
    _DAT_00925974 = (float)(extraout_ST0 - (float10)_DAT_0092596c * (float10)_DAT_008970f0);
    DAT_008f8310 = DAT_008f830c;
    FUN_006e8de0();
    DAT_00925ae8 = FUN_007c4b80();
    DAT_008f8314 = DAT_008f8314 + 1;
    DAT_008f8308 = (float)DAT_00925ae8 * _DAT_00890984;
    DAT_00925970 = 0.0;
  }
  return;
}

