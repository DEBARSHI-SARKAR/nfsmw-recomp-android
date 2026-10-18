/* speed.exe 004380c0 FUN_004380c0; analysis pseudocode, not buildable source.
 * calls 00434fe0 FUN_00434fe0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_004380c0(int param_1,byte param_2)

{
  FUN_00434fe0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x7ec,0);
  }
  return param_1;
}

