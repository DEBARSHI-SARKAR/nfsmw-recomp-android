/* speed.exe 004380f0 FUN_004380f0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00435430 FUN_00435430
 */

int __thiscall FUN_004380f0(int param_1,byte param_2)

{
  FUN_00435430();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x1c,0);
  }
  return param_1;
}

