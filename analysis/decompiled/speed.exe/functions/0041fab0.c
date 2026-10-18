/* speed.exe 0041fab0 FUN_0041fab0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0041fae0 FUN_0041fae0
 */

int __thiscall FUN_0041fab0(int param_1,byte param_2)

{
  FUN_0041fae0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x48,0);
  }
  return param_1;
}

