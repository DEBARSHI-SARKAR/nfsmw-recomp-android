/* speed.exe 005f7410 FUN_005f7410; analysis pseudocode, not buildable source.
 * calls 005dfa30 FUN_005dfa30
 * calls 005edcb0 FUN_005edcb0
 * calls 0065b760 FUN_0065b760
 * calls 005e35d0 FUN_005e35d0
 * calls 0065b6e0 FUN_0065b6e0
 * calls 005e1970 FUN_005e1970
 * calls 005e4c40 FUN_005e4c40
 * calls 005f6ba0 FUN_005f6ba0
 */

uint __thiscall FUN_005f7410(int param_1,undefined4 *param_2,uint param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar8 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875ceb;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  puVar7 = param_2;
  ExceptionList = &local_c;
  for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (uVar4 = param_3 & 3; puVar5 = DAT_0091dfe4, uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  if (DAT_0091dfe4 != (undefined4 *)0x0) {
    if (*(short *)(DAT_0091dfe4 + 6) == 0) {
      puVar2 = (undefined4 *)FUN_005e1970();
    }
    if (puVar5 != (undefined4 *)0x0) {
      do {
        FUN_005f6ba0(0);
        puVar5 = (undefined4 *)puVar5[9];
        while( true ) {
          puVar2 = DAT_0091dfe4;
          if (puVar5 == DAT_0091dfe4) goto LAB_005f74af;
          if (*(short *)(puVar5 + 6) != 0) break;
          puVar5 = (undefined4 *)puVar5[9];
        }
      } while( true );
    }
  }
LAB_005f74af:
  if (param_3 < 0x80) {
LAB_005f771d:
    uVar4 = (uint)puVar2 & 0xffffff00;
  }
  else {
    param_2[4] = 0x656d6147;
    param_2[5] = 8;
    param_2[6] = *(undefined4 *)(param_1 + 0x134);
    piVar1 = (int *)**(int **)(param_1 + 0x130);
    puVar7 = param_2 + 0x20;
    if (piVar1 != *(int **)(param_1 + 0x130)) {
      puVar5 = (undefined4 *)((int)param_2 + param_3);
      param_2 = puVar7;
      do {
        puVar2 = (undefined4 *)piVar1[4];
        uVar4 = puVar2[1] + 0x17 & 0xfffffff0;
        puVar7 = (undefined4 *)(uVar4 + (int)param_2);
        if (puVar5 < puVar7) goto LAB_005f771d;
        for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *param_2 = *puVar2;
          puVar2 = puVar2 + 1;
          param_2 = param_2 + 1;
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined1 *)param_2 = *(undefined1 *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          param_2 = (undefined4 *)((int)param_2 + 1);
        }
        FUN_005dfa30();
        param_2 = puVar7;
      } while (piVar1 != (int *)*(int *)(param_1 + 0x130));
    }
    uVar4 = (uint)((int)puVar7 + 0xf) & 0xfffffff0;
    iVar6 = FUN_005e4c40(uVar4);
    puVar8[7] = iVar6;
    iVar6 = iVar6 * 0x20 + uVar4;
    iVar3 = FUN_005edcb0(iVar6);
    puVar8[8] = iVar3;
    puVar2 = (undefined4 *)(iVar3 * 0x10 + iVar6);
    puVar7 = *(undefined4 **)(param_1 + 0xa8);
    puVar5 = puVar2;
    for (uVar4 = *(int *)(param_1 + 0xa4) * 5 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    iVar6 = *(int *)(param_1 + 0xa4);
    puVar8[9] = iVar6;
    puVar5 = (undefined4 *)((uint)((int)puVar2 + iVar6 * 0x14 + 0xf) & 0xfffffff0);
    puVar2 = *(undefined4 **)(param_1 + 0xb0);
    puVar7 = puVar5;
    for (uVar4 = *(int *)(param_1 + 0xac) * 5 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    iVar6 = *(int *)(param_1 + 0xac);
    puVar8[10] = iVar6;
    puVar5 = (undefined4 *)((uint)((int)puVar5 + iVar6 * 0x14 + 0xf) & 0xfffffff0);
    puVar8[0xc] = 0x200;
    puVar2 = (undefined4 *)(param_1 + 0x264);
    puVar7 = puVar5;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar5 = puVar5 + 0x10;
    iVar3 = FUN_005e35d0(puVar5);
    puVar8[0xd] = iVar3;
    iVar6 = *(int *)(param_1 + 0x2ac);
    puVar2 = (undefined4 *)**(undefined4 **)(param_1 + 0x2a8);
    uVar4 = iVar3 + 0xf + (int)puVar5 & 0xfffffff0;
    iVar3 = 0;
    if (0 < iVar6) {
      do {
        *(undefined4 *)(uVar4 + iVar3 * 4) = puVar2[2];
        puVar2 = (undefined4 *)*puVar2;
        iVar3 = iVar3 + 2;
      } while (iVar3 < iVar6);
    }
    puVar8[0xe] = iVar6;
    puVar2 = (undefined4 *)(uVar4 + 0xf + iVar6 * 4 & 0xfffffff0);
    *puVar2 = *(undefined4 *)(DAT_0091e00c + 0x108);
    puVar2[4] = *(undefined4 *)(DAT_0091e00c + 0x10c);
    local_4 = 0;
    FUN_0065b6e0(puVar8 + 4,(undefined1 *)((int)puVar8 + (param_3 - (int)(puVar8 + 4))));
    FUN_0065b760();
    puVar2 = (undefined4 *)FUN_0065b760();
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar4 = 1;
  }
  ExceptionList = local_c;
  return uVar4;
}

