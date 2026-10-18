/* speed.exe 004dd4f0 FUN_004dd4f0; analysis pseudocode, not buildable source.
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 */

int * __thiscall FUN_004dd4f0(int *param_1,byte param_2)

{
  if (*param_1 != 0) {
    FUN_00831782();
  }
  if ((param_2 & 1) != 0) {
    FUN_00831682(param_1);
  }
  return param_1;
}

