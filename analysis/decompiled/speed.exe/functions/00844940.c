/* speed.exe 00844940 FUN_00844940; analysis pseudocode, not buildable source.
 * calls 0078af00 FUN_0078af00
 */

void FUN_00844940(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0078af00(0x244);
  *(undefined4 **)(param_1 + 0x1834) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    for (iVar2 = 0x91; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
  }
  return;
}

