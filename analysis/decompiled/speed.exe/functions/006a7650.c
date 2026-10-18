/* speed.exe 006a7650 FUN_006a7650; analysis pseudocode, not buildable source.
 * calls 006a7050 FUN_006a7050
 */

void __thiscall FUN_006a7650(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  undefined4 **ppuStack_44;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  cVar2 = (**(code **)(**(int **)(param_1 + 0x138) + 0x20))();
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*(int *)(param_1 + 0x50) + 0x1c))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(param_1 + 0x138) + 0xbc))();
      if (cVar2 == '\0') {
        piVar1 = (int *)(param_1 + 0x48);
        uStack_30 = 0x6a769c;
        puVar3 = (undefined4 *)(**(code **)(*(int *)(param_1 + 0x48) + 0x20))();
        uStack_c = *puVar3;
        uStack_8 = puVar3[1];
        uStack_4 = puVar3[2];
        uStack_30 = param_2;
        puStack_34 = (undefined4 *)0x6a76bc;
        FUN_006a7050();
        uStack_30 = 0x6a76c3;
        puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
        uStack_18 = *puVar3;
        uStack_14 = puVar3[1];
        uStack_10 = puVar3[2];
        uStack_30 = 0x6a76de;
        puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x24))();
        uStack_24 = *puVar3;
        uStack_20 = puVar3[1];
        uStack_1c = puVar3[2];
        uStack_30 = 0;
        puStack_34 = &uStack_24;
        uStack_38 = 0x6a7703;
        (**(code **)(*piVar1 + 0xa4))();
        uStack_38 = 0;
        puStack_3c = &uStack_20;
        uStack_40 = 0x6a7714;
        (**(code **)(*piVar1 + 0xa4))();
        puStack_34 = (undefined4 *)0x0;
        uStack_24 = 0;
        uStack_40 = 0x6a7733;
        iVar4 = (**(code **)(*piVar1 + 0x20))();
        uStack_18 = *(undefined4 *)(iVar4 + 4);
        uStack_40 = 0;
        ppuStack_44 = &puStack_34;
        uStack_48 = 0x6a774b;
        (**(code **)(*piVar1 + 0xa0))();
        uStack_48 = 0;
        puStack_4c = &uStack_30;
        (**(code **)(*piVar1 + 0xa0))();
        (**(code **)(*piVar1 + 0x5c))(&stack0xffffffd4);
        (**(code **)(*piVar1 + 100))(&puStack_3c);
        (**(code **)(*piVar1 + 0x60))(&puStack_4c);
        return;
      }
    }
  }
  uStack_30 = 0x6a7794;
  FUN_006a7050();
  return;
}

