/* speed.exe 0077f940 FUN_0077f940; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0077d470 FUN_0077d470
 */

int __thiscall FUN_0077f940(int param_1,byte param_2)

{
  FUN_0077d470();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xc,0);
  }
  return param_1;
}

