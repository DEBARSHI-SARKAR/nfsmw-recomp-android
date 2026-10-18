/* speed.exe 007b18f0 FUN_007b18f0; analysis pseudocode, not buildable source.
 * calls 00525a00 FUN_00525a00
 * calls 00516c90 FUN_00516c90
 * calls 00514cc0 FUN_00514cc0
 * calls 00524920 FUN_00524920
 * calls 00524850 FUN_00524850
 * calls 007b18a0 FUN_007b18a0
 */

void __fastcall FUN_007b18f0(int *param_1)

{
  undefined4 uVar1;
  
  if (10 < param_1[0x6f]) {
    DAT_009b9eb0 = 1;
    FUN_00525a00();
    FUN_00524920(param_1[4],0xdee8632b,0x5079c8f8,1);
    uVar1 = FUN_00524850(param_1[4],0xdee8632b);
    FUN_00514cc0(uVar1);
    (**(code **)(*param_1 + 0xc))();
    FUN_00516c90(0x8cb81f09,param_1[4],0);
    return;
  }
  FUN_007b18a0();
  return;
}

