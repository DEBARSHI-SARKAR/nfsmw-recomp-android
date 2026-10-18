/* speed.exe 0058bd10 FUN_0058bd10; analysis pseudocode, not buildable source.
 * calls 0056bb80 FUN_0056bb80
 * calls 005ddec0 FUN_005ddec0
 * calls 005d59f0 FUN_005d59f0
 * calls 005fc260 FUN_005fc260
 * calls 004647e0 FUN_004647e0
 * calls 00516b50 FUN_00516b50
 * calls 0056bc60 FUN_0056bc60
 * calls 00625870 FUN_00625870
 * calls 005d51f0 FUN_005d51f0
 * calls 005dbef0 FUN_005dbef0
 * calls 00627400 FUN_00627400
 * calls 0051a0a0 FUN_0051a0a0
 * calls 005e8b20 FUN_005e8b20
 * calls 005faa20 FUN_005faa20
 * calls 005fbf50 FUN_005fbf50
 * calls 006547a0 FUN_006547a0
 * calls 007c4b80 FUN_007c4b80
 * calls 00404ac0 FUN_00404ac0
 * calls 005790e0 FUN_005790e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0058bd10(int param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  float10 fVar10;
  int **ppiVar11;
  int *piStack_10c;
  int *piStack_108;
  float fStack_104;
  int iStack_100;
  undefined1 auStack_fc [16];
  undefined1 auStack_ec [64];
  undefined1 auStack_ac [32];
  undefined1 auStack_8c [64];
  undefined1 auStack_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00872422;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(param_1 + 8) = 1;
  uVar4 = (**(code **)(*param_2 + 4))();
  piVar5 = (int *)FUN_005e8b20(uVar4);
  fVar10 = (float10)FUN_005ddec0();
  piStack_108 = (int *)(float)fVar10;
  fVar10 = (float10)FUN_005fc260();
  fStack_104 = (float)fVar10;
  bVar2 = FUN_005fbf50();
  piStack_10c = (int *)(float)bVar2;
  cVar3 = '\0';
  if (*piVar5 != 0) {
    FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar5);
  }
  piVar6 = (int *)FUN_005d59f0(&LAB_004040e0);
  if (piVar6 != (int *)0x0) {
    cVar3 = (**(code **)(*piVar6 + 0x7c))();
  }
  if ((((DAT_0091e000 == 0) || (*(int *)(DAT_0091e000 + 0x1968) == 0)) ||
      (iVar7 = FUN_005faa20(), iVar7 != 8)) || ((char)piVar5[8] == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 9) = 1;
    goto LAB_0058c106;
  }
  if (*(char *)((int)piVar5 + 0x1e) == '\0') {
    if (*(char *)((int)piVar5 + 0x1d) != '\0') {
      (**(code **)(*param_2 + 0x20))();
      piVar5 = (int *)FUN_005d59f0(&LAB_005650b0);
      goto joined_r0x0058be5d;
    }
    if ((char)piVar5[7] == '\0') {
      if (((_DAT_00890968 < fStack_104) && (fStack_104 < (float)piStack_108)) &&
         (((float)piStack_10c == _DAT_00890968 && (!bVar1)))) {
        FUN_0051a0a0(fStack_104);
        FUN_006547a0(auStack_4c,4);
        ppiVar11 = &piStack_108;
        (**(code **)(*param_2 + 0x20))(ppiVar11);
        cVar3 = FUN_005790e0(ppiVar11);
        if (cVar3 != '\0') {
          iVar7 = *piStack_108;
          uVar4 = FUN_0056bc60(0x556ed1b2,0,0x9d73bc15,0,0,5);
          (**(code **)(iVar7 + 4))(uVar4);
        }
        goto LAB_0058c106;
      }
      cVar3 = FUN_00404ac0();
      if ((cVar3 != '\0') && ((char)piVar5[8] == '\0')) {
        uVar4 = FUN_0056bc60(0xf8ed7926);
        uVar4 = FUN_0056bc60(0x82e4dafd,uVar4);
        FUN_004647e0(auStack_ec,0x40,"%s\n%s",uVar4);
        ppiVar11 = &piStack_10c;
        (**(code **)(*param_2 + 0x20))(ppiVar11);
        cVar3 = FUN_005790e0(ppiVar11);
        if (cVar3 != '\0') {
          (**(code **)(*piStack_10c + 4))(auStack_ec,0,0x8ab83edb,0,0,5);
        }
        goto LAB_0058c106;
      }
      iStack_100 = FUN_007c4b80();
      FUN_006547a0(auStack_fc,4);
      iVar7 = FUN_005dbef0();
      if ((piVar5[4] < 2) || (piVar5[4] != iVar7)) {
        uVar4 = *(undefined4 *)(&DAT_008f3c1c + piVar5[4] * 4);
      }
      else {
        uVar4 = 0xeac720d3;
      }
      iVar7 = FUN_0056bb80();
      if (iVar7 == 0) {
        iVar7 = FUN_0056bb80();
      }
      FUN_004647e0(auStack_ac,0x20,iVar7,auStack_fc);
      uVar4 = FUN_0056bc60(uVar4,auStack_ac);
      FUN_004647e0(auStack_8c,0x40,"%s\n%s",uVar4);
      ppiVar11 = &piStack_10c;
      (**(code **)(*param_2 + 0x20))(ppiVar11);
      cVar3 = FUN_005790e0(ppiVar11);
      if (cVar3 == '\0') goto LAB_0058c106;
      iVar7 = *piStack_10c;
      puVar8 = auStack_8c;
    }
    else {
      iVar7 = FUN_0056bb80();
      if (iVar7 == 0) {
        iVar7 = FUN_0056bb80();
      }
      iVar9 = FUN_0056bb80();
      if (iVar9 == 0) {
        iVar9 = FUN_0056bb80();
      }
      FUN_004647e0(auStack_ec,0x40,"%s\n%s",iVar9,iVar7);
      (**(code **)(*param_2 + 0x20))();
      piVar5 = (int *)FUN_005d59f0(&LAB_005650b0);
      if (piVar5 == (int *)0x0) goto LAB_0058c106;
      iVar7 = *piVar5;
      puVar8 = auStack_ec;
    }
  }
  else {
    (**(code **)(*param_2 + 0x20))();
    piVar5 = (int *)FUN_005d59f0(&LAB_005650b0);
joined_r0x0058be5d:
    if (piVar5 == (int *)0x0) goto LAB_0058c106;
    puVar8 = (undefined1 *)FUN_0056bb80();
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = (undefined1 *)FUN_0056bb80();
    }
    iVar7 = *piVar5;
  }
  (**(code **)(iVar7 + 4))(puVar8,0,0x8ab83edb,0,0,5);
LAB_0058c106:
  cVar3 = FUN_00516b50("Pause_Main.fng");
  if (cVar3 != '\0') {
    iStack_100 = FUN_00627400(8);
    uStack_4 = 0;
    if (iStack_100 != 0) {
      FUN_00625870();
    }
  }
  ExceptionList = pvStack_c;
  return;
}

