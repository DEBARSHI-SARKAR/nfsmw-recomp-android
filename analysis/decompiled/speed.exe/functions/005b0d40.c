/* speed.exe 005b0d40 FUN_005b0d40; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005b0d40(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(param_1 + 0x4148);
  iVar2 = 0x10;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x100;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x4144) = 0;
  return;
}

