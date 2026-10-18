/* speed.exe 0050d170 FUN_0050d170; analysis pseudocode, not buildable source.
 * calls 0050c7b0 FUN_0050c7b0
 * calls 005ebd90 FUN_005ebd90
 * calls 00455fd0 FUN_00455fd0
 * calls 00444fe0 FUN_00444fe0
 */

void __fastcall FUN_0050d170(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x380); puVar1 != (undefined4 *)(param_1 + 0x380);
      puVar1 = (undefined4 *)*puVar1) {
    *(undefined1 *)((int)puVar1 + 0x26) = 1;
    puVar1[10] = 0;
  }
  iVar4 = *(int *)(param_1 + 0x39c);
  if (iVar4 != *(int *)(param_1 + 0x3a0)) {
    do {
      puVar1 = *(undefined4 **)(iVar4 + 4);
      if ((((puVar1[3] == 0) && (*(short *)(puVar1 + 2) != 0)) && (DAT_008f86ec != '\0')) &&
         ((iVar3 = FUN_00455fd0(0xaba86e60,*puVar1), iVar3 != 0 &&
          (iVar3 = FUN_0050c7b0(iVar3,0x8000000), iVar3 != 0)))) {
        *(undefined4 **)(iVar3 + 0x60) = puVar1;
        *(undefined1 **)(iVar3 + 0x6c) = &LAB_004fdfd0;
        puVar1[3] = iVar3;
        FUN_00444fe0(iVar3 + 0x20,puVar1 + 4);
        for (puVar2 = *(undefined4 **)(iVar3 + 8); puVar2 != (undefined4 *)(iVar3 + 8);
            puVar2 = (undefined4 *)*puVar2) {
          FUN_00444fe0(puVar2 + 8,puVar1 + 4);
        }
        *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) | 1;
      }
      iVar4 = iVar4 + 8;
    } while (iVar4 != *(int *)(param_1 + 0x3a0));
  }
  FUN_005ebd90();
  return;
}

