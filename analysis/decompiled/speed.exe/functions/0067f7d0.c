/* speed.exe 0067f7d0 FUN_0067f7d0; analysis pseudocode, not buildable source.
 * calls 0067be90 FUN_0067be90
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_0067f7d0(int param_1,byte param_2)

{
  FUN_0067be90();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xf4,0);
  }
  return param_1;
}

