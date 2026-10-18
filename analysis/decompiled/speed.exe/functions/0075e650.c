/* speed.exe 0075e650 FUN_0075e650; analysis pseudocode, not buildable source.
 * calls 0075e680 FUN_0075e680
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_0075e650(int param_1,byte param_2)

{
  FUN_0075e680();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x1c0,0);
  }
  return param_1;
}

