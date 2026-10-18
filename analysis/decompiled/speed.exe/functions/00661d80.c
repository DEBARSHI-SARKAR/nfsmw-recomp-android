/* speed.exe 00661d80 FUN_00661d80; analysis pseudocode, not buildable source.
 * calls 00661420 FUN_00661420
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_00661d80(int param_1,byte param_2)

{
  FUN_00661420();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x10,0);
  }
  return param_1;
}

