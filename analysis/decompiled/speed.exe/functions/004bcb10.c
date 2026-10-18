/* speed.exe 004bcb10 FUN_004bcb10; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 004b4430 FUN_004b4430
 */

int __thiscall FUN_004bcb10(int param_1,byte param_2)

{
  FUN_004b4430();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_004655f0(param_1);
  }
  return param_1;
}

