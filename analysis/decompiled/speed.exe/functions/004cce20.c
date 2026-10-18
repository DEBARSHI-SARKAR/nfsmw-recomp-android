/* speed.exe 004cce20 FUN_004cce20; analysis pseudocode, not buildable source.
 * calls 0045f2e0 FUN_0045f2e0
 * calls 004cc6b0 FUN_004cc6b0
 */

int __thiscall FUN_004cce20(int param_1,byte param_2)

{
  FUN_004cc6b0();
  if ((((param_2 & 1) != 0) && (DAT_009120c4 != 0)) && (param_1 != 0)) {
    FUN_0045f2e0(param_1);
  }
  return param_1;
}

