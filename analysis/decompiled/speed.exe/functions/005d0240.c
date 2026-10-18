/* speed.exe 005d0240 FUN_005d0240; analysis pseudocode, not buildable source.
 * calls 00465a70 FUN_00465a70
 * calls 0064a560 FUN_0064a560
 */

void __fastcall FUN_005d0240(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x10c) == '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x114);
    FUN_0064a560(puVar1,param_1 + 0x100,(int *)(param_1 + 0x104),param_1 + 0x324);
    puVar2 = (undefined4 *)(param_1 + 0x21c);
    iVar3 = 0x40;
    do {
      puVar2[-0x87] = 0;
      puVar2[-0x40] = 0;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar2 = (undefined4 *)FUN_00465a70(*puVar1,0);
    *(undefined4 **)(param_1 + 0x110) = puVar2;
    if (*(int *)(param_1 + 0x104) != 0) {
      *puVar2 = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x110) + 4) = *puVar1;
      *(undefined4 *)(param_1 + 0x118) = 0x10;
    }
    *(undefined1 *)(param_1 + 0x10c) = 1;
  }
  return;
}

