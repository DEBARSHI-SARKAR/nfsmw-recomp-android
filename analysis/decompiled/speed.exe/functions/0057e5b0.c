/* speed.exe 0057e5b0 FUN_0057e5b0; analysis pseudocode, not buildable source.
 * calls 00525940 FUN_00525940
 * calls 005257f0 FUN_005257f0
 * calls 00516b90 FUN_00516b90
 * calls 00460ca0 FUN_00460ca0
 */

void FUN_0057e5b0(undefined4 param_1,int param_2)

{
  char cVar1;
  
  DAT_0091cf68 = 1;
  DAT_0091cf69 = 0;
  FUN_00460ca0(s_unknown_008f3f80,param_1,0x40);
  if (param_2 != 0) {
    DAT_0091cf69 = 1;
    FUN_00460ca0(s_unknown_008f3fc0,param_2,0x40);
  }
  cVar1 = FUN_00516b90(PTR_DAT_008f4318);
  if (cVar1 != '\0') {
    FUN_00525940(PTR_s_InGameAnyTutorial_fng_008f4000,0,0,0);
    return;
  }
  FUN_005257f0(PTR_s_InGameAnyTutorial_fng_008f4000,0,0,0);
  return;
}

