/* speed.exe 00464050 FUN_00464050; analysis pseudocode, not buildable source.
 * calls 00463e10 FUN_00463e10
 */

undefined4 FUN_00464050(int param_1)

{
  undefined4 uVar1;
  
  if ((&DAT_0090df10)[param_1] != 0) {
    uVar1 = FUN_00463e10();
    return uVar1;
  }
  if ((&DAT_0090de50)[param_1 * 3] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00464074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((&DAT_0090de50)[param_1 * 3] + 0x18))();
    return uVar1;
  }
  return 0;
}

