/* speed.exe 005ea040 FUN_005ea040; analysis pseudocode, not buildable source.
 * calls 005e77b0 FUN_005e77b0
 * calls 0077ce50 FUN_0077ce50
 * calls 005e7830 FUN_005e7830
 * calls 005e77f0 FUN_005e77f0
 * calls 005e76f0 FUN_005e76f0
 * calls 005e7730 FUN_005e7730
 * calls 005e7770 FUN_005e7770
 */

void __fastcall FUN_005ea040(undefined4 *param_1)

{
  FUN_005e76f0();
  FUN_005e7730();
  FUN_005e7770();
  FUN_005e77b0();
  FUN_005e77f0();
  FUN_005e7830();
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_009b3904 != 0) {
    FUN_0077ce50();
    return;
  }
  return;
}

