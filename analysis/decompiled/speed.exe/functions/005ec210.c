/* speed.exe 005ec210 FUN_005ec210; analysis pseudocode, not buildable source.
 * calls 005e77b0 FUN_005e77b0
 * calls 0077ce50 FUN_0077ce50
 * calls 005e7830 FUN_005e7830
 * calls 005e77f0 FUN_005e77f0
 * calls 005e76f0 FUN_005e76f0
 * calls 005e7730 FUN_005e7730
 * calls 00652b00 thunk_FUN_007c7250
 * calls 005e7770 FUN_005e7770
 */

undefined4 * __thiscall FUN_005ec210(undefined4 *param_1,byte param_2)

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
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

