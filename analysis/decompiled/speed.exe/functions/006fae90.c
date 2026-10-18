/* speed.exe 006fae90 FUN_006fae90; analysis pseudocode, not buildable source.
 * calls 006f91d0 FUN_006f91d0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006fae90(int param_1,byte param_2)

{
  FUN_006f91d0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x68,0);
  }
  return param_1;
}

