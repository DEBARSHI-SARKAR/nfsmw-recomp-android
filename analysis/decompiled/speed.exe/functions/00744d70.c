/* speed.exe 00744d70 FUN_00744d70; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00744d70(int *param_1)

{
  if (1 < param_1[10]) {
                    /* WARNING: Could not recover jumptable at 0x00744d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c))();
    return;
  }
  return;
}

