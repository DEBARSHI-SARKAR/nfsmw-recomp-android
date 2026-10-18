/* speed.exe 0067b520 FUN_0067b520; analysis pseudocode, not buildable source.
 * calls 006f4400 FUN_006f4400
 * calls 005d59f0 FUN_005d59f0
 */

void __thiscall FUN_0067b520(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_94 [12];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined **ppuStack_54;
  undefined4 auStack_50 [16];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087acb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*param_2 == DAT_0092c5e0) {
    ExceptionList = &pvStack_c;
    uVar1 = FUN_005d59f0();
    *(undefined4 *)(param_1 + 0x78) = uVar1;
    if ((*(int *)(param_1 + 0x88) == 0) && (*(int **)(param_1 + 0x78) != (int *)0x0)) {
      (**(code **)(**(int **)(param_1 + 0x78) + 0x40))();
      puVar2 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x78) + 0x20))();
      uStack_64 = *puVar2;
      uStack_60 = puVar2[1];
      uStack_5c = puVar2[2];
      uVar1 = *(undefined4 *)(param_1 + 0x8c);
      ppuStack_54 = &PTR_LAB_008a9478;
      puVar2 = local_94;
      puVar5 = auStack_50;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      uStack_4 = 0;
      uStack_10 = uVar1;
      uVar1 = FUN_006f4400();
      *(undefined4 *)(param_1 + 0x88) = uVar1;
      uStack_4 = 0xffffffff;
      ppuStack_54 = &PTR___purecall_008967e4;
    }
  }
  piVar4 = (int *)**(int **)(param_1 + 0xa0);
  if (piVar4 != *(int **)(param_1 + 0xa0)) {
    do {
      (**(code **)(*(int *)piVar4[2] + 0x1c))();
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 0xa0));
  }
  ExceptionList = pvStack_c;
  return;
}

