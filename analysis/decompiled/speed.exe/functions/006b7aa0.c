/* speed.exe 006b7aa0 FUN_006b7aa0; analysis pseudocode, not buildable source.
 * calls 006b6570 FUN_006b6570
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006b7aa0(int param_1,byte param_2)

{
  FUN_006b6570();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,100,0);
  }
  return param_1;
}

