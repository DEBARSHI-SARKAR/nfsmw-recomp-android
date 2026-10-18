/* speed.exe 0064ce00 FUN_0064ce00; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 00463ca0 FUN_00463ca0
 */

int * __thiscall FUN_0064ce00(int *param_1,byte param_2)

{
  if (*param_1 != 0) {
    FUN_004655f0(*param_1);
  }
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_00925900,param_1);
  }
  return param_1;
}

