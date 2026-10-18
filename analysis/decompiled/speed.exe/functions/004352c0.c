/* speed.exe 004352c0 FUN_004352c0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00433570 FUN_00433570
 */

int __thiscall FUN_004352c0(int param_1,byte param_2)

{
  FUN_00433570();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x7cc,0);
  }
  return param_1;
}

