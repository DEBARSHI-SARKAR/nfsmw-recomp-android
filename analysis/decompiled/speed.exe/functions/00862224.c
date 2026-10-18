/* speed.exe 00862224 FUN_00862224; analysis pseudocode, not buildable source.
 */

void FUN_00862224(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_009c3e48)[iVar1] == param_1) {
      (&DAT_009c3e48)[iVar1] = 0;
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40);
  return;
}

