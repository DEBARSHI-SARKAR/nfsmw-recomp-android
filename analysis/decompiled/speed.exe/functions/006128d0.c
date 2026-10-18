/* speed.exe 006128d0 FUN_006128d0; analysis pseudocode, not buildable source.
 * calls 00612820 FUN_00612820
 * calls 00613880 FUN_00613880
 * calls 00613970 FUN_00613970
 * calls 00613eb0 FUN_00613eb0
 * calls 0060b630 FUN_0060b630
 * calls 00614c50 FUN_00614c50
 */

void FUN_006128d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int local_10;
  int iStack_c;
  
  do {
    iVar1 = *(int *)(param_1 + 0xc) + 8 + param_3 * 8;
    piVar8 = (int *)(iVar1 + -0x10);
    iVar7 = 2;
    local_10 = 2;
    if (((*(int *)(iVar1 + -0x10) == 4) || (iVar2 = FUN_00614c50(param_1,piVar8), iVar2 != 0)) &&
       ((*(int *)(iVar1 + -8) == 4 || (iVar2 = FUN_00614c50(param_1,iVar1 + -8), iVar2 != 0)))) {
      iVar2 = *(int *)(*(int *)(iVar1 + -4) + 0xc);
      if (iVar2 != 0) {
        uVar6 = *(int *)(*(int *)(iVar1 + -0xc) + 0xc) + iVar2;
        if (2 < param_2) {
          piVar8 = (int *)(iVar1 + -0x18);
          do {
            if ((*piVar8 != 4) && (iVar7 = FUN_00614c50(param_1,piVar8), iVar7 == 0)) break;
            uVar6 = uVar6 + *(int *)(piVar8[1] + 0xc);
            local_10 = local_10 + 1;
            piVar8 = piVar8 + -2;
          } while (local_10 < param_2);
        }
        if (0xfffffffd < uVar6) {
          FUN_00613880(param_1,"string size overflow");
        }
        iVar7 = *(int *)(param_1 + 0x10);
        piVar8 = (int *)(iVar7 + 0x18);
        if (*(uint *)(iVar7 + 0x1c) < uVar6) {
          if (uVar6 < 0x20) {
            uVar6 = 0x20;
          }
          iVar2 = FUN_00613970(param_1,*piVar8,*(uint *)(iVar7 + 0x1c),uVar6,1);
          *piVar8 = iVar2;
          *(uint *)(iVar7 + 0x1c) = uVar6;
        }
        iVar7 = *piVar8;
        iVar2 = 0;
        if (0 < local_10) {
          piVar8 = (int *)(iVar1 + local_10 * -8 + 4);
          iStack_c = local_10;
          do {
            uVar6 = *(uint *)(*piVar8 + 0xc);
            puVar5 = (undefined4 *)(*piVar8 + 0x10);
            puVar9 = (undefined4 *)(iVar7 + iVar2);
            for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar9 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar9 = puVar9 + 1;
            }
            for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined1 *)puVar9 = *(undefined1 *)puVar5;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            iVar2 = iVar2 + uVar6;
            piVar8 = piVar8 + 2;
            iStack_c = iStack_c + -1;
          } while (iStack_c != 0);
        }
        puVar5 = (undefined4 *)(iVar1 + local_10 * -8);
        *puVar5 = 4;
        uVar3 = FUN_00613eb0(param_1,iVar7,iVar2);
        puVar5[1] = uVar3;
        iVar7 = local_10;
      }
    }
    else {
      iVar2 = FUN_00612820(param_1,piVar8,(int *)(iVar1 + -8),piVar8,0xd);
      if (iVar2 == 0) {
        if (*piVar8 == 4) {
          piVar8 = (int *)(iVar1 + -8);
        }
        FUN_0060b630(param_1,piVar8,"concatenate");
      }
    }
    param_2 = param_2 + (1 - iVar7);
    param_3 = param_3 + (1 - iVar7);
    if (param_2 < 2) {
      return;
    }
  } while( true );
}

