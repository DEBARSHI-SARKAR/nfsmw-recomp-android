/* speed.exe 0066fba0 FUN_0066fba0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0066fba0(int *param_1)

{
  if (*(char *)((int)param_1 + 0x2d) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0066fba9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}

