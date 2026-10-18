/* speed.exe 005d02e0 FUN_005d02e0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_005d02e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0x10c) != '\0') {
    puVar1 = *(undefined4 **)(param_1 + 0x110);
    while (puVar1 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
      if (*(int *)(param_1 + 0x104) != 0) {
        puVar3 = (undefined4 *)*puVar1;
      }
      FUN_004655f0(puVar1);
      puVar1 = puVar3;
    }
    *(undefined4 *)(param_1 + 0x31c) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    puVar1 = (undefined4 *)(param_1 + 0x21c);
    iVar2 = 0x40;
    do {
      puVar1[-0x87] = 0;
      puVar1[-0x40] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

