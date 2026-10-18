/* speed.exe 007bfbd0 FUN_007bfbd0; analysis pseudocode, not buildable source.
 * calls 007bc730 FUN_007bc730
 * calls 007bca60 FUN_007bca60
 * calls 007bcbb0 FUN_007bcbb0
 * calls 007bc3c0 FUN_007bc3c0
 * calls 007bbe40 FUN_007bbe40
 * calls 007bbfd0 FUN_007bbfd0
 * calls 007bc210 FUN_007bc210
 */

void __fastcall FUN_007bfbd0(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[0x54];
  if (uVar1 < 0x507) {
    if (uVar1 < 0x501) {
      if (uVar1 == 0x103) {
        FUN_007bc3c0();
      }
      else if (uVar1 == 0x302) {
        FUN_007bc730();
      }
      else if (uVar1 == 0x305) {
        FUN_007bca60();
      }
    }
    else {
      FUN_007bcbb0();
    }
  }
  else if (uVar1 == 0x801) {
    FUN_007bbe40();
  }
  else if (uVar1 == 0x802) {
    FUN_007bbfd0();
  }
  else if (uVar1 == 0x803) {
    FUN_007bc210();
  }
                    /* WARNING: Could not recover jumptable at 0x007bfc47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}

