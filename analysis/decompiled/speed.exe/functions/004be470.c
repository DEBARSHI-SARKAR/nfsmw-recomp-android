/* speed.exe 004be470 FUN_004be470; analysis pseudocode, not buildable source.
 * calls 004b55a0 FUN_004b55a0
 * calls 004655f0 FUN_004655f0
 */

int __thiscall FUN_004be470(int param_1,byte param_2)

{
  FUN_004b55a0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

