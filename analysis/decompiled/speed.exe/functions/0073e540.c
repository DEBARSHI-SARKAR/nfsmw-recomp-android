/* speed.exe 0073e540 FUN_0073e540; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0073e540(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00905958;
  iVar1 = DAT_00905958;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (puVar2[4] == param_1) break;
    iVar1 = puVar2[8];
    puVar2 = puVar2 + 8;
  }
  return *puVar2;
}

