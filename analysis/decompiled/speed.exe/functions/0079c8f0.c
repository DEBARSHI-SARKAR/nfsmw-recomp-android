/* speed.exe 0079c8f0 FUN_0079c8f0; analysis pseudocode, not buildable source.
 * calls 0079c410 FUN_0079c410
 */

void __fastcall FUN_0079c8f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0079c410();
  puVar2 = (undefined4 *)(param_1 + 8);
  for (iVar1 = 0x19d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

