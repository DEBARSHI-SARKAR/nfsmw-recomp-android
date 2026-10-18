/* speed.exe 0041fd70 FUN_0041fd70; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0041fda0 FUN_0041fda0
 */

int __thiscall FUN_0041fd70(int param_1,byte param_2)

{
  FUN_0041fda0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x5c,0);
  }
  return param_1;
}

