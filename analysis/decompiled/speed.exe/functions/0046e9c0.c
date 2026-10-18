/* speed.exe 0046e9c0 FUN_0046e9c0; analysis pseudocode, not buildable source.
 */

undefined * FUN_0046e9c0(char param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_1 == (&DAT_008edeec)[iVar1 * 8]) {
      return (&PTR_s_<NONE>_008edef0)[iVar1 * 2];
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return PTR_s_<NONE>_008edef0;
}

