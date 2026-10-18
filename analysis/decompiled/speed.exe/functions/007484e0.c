/* speed.exe 007484e0 FUN_007484e0; analysis pseudocode, not buildable source.
 * calls 0075bed0 FUN_0075bed0
 */

void __fastcall FUN_007484e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x58); puVar1 != (undefined4 *)(param_1 + 0x58);
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = puVar1[0xd3];
    if (*(int *)(iVar2 + 0xc) == 1) {
      *(undefined4 *)(iVar2 + 0xc) = 2;
      iVar3 = *(int *)(iVar2 + 0x54);
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0xe) == '\x01')) {
        *(undefined1 *)(iVar3 + 0xe) = 2;
      }
      iVar3 = *(int *)(iVar2 + 0x58);
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0xe) == '\x01')) {
        *(undefined1 *)(iVar3 + 0xe) = 2;
      }
      iVar3 = *(int *)(iVar2 + 0x5c);
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0xe) == '\x01')) {
        *(undefined1 *)(iVar3 + 0xe) = 2;
      }
      iVar3 = *(int *)(iVar2 + 0x60);
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0xe) == '\x01')) {
        *(undefined1 *)(iVar3 + 0xe) = 2;
      }
    }
    if (*(int *)(iVar2 + 0x10) == 1) {
      *(undefined4 *)(iVar2 + 0x10) = 2;
      iVar3 = *(int *)(iVar2 + 100);
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0xe) == '\x01')) {
        *(undefined1 *)(iVar3 + 0xe) = 2;
      }
      iVar3 = *(int *)(iVar2 + 0x68);
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0xe) == '\x01')) {
        *(undefined1 *)(iVar3 + 0xe) = 2;
      }
      iVar3 = *(int *)(iVar2 + 0x6c);
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0xe) == '\x01')) {
        *(undefined1 *)(iVar3 + 0xe) = 2;
      }
      iVar2 = *(int *)(iVar2 + 0x70);
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0xe) == '\x01')) {
        *(undefined1 *)(iVar2 + 0xe) = 2;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_0075bed0();
  return;
}

