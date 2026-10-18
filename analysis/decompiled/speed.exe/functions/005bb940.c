/* speed.exe 005bb940 FUN_005bb940; analysis pseudocode, not buildable source.
 * calls 005b3b20 FUN_005b3b20
 */

void __fastcall FUN_005bb940(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined1 *)(param_1 + 0x4148);
  iVar2 = 0x10;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x100;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x4144) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x514c);
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_005b3b20();
  FUN_005b3b20();
  for (iVar2 = *(int *)(param_1 + 0xe0); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    *(undefined4 *)(iVar2 + 0x8c) = 0;
  }
  return;
}

