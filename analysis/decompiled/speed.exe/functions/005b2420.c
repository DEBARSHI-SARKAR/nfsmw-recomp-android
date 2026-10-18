/* speed.exe 005b2420 FUN_005b2420; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

uint __fastcall FUN_005b2420(uint *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  int local_4;
  
  uVar5 = param_1[1];
  puVar10 = (uint *)(uVar5 + 8);
  puVar11 = (uint *)(*(int *)(uVar5 + 4) + 8 + uVar5);
  uVar7 = *puVar10;
  do {
    if (uVar7 == 0xcc736552) {
LAB_005b2460:
      if (puVar10[2] == 0x6d4e7352) {
        uVar5 = puVar10[3];
        piVar9 = (int *)((int)puVar10 + uVar5 + 0x10);
        if (*piVar9 != 0x71527352) {
          return uVar5 & 0xffffff00;
        }
        iVar8 = piVar9[2];
        piVar9 = piVar9 + 3;
        *(int *)(*param_1 + 100) = iVar8;
        if (iVar8 != 0) {
          pvVar3 = _malloc(iVar8 * 0x18);
          *(void **)(*param_1 + 0x68) = pvVar3;
          pvVar3 = _malloc(puVar10[3]);
          *(void **)(*param_1 + 0x98) = pvVar3;
          if (iVar8 != 0) {
            iVar4 = 0;
            local_4 = iVar8;
            do {
              *(int *)(iVar4 + *(int *)(*param_1 + 0x68)) = *piVar9;
              *(int *)(*(int *)(*param_1 + 0x68) + 4 + iVar4) = piVar9[1];
              *(int *)(*(int *)(*param_1 + 0x68) + 8 + iVar4) = piVar9[2];
              *(int *)(*(int *)(*param_1 + 0x68) + 0xc + iVar4) = piVar9[3];
              *(int *)(*(int *)(*param_1 + 0x68) + 0x10 + iVar4) = piVar9[4];
              *(int *)(*(int *)(*param_1 + 0x68) + 0x14 + iVar4) = piVar9[5];
              piVar9 = piVar9 + 6;
              iVar4 = iVar4 + 0x18;
              local_4 = local_4 + -1;
            } while (local_4 != 0);
          }
          uVar7 = puVar10[3];
          uVar5 = *param_1;
          puVar10 = puVar10 + 4;
          puVar11 = *(uint **)(uVar5 + 0x98);
          for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(char *)puVar11 = (char)*puVar10;
            puVar10 = (uint *)((int)puVar10 + 1);
            puVar11 = (uint *)((int)puVar11 + 1);
          }
          if (iVar8 != 0) {
            iVar4 = 0;
            do {
              iVar2 = *(int *)(*param_1 + 0x68);
              uVar5 = *(uint *)(*param_1 + 0x98);
              piVar9 = (int *)(iVar2 + 4 + iVar4);
              piVar1 = (int *)(iVar2 + 4 + iVar4);
              iVar4 = iVar4 + 0x18;
              iVar8 = iVar8 + -1;
              *piVar1 = *piVar9 + uVar5;
            } while (iVar8 != 0);
          }
        }
        return CONCAT31((int3)(uVar5 >> 8),1);
      }
LAB_005b2469:
      return uVar5 & 0xffffff00;
    }
    if (puVar10 == puVar11) {
      if (*puVar10 != 0xcc736552) goto LAB_005b2469;
      goto LAB_005b2460;
    }
    uVar5 = *(uint *)((int)puVar10 + puVar10[1] + 8);
    puVar10 = (uint *)((int)puVar10 + puVar10[1] + 8);
    uVar7 = uVar5;
  } while( true );
}

