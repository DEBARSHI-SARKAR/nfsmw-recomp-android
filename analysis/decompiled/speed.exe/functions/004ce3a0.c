/* speed.exe 004ce3a0 FUN_004ce3a0; analysis pseudocode, not buildable source.
 * calls 0045f2e0 FUN_0045f2e0
 * calls 004cd520 FUN_004cd520
 */

int __thiscall FUN_004ce3a0(int param_1,byte param_2)

{
  FUN_004cd520();
  if ((((param_2 & 1) != 0) && (DAT_009120c8 != 0)) && (param_1 != 0)) {
    FUN_0045f2e0(param_1);
  }
  return param_1;
}

