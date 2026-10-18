/* speed.exe 006ea2b0 FUN_006ea2b0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

int * __thiscall FUN_006ea2b0(int *param_1,byte param_2)

{
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_005d0370(param_1,8,0);
  }
  return param_1;
}

