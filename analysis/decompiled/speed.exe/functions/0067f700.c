/* speed.exe 0067f700 FUN_0067f700; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0067b970 FUN_0067b970
 */

int __thiscall FUN_0067f700(int param_1,byte param_2)

{
  FUN_0067b970();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0xe4,0);
  }
  return param_1;
}

