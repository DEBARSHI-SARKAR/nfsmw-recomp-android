/* speed.exe 00438120 FUN_00438120; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00435440 FUN_00435440
 */

int __thiscall FUN_00438120(int param_1,byte param_2)

{
  FUN_00435440();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x18,0);
  }
  return param_1;
}

