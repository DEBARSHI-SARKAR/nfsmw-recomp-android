/* speed.exe 00579e00 FUN_00579e00; analysis pseudocode, not buildable source.
 * calls 00514da0 FUN_00514da0
 * calls 00514c70 FUN_00514c70
 * calls 00579840 FUN_00579840
 * calls 005af1c0 FUN_005af1c0
 * calls 005d59f0 FUN_005d59f0
 * calls 00514d10 FUN_00514d10
 * calls 005675d0 FUN_005675d0
 * calls 005157e0 FUN_005157e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00579e00(int param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 *puStack_24;
  uint local_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [12];
  
  iVar6 = *(int *)(param_1 + 0xc0);
  local_20 = 0;
  bVar1 = false;
  *(int *)(param_1 + 0xc0) = iVar6 + 1;
  if (7 < iVar6) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  piVar3 = (int *)(**(code **)(*param_2 + 0xac))();
  piVar3 = (int *)(**(code **)(*piVar3 + 0xa0))();
  if (DAT_0091cf00 == '\0') {
    if (piVar3 == (int *)0x0) goto LAB_0057a0bc;
    cVar2 = (**(code **)(*piVar3 + 0x2c))();
    if (cVar2 != '\0') goto LAB_0057a0bc;
  }
  if (DAT_0092ce9c != DAT_0092ce9c + DAT_0092cea4) {
    puStack_24 = (undefined4 *)(param_1 + 0xd0);
    puVar8 = DAT_0092ce9c;
    do {
      cVar2 = (**(code **)(*(int *)*puVar8 + 0x88))();
      if (cVar2 != '\0') {
        if (7 < local_20) goto LAB_0057a0e4;
        uVar4 = (**(code **)(*(int *)*puVar8 + 4))();
        FUN_00579840(auStack_10,auStack_18,uVar4);
        piVar3 = (int *)FUN_005d59f0(&LAB_004038e0);
        piVar5 = (int *)(**(code **)(*(int *)*puVar8 + 0x44))();
        if (*piVar5 == DAT_0092c4f4) {
          if (DAT_0091cf00 == '\0') {
            if (piVar3 != (int *)0x0) {
              cVar2 = (**(code **)(*piVar3 + 0x8c))();
              if (cVar2 != '\0') goto LAB_00579f0e;
            }
          }
          else {
LAB_00579f0e:
            iVar6 = (**(code **)(*piVar3 + 0x24))();
            if (iVar6 == 0) {
LAB_00579f64:
              cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0xcc),0x1744b3);
              if (cVar2 != '\0') goto LAB_00579f92;
              uVar4 = *(undefined4 *)(param_1 + 0xcc);
              uVar10 = 1;
              uVar7 = 0x1744b3;
            }
            else {
              fVar9 = (float10)(**(code **)(*piVar3 + 0x74))();
              if (fVar9 < (float10)_DAT_0089f248 == (fVar9 == (float10)_DAT_0089f248))
              goto LAB_00579f64;
              uVar4 = FUN_005af1c0("TRACKING");
              cVar2 = FUN_00514da0(*(undefined4 *)(param_1 + 0xcc),uVar4);
              if (cVar2 != '\0') goto LAB_00579f92;
              uVar10 = 1;
              uVar7 = FUN_005af1c0("TRACKING",1);
              uVar4 = *(undefined4 *)(param_1 + 0xcc);
            }
            FUN_00514d10(uVar4,uVar7,uVar10);
          }
LAB_00579f92:
          FUN_005675d0(auStack_10,auStack_18,*(undefined4 *)(param_1 + 200),0);
          FUN_005675d0(auStack_10,auStack_18,*(undefined4 *)(param_1 + 0xcc),0);
          bVar1 = true;
        }
        else if (DAT_0091cf00 == '\0') {
          if (piVar3 != (int *)0x0) {
            cVar2 = (**(code **)(*piVar3 + 0x8c))();
            if ((cVar2 != '\0') && (DAT_008f3aac != '\0')) goto LAB_00579ffd;
          }
          FUN_00514c70(*puStack_24);
        }
        else {
LAB_00579ffd:
          FUN_005675d0(auStack_10,auStack_18,*puStack_24,0);
        }
        piVar5 = (int *)(**(code **)(*(int *)*puVar8 + 0x44))();
        if (*piVar5 != DAT_0092c4f4) {
          uStack_1c = 0xffcccccc;
          if (piVar3 != (int *)0x0) {
            cVar2 = (**(code **)(*piVar3 + 0x14))();
            if (cVar2 != '\0') {
              iVar6 = *(int *)(param_1 + 0xc0);
              if (iVar6 < 3) {
                uStack_1c = 0xff0000ff;
              }
              else if ((3 < iVar6) && (iVar6 < 7)) {
                uStack_1c = 0xffa00000;
              }
            }
          }
          FUN_005157e0(*puStack_24,uStack_1c);
        }
        piVar3 = (int *)(**(code **)(*(int *)*puVar8 + 0x44))();
        if (*piVar3 != DAT_0092c4f4) {
          local_20 = local_20 + 1;
          puStack_24 = puStack_24 + 1;
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != DAT_0092ce9c + DAT_0092cea4);
  }
LAB_0057a0bc:
  if (local_20 < 8) {
    puVar8 = (undefined4 *)(param_1 + 0xd0 + local_20 * 4);
    iVar6 = 8 - local_20;
    do {
      FUN_00514c70(*puVar8);
      puVar8 = puVar8 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
LAB_0057a0e4:
  if (!bVar1) {
    FUN_00514c70(*(undefined4 *)(param_1 + 200));
    FUN_00514c70(*(undefined4 *)(param_1 + 0xcc));
  }
  return;
}

