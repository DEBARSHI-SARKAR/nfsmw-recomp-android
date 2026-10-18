/* speed.exe 00411240 FUN_00411240; analysis pseudocode, not buildable source.
 * calls 0040e180 FUN_0040e180
 * calls 004061b0 FUN_004061b0
 * calls 005de330 FUN_005de330
 * calls 0040e280 FUN_0040e280
 * calls 0056f7c0 FUN_0056f7c0
 * calls 0058fd00 FUN_0058fd00
 * calls 00405960 FUN_00405960
 * calls 00654af0 FUN_00654af0
 * calls 0056ecf0 FUN_0056ecf0
 * calls 0056f120 FUN_0056f120
 * calls 00590500 FUN_00590500
 * calls 005fc180 FUN_005fc180
 */

void FUN_00411240(int ***param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int **ppiStack_40;
  int *piStack_2c;
  int iStack_28;
  int *piStack_24;
  int iStack_20;
  int *piStack_1c;
  
  if ((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1968) != 0)) {
    ppiStack_40 = (int **)0x41125f;
    cVar4 = FUN_005fc180();
    if (cVar4 != '\0') {
      return;
    }
  }
  ppiStack_40 = (int **)0x411270;
  iVar5 = (**(code **)((int)*param_1 + 8))();
  if ((iVar5 != 0) && (piStack_1c = *(int **)(iVar5 + 0x1c), piStack_1c != (int *)0x0)) {
    ppiStack_40 = (int **)0x41128e;
    piStack_24 = (int *)(**(code **)(*piStack_1c + 0x20))();
    if (piStack_24 != (int *)0x0) {
      ppiStack_40 = (int **)0x4112a1;
      ppiStack_40 = (int **)(**(code **)(*piStack_24 + 0x1c))();
      if ((ppiStack_40 == (int **)0x0) || (ppiStack_40 == (int **)0x1)) {
        iStack_28 = *(int *)(DAT_0091cf90 + 0x10 + (int)ppiStack_40 * 4);
        puVar1 = (undefined4 *)(iStack_28 + 0xa8);
        if ((puVar1 != (undefined4 *)0x0) && (iStack_20 = FUN_004061b0(), iStack_20 != 0)) {
          ppiStack_40 = (int **)*puVar1;
          iVar5 = FUN_0056ecf0();
          if (iVar5 != 0) {
            ppiStack_40 = (int **)(uint)*(byte *)(iVar5 + 0x11);
            iVar6 = FUN_0056f120();
            if (iVar6 != 0) {
              ppiStack_40 = &piStack_2c;
              cVar4 = FUN_0040e180();
              if (cVar4 != '\0') {
                ppiStack_40 = (int **)0x411328;
                iVar7 = (**(code **)(*piStack_2c + 0x44))();
                ppiStack_40 = (int **)0x411331;
                iVar8 = (**(code **)(*piStack_2c + 0x40))();
                ppiStack_40 = (int **)0x41133a;
                (**(code **)(*piStack_2c + 0x48))();
                ppiStack_40 = (int **)0x411345;
                ppiStack_40 = (int **)FUN_005de330();
                piVar3 = (int *)param_1;
                FUN_0058fd00(param_1,*(undefined4 *)(iVar5 + 4),iVar7 + iVar8);
                uVar2 = *DAT_0091e014;
                ppiStack_40 = (int **)0x411368;
                uVar9 = (**(code **)(*piVar3 + 0x74))();
                ppiStack_40 = (int **)CONCAT31((int3)((uint)uVar9 >> 8),
                                               '\x01' - ((char)uVar9 != '\0'));
                FUN_0056f7c0(uVar2,iVar7 + iVar8);
                ppiStack_40 = (int **)&param_1;
                (**(code **)(*piStack_24 + 0x20))();
                cVar4 = FUN_0040e280();
                if (cVar4 != '\0') {
                  iVar5 = (int)*param_1;
                  ppiStack_40 = (int **)0x4113a0;
                  ppiStack_40 = (int **)FUN_00590500();
                  (**(code **)(iVar5 + 4))();
                }
                ppiStack_40 = (int **)0x4113ad;
                cVar4 = (**(code **)(*piVar3 + 0x74))();
                if (cVar4 == '\0') {
                  param_1 = &ppiStack_40;
                  ppiStack_40 = (int **)0x20d60dbf;
                  FUN_00405960(piStack_1c[2],*(undefined4 *)(iVar6 + 0x10));
                  FUN_00654af0();
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

