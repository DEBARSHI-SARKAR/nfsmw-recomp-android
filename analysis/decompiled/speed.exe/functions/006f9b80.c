/* speed.exe 006f9b80 FUN_006f9b80; analysis pseudocode, not buildable source.
 * calls 006f8970 FUN_006f8970
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006f9b80(int param_1,byte param_2)

{
  FUN_006f8970();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x90,0);
  }
  return param_1;
}

