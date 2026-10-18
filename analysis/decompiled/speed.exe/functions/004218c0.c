/* speed.exe 004218c0 FUN_004218c0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 004218f0 FUN_004218f0
 */

int __thiscall FUN_004218c0(int param_1,byte param_2)

{
  FUN_004218f0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x50,0);
  }
  return param_1;
}

