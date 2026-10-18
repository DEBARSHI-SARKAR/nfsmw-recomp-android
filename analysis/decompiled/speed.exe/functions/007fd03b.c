/* speed.exe 007fd03b FUN_007fd03b; analysis pseudocode, not buildable source.
 */

void FUN_007fd03b(int param_1)

{
  int iVar1;
  
  *(undefined **)(param_1 + 0x13c) = &DAT_008c45b8;
  iVar1 = 0;
  do {
    *(char *)((&DAT_008c44b8)[iVar1] + 0x140 + param_1) = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40);
  return;
}

