/* speed.exe 00525d50 FUN_00525d50; analysis pseudocode, not buildable source.
 * calls 005257f0 FUN_005257f0
 * calls 00460ca0 FUN_00460ca0
 */

void FUN_00525d50(undefined4 param_1,int param_2)

{
  DAT_0091cb0c = 0;
  FUN_00460ca0(s_unknown_008f3790,param_1,0x40);
  if (param_2 != 0) {
    DAT_0091cb0c = 1;
    FUN_00460ca0(s_unknown_008f37d0,param_2,0x40);
  }
  FUN_005257f0(PTR_s_FEAnyTutorial_fng_008f3810,0,0,0);
  return;
}

