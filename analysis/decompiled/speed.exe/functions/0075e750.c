/* speed.exe 0075e750 FUN_0075e750; analysis pseudocode, not buildable source.
 * calls 0075d710 FUN_0075d710
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_0075e750(int param_1,byte param_2)

{
  FUN_0075d710();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x400,0);
  }
  return param_1;
}

