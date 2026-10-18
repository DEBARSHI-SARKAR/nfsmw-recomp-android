/* speed.exe 006b9af0 FUN_006b9af0; analysis pseudocode, not buildable source.
 * calls 006b87d0 FUN_006b87d0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006b9af0(int param_1,byte param_2)

{
  FUN_006b87d0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xb8,0);
  }
  return param_1;
}

