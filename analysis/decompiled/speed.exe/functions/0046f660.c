/* speed.exe 0046f660 FUN_0046f660; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0046f690 FUN_0046f690
 */

int __thiscall FUN_0046f660(int param_1,byte param_2)

{
  FUN_0046f690();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x30,0);
  }
  return param_1;
}

