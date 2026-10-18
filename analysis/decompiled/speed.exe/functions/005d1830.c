/* speed.exe 005d1830 FUN_005d1830; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

int * __thiscall FUN_005d1830(int *param_1,byte param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*param_1 != 0)) {
    thunk_FUN_007c7250(*param_1);
  }
  if ((param_2 & 1) != 0) {
    *param_1 = (int)DAT_00925b30;
    DAT_00925b30 = param_1;
  }
  return param_1;
}

