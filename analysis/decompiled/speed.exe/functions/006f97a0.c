/* speed.exe 006f97a0 FUN_006f97a0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006f8430 FUN_006f8430
 */

int __thiscall FUN_006f97a0(int param_1,byte param_2)

{
  FUN_006f8430();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x4c,0);
  }
  return param_1;
}

