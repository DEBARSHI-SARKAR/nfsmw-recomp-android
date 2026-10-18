/* speed.exe 00700ed0 FUN_00700ed0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00700ed0(int *param_1)

{
  if ((4 < param_1[0xf]) && (param_1[0xf] < 8)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00700edf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14))();
  return;
}

