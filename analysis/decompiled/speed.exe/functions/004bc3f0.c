/* speed.exe 004bc3f0 FUN_004bc3f0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 004b3af0 FUN_004b3af0
 */

int __thiscall FUN_004bc3f0(int param_1,byte param_2)

{
  FUN_004b3af0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

