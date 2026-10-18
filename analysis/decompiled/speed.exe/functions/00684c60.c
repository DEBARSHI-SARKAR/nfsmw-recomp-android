/* speed.exe 00684c60 FUN_00684c60; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 006ed390 FUN_006ed390
 * calls 0066fd50 FUN_0066fd50
 * calls 00684bb0 FUN_00684bb0
 */

undefined4 __fastcall FUN_00684c60(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  undefined4 uStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 auStack_68 [26];
  
  if ((*(int *)(param_1 + 0x114) != 0) && (*(char *)(param_1 + 0x111) == '\0')) {
    uVar2 = (**(code **)(*(int *)(param_1 + 0x2c) + 0x60))(1);
    cVar1 = FUN_006ed390(uVar2);
    if (cVar1 != '\0') {
      piVar3 = (int *)(**(code **)(*(int *)(param_1 + 0x2c) + 0x54))();
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x20))();
      uStack_80 = *puVar4;
      uStack_7c = puVar4[1];
      uStack_78 = puVar4[2];
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x24))();
      uStack_74 = *puVar4;
      uStack_70 = puVar4[1];
      uStack_6c = puVar4[2];
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x28))();
      uStack_8c = *puVar4;
      uStack_88 = puVar4[1];
      uStack_84 = puVar4[2];
      fVar7 = (float10)(**(code **)(*piVar3 + 0x14))();
      fVar8 = (float10)(**(code **)(*piVar3 + 0x18))();
      fStack_94 = (float)fVar8;
      puVar4 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x114) + 0xa4))();
      puVar6 = auStack_68;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      uStack_98 = FUN_005cc240("SimpleRigidBody");
      uStack_90 = DAT_0092c5e0;
      fVar9 = fStack_94;
      puVar4 = (undefined4 *)
               FUN_0066fd50(&uStack_80,&uStack_74,&uStack_8c,auStack_68,(float)fVar7,fStack_94);
      FUN_00684bb0(&uStack_90,&uStack_98,*puVar4,puVar4[1],puVar4[2],fVar9);
      return 1;
    }
  }
  return 0;
}

