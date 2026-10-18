/* speed.exe 004ce370 FUN_004ce370; analysis pseudocode, not buildable source.
 * calls 004cd3a0 FUN_004cd3a0
 * calls 004655f0 FUN_004655f0
 */

int __thiscall FUN_004ce370(int param_1,byte param_2)

{
  FUN_004cd3a0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

