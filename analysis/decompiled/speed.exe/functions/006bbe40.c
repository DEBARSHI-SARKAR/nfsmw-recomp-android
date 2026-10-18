/* speed.exe 006bbe40 FUN_006bbe40; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006bbae0 FUN_006bbae0
 */

int __thiscall FUN_006bbe40(int param_1,byte param_2)

{
  FUN_006bbae0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xbc,0);
  }
  return param_1;
}

