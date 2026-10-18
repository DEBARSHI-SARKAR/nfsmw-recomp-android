/* speed.exe 006c9d70 FUN_006c9d70; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006c9d70(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 0x91e;
  iVar2 = 0;
  do {
    puVar1[-0x8c] = 0;
    *(undefined4 *)((int)&DAT_0093df00 + iVar2) = 0;
    *puVar1 = 0;
    puVar1[-0x8a] = 0;
    *(undefined4 *)((int)&DAT_0093cc34 + iVar2) = 0;
    puVar1[-0x96] = 0;
    *(undefined4 *)((int)&DAT_00982904 + iVar2) = 0;
    puVar1[-0x94] = 0;
    *(undefined4 *)((int)&DAT_0093cc58 + iVar2) = 0;
    puVar1[-0x92] = 0;
    *(undefined4 *)((int)&DAT_0093d904 + iVar2) = 0;
    puVar1[-0x90] = 0;
    puVar1[-0x8e] = 0;
    iVar2 = iVar2 + 4;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 8);
  puVar1 = param_1;
  for (iVar2 = 0x88; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = param_1 + 0x896;
  for (iVar2 = 0x88; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = param_1 + 0x88;
  for (iVar2 = 0x800; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return;
}

