/* speed.exe 004212a0 FUN_004212a0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 004212d0 FUN_004212d0
 */

int __thiscall FUN_004212a0(int param_1,byte param_2)

{
  FUN_004212d0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x74,0);
  }
  return param_1;
}

