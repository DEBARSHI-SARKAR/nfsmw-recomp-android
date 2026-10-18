/* speed.exe 0041ecd0 FUN_0041ecd0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 00454640 FUN_00454640
 * calls 005d59f0 FUN_005d59f0
 * calls 004040f0 FUN_004040f0
 */

uint __fastcall FUN_0041ecd0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int unaff_retaddr;
  int *piVar10;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 0x54) + 4))(0);
  if ((cVar1 != '\0') && (unaff_retaddr != 0)) {
    iVar2 = FUN_005cc240(unaff_retaddr);
    puVar9 = *(undefined4 **)(param_1 + 200);
    if (puVar9 != puVar9 + *(int *)(param_1 + 0xd0)) {
      do {
        piVar6 = (int *)*puVar9;
        cVar1 = (**(code **)(*piVar6 + 0x88))();
        if ((cVar1 == '\0') &&
           ((piVar3 = (int *)FUN_005d59f0(&LAB_004038e0), piVar3 == (int *)0x0 ||
            (piVar3 = (int *)(**(code **)(*piVar3 + 0x80))(), *piVar3 == 0)))) {
          uVar4 = (**(code **)(*piVar6 + 0x4c))();
          iVar5 = FUN_005cc240(uVar4);
          if (iVar5 == iVar2) goto LAB_0041eeb2;
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 != (undefined4 *)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0) * 4));
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uVar4 = FUN_00454640(unaff_retaddr);
    FUN_004040f0(&uStack_34);
    puStack_2c = &uStack_34;
    puStack_1c = &stack0xffffff9c;
    puStack_18 = &uStack_58;
    uStack_30 = 0xa6b47fac;
    uStack_24 = 2;
    uStack_14 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    uStack_20 = uVar4;
    iStack_10 = param_1 + 0x5c;
    iVar2 = FUN_005cc240("PVehicle");
    for (piVar6 = DAT_0092c66c; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
      if (*piVar6 == iVar2) {
        piVar3 = (int *)(*(code *)piVar6[1])(uStack_34,0xa6b47fac,&uStack_34);
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        piVar10 = piVar3;
        (**(code **)(*(int *)(param_1 + 0x2c) + 8))(piVar3);
        piVar6 = (int *)FUN_005d59f0(&LAB_004040e0);
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        piVar7 = (int *)(**(code **)(*piVar6 + 0xac))();
        (**(code **)(*piVar7 + 0x8c))();
        uVar4 = FUN_005cc240("SoundAI");
        uVar8 = (**(code **)(*piVar3 + 0x34))(4);
        iVar2 = FUN_00405680(uVar8,piVar10);
        *(undefined4 *)(iVar2 + 4) = uVar4;
        FUN_0065faf0();
LAB_0041eeb2:
        cVar1 = (**(code **)(*piVar6 + 0x5c))();
        return ~-(uint)(cVar1 != '\0') & (uint)piVar6;
      }
    }
  }
  return 0;
}

