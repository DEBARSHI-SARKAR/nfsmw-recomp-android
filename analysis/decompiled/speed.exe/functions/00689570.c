/* speed.exe 00689570 FUN_00689570; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00687e40 FUN_00687e40
 */

int __thiscall FUN_00689570(int param_1,byte param_2)

{
  FUN_00687e40();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x1ac,0);
  }
  return param_1;
}

