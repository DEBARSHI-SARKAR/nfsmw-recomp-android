/* speed.exe 006680c0 FUN_006680c0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00782ee0 FUN_00782ee0
 */

int __thiscall FUN_006680c0(int param_1,byte param_2)

{
  FUN_00782ee0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x40,0);
  }
  return param_1;
}

