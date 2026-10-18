/* speed.exe 007f6376 FUN_007f6376; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007f6376(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 8);
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x15;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

