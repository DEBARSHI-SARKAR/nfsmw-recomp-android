/* speed.exe 005a2ad0 FUN_005a2ad0; analysis pseudocode, not buildable source.
 * calls 00524a10 FUN_00524a10
 * calls 00598a60 FUN_00598a60
 * calls 00514c70 FUN_00514c70
 * calls 005d51f0 FUN_005d51f0
 * calls 005ddec0 FUN_005ddec0
 * calls 005fe090 FUN_005fe090
 * calls 004519d0 FUN_004519d0
 * calls 005dbed0 FUN_005dbed0
 * calls 007c4b80 FUN_007c4b80
 * calls 005faa20 FUN_005faa20
 * calls 005fab40 FUN_005fab40
 * calls 00460bf0 FUN_00460bf0
 * calls 005252d0 FUN_005252d0
 * calls 00516e10 FUN_00516e10
 * calls 004647e0 FUN_004647e0
 * calls 006547a0 FUN_006547a0
 * calls 005dbef0 FUN_005dbef0
 * calls 0056bb80 FUN_0056bb80
 * calls 005fb920 FUN_005fb920
 * calls 00524850 FUN_00524850
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a2ad0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar9;
  float fStack_9c;
  float fStack_98;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [68];
  
  iVar2 = FUN_00516e10();
  *(undefined1 *)(iVar2 + 1) = 1;
  if (*(int *)(param_1 + 0x34) == 2) {
    iVar2 = FUN_0056bb80();
    fVar9 = extraout_ST0;
    if (iVar2 == 0) {
      iVar2 = FUN_0056bb80();
      fVar9 = extraout_ST0_00;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = FUN_00460bf0("SPEEDTRAP_SPEED","%$0.0f %s",(double)fVar9,iVar2);
    FUN_005252d0(uVar7,uVar3);
    iVar2 = FUN_0056bb80();
    if (iVar2 == 0) {
      iVar2 = FUN_0056bb80();
    }
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = FUN_007c4b80();
    uVar3 = FUN_00460bf0("BOUNTY_TEXT",iVar2,uVar3);
    FUN_005252d0(uVar7,uVar3);
  }
  else {
    piVar4 = (int *)FUN_005dbed0(0);
    iVar6 = 0;
    iVar2 = FUN_005dbef0();
    if (0 < iVar2) {
      do {
        piVar5 = (int *)FUN_005dbed0(iVar6);
        piVar8 = piVar4;
        for (iVar2 = 0x65; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar8 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar8 = piVar8 + 1;
        }
        if ((*piVar4 == 0) ||
           (iVar2 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar4), iVar2 == 0))
        {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = *(int **)(iVar2 + 4);
        }
        cVar1 = (**(code **)(*piVar5 + 0x24))();
        if (cVar1 != '\0') break;
        iVar6 = iVar6 + 1;
        iVar2 = FUN_005dbef0();
      } while (iVar6 < iVar2);
    }
    fVar9 = (float10)FUN_005fb920();
    fStack_98 = (float)piVar4[0x48];
    fStack_9c = (float)piVar4[0x41] * _DAT_008967e0;
    if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\x01') {
      fStack_9c = fStack_9c * _DAT_008a0298;
    }
    else {
      fStack_98 = fStack_98 * _DAT_008a0294 * _DAT_008967e0;
    }
    FUN_005fe090();
    FUN_007c4b80();
    FUN_006547a0(auStack_68,0);
    FUN_005ddec0();
    FUN_007c4b80();
    FUN_006547a0(auStack_88,0);
    iVar2 = FUN_0056bb80();
    if (iVar2 == 0) {
      iVar2 = FUN_0056bb80();
    }
    iVar6 = FUN_0056bb80();
    if (iVar6 == 0) {
      iVar6 = FUN_0056bb80();
    }
    FUN_004647e0(auStack_48,0x40,"%s %s %$0.0f %s",auStack_88,iVar6,(double)fStack_9c,iVar2);
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = FUN_00460bf0("TOLL_BOOTH_GROUP",0x5079c8f8);
    cVar1 = FUN_00524a10(uVar7,uVar3);
    if (cVar1 == '\0') {
      uVar7 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = FUN_00460bf0("RIVAL_GROUP",0x5079c8f8);
      cVar1 = FUN_00524a10(uVar7,uVar3);
      if (cVar1 == '\0') {
        if ((*(int *)(DAT_0091e000 + 0x1968) == 0) || (iVar2 = FUN_005faa20(), iVar2 != 5)) {
          FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xab6aafdd,&DAT_008941f8,auStack_48);
        }
        else {
          iVar2 = FUN_0056bb80();
          if (iVar2 == 0) {
            iVar2 = FUN_0056bb80();
          }
          iVar6 = FUN_0056bb80();
          if (iVar6 == 0) {
            iVar6 = FUN_0056bb80();
          }
          FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xab6aafdd,"%s: %$0.0f %s",iVar6,
                       (double)fStack_98,iVar2);
        }
        uVar7 = 0x3d1773dd;
      }
      else if ((*(int *)(DAT_0091e000 + 0x1968) == 0) || (iVar2 = FUN_005faa20(), iVar2 != 5)) {
        FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x37bea03b,&DAT_008941f8,auStack_48);
        uVar7 = 0x9f4df5bb;
      }
      else {
        iVar2 = FUN_0056bb80();
        if (iVar2 == 0) {
          iVar2 = FUN_0056bb80();
        }
        iVar6 = FUN_0056bb80();
        if (iVar6 == 0) {
          iVar6 = FUN_0056bb80();
        }
        FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x37bea03b,"%s: %$0.0f %s",iVar6,
                     (double)fStack_98,iVar2);
        uVar7 = 0x9f4df5bb;
      }
    }
    else {
      iVar2 = FUN_0056bb80();
      if (iVar2 == 0) {
        iVar2 = FUN_0056bb80();
      }
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x8bb39726,"%$0.0f %s",(double)fStack_9c,iVar2);
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x424bb244,&DAT_008941f8,auStack_88);
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x8a7f929c,&PTR_LAB_008a1ba8,auStack_68);
      uVar7 = 0x42423e94;
    }
    if (((float)fVar9 <= _DAT_00890968) || (*(int *)(DAT_0091e000 + 0x1964) == 0)) {
      uVar7 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),uVar7);
      FUN_00514c70(uVar7);
    }
    else {
      iVar2 = FUN_0056bb80();
      if (iVar2 == 0) {
        iVar2 = FUN_0056bb80();
      }
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),uVar7,"%s: %$0.0f",iVar2,(double)(float)fVar9);
    }
  }
  if (*(int *)(DAT_0091e000 + 0x1968) != 0) {
    iVar2 = FUN_004519d0("19.8.31");
    iVar6 = FUN_005fab40();
    if (iVar6 == iVar2) {
      FUN_00598a60(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x417b2601,0x1fab5998,0x4c54b7ea)
      ;
      *(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) =
           *(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) | 0x2000;
    }
  }
  return;
}

