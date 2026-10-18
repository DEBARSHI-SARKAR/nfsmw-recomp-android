/* speed.exe 0053ab30 FUN_0053ab30; analysis pseudocode, not buildable source.
 * calls 005b7580 FUN_005b7580
 * calls 005868e0 FUN_005868e0
 * calls 0079ca30 FUN_0079ca30
 * calls 005252d0 FUN_005252d0
 * calls 00516af0 FUN_00516af0
 * calls 00652ad0 _malloc
 * calls 005929d0 FUN_005929d0
 * calls 00591d90 FUN_00591d90
 * calls 00513860 FUN_00513860
 * calls 005926b0 FUN_005926b0
 * calls 00586760 FUN_00586760
 * calls 005b5b70 FUN_005b5b70
 * calls 00514c70 FUN_00514c70
 * calls 00572070 FUN_00572070
 * calls 00525220 FUN_00525220
 * calls 005b8550 FUN_005b8550
 * calls 00515e20 FUN_00515e20
 * calls 005b8400 FUN_005b8400
 * calls 00592710 FUN_00592710
 * calls 005b1360 FUN_005b1360
 * calls 0051dcf0 FUN_0051dcf0
 * calls 005af1c0 FUN_005af1c0
 * calls 005922b0 FUN_005922b0
 * calls 005137f0 FUN_005137f0
 * calls 0056bc10 FUN_0056bc10
 * calls 0078bbe0 FUN_0078bbe0
 */

void __fastcall FUN_0053ab30(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  byte bStack_35;
  undefined4 *puStack_30;
  undefined1 auStack_24 [36];
  
  FUN_005137f0(*(undefined4 *)(param_1 + 0x10),param_1 + 0x194,param_1 + 0x150,param_1 + 0x1d8);
  FUN_00513860(*(undefined4 *)(param_1 + 0x10),param_1 + 0x194,param_1 + 0x150,param_1 + 0x1d8,
               *(undefined4 *)(DAT_0091ca80 + 0x1c),*(undefined4 *)(DAT_0091ca80 + 0x20),
               *(undefined4 *)(DAT_0091ca80 + 0x24));
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xb2756356,*(undefined4 *)(DAT_0091ca80 + 0x18));
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xeb406fec,DAT_0091ca80 + 0x2a);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x3b32a3e,&DAT_0089d764,
               *(undefined4 *)(DAT_0091ca80 + 0x3c));
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(char *)(DAT_0091cf90 + 0x15f) == '\0') {
    if (((iVar3 == 0) || (iVar3 = FUN_00516af0(iVar3), iVar3 == 0)) ||
       (iVar3 = FUN_005b8550(0x3755e286), iVar3 == 0)) goto LAB_0053ac5c;
    uVar9 = 0x16a259;
  }
  else {
    if (((iVar3 == 0) || (iVar3 = FUN_00516af0(iVar3), iVar3 == 0)) ||
       (iVar3 = FUN_005b8550(0x3755e286), iVar3 == 0)) goto LAB_0053ac5c;
    uVar9 = 0x1ca7c0;
  }
  iVar3 = FUN_005b1360(uVar9);
  if (iVar3 != 0) {
    FUN_005b8400(iVar3,0);
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
LAB_0053ac5c:
  bStack_35 = 0;
  do {
    puStack_30 = _malloc(0x2c);
    if (puStack_30 == (undefined4 *)0x0) {
      puStack_30 = (undefined4 *)0x0;
    }
    else {
      puVar5 = puStack_30 + 3;
      *puStack_30 = &PTR_FUN_0089d348;
      *puVar5 = puVar5;
      puStack_30[4] = puVar5;
      puStack_30[5] = 0;
      puStack_30[9] = 0;
      puStack_30[8] = 0;
      puStack_30[7] = 0;
      puStack_30[6] = 0;
      *(undefined1 *)(puStack_30 + 10) = 1;
    }
    FUN_00515e20(auStack_24,0x24,"Option_%d",bStack_35 + 1);
    pcVar10 = *(char **)(param_1 + 0x10);
    uVar9 = FUN_005af1c0(auStack_24);
    if (pcVar10 == (char *)0x0) {
LAB_0053ad56:
      iVar3 = 0;
    }
    else {
      pcVar4 = pcVar10;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      if (pcVar4 == pcVar10 + 1) goto LAB_0053ad56;
      if (DAT_0091d218 < 1) {
        iVar3 = FUN_005b5b70(pcVar10);
        if (iVar3 == 0) {
          iVar3 = FUN_005b7580(pcVar10);
          if (iVar3 == 0) goto LAB_0053ad56;
          goto LAB_0053ad28;
        }
      }
      else {
        FUN_00572070();
        iVar3 = FUN_00591d90(pcVar10);
LAB_0053ad28:
        if (iVar3 == 0) goto LAB_0053ad56;
      }
      iVar3 = FUN_005b8550(uVar9);
      if ((iVar3 == 0) || (*(int *)(iVar3 + 0x18) != 2)) goto LAB_0053ad56;
    }
    puVar5 = _malloc(0x10);
    if (puVar5 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_0089c2bc;
      puVar5[3] = iVar3;
      piVar6 = puVar5 + 1;
    }
    puVar5 = (undefined4 *)puStack_30[4];
    *puVar5 = piVar6;
    puStack_30[4] = piVar6;
    *piVar6 = (int)(puStack_30 + 3);
    piVar6[1] = (int)puVar5;
    FUN_005922b0(puStack_30);
    if (bStack_35 == 0) {
      FUN_005929d0(puStack_30);
    }
    bStack_35 = bStack_35 + 1;
    if (2 < bStack_35) {
      uVar7 = 1;
      FUN_0079ca30();
      iVar3 = FUN_0078bbe0();
      if (iVar3 == 0) {
        if ((((*(int *)(param_1 + 0x10) != 0) &&
             (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 != 0)) &&
            (iVar3 = FUN_005b8550(0x6745352), iVar3 != 0)) &&
           (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x2400001,
           *(int *)(iVar3 + 0x18) == 5)) {
          iVar8 = *(int *)(iVar3 + 100);
          iVar3 = *(int *)(iVar3 + 0x60);
          if (0 < iVar3) {
            do {
              FUN_00514c70(iVar8);
              iVar8 = *(int *)(iVar8 + 4);
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
      }
      else {
        puVar5 = _malloc(0x1c);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar1 = puVar5 + 3;
          *puVar1 = puVar1;
          puVar5[4] = puVar1;
          *(undefined1 *)(puVar5 + 5) = 1;
          *puVar5 = &PTR_FUN_0089df90;
          puVar5[6] = 0;
        }
        uVar11 = 0;
        uVar9 = FUN_0056bc10(0x69b36b15,0);
        FUN_0051dcf0(uVar9,uVar11);
        puVar5[6] = 0xc3dad747;
        FUN_005868e0(puVar5);
        FUN_00592710(puVar5);
        uVar7 = 2;
      }
      do {
        FUN_00515e20(auStack_24,0x24,"Option_%d",uVar7);
        uVar9 = *(undefined4 *)(param_1 + 0x10);
        uVar11 = FUN_005af1c0(auStack_24,&DAT_008941f8,&DAT_0089dfa0);
        FUN_005252d0(uVar9,uVar11);
        uVar7 = uVar7 + 1;
      } while (uVar7 < 4);
      if (*(int *)(param_1 + 0x58) != 0) {
        FUN_00586760(0x249db7b7);
      }
      FUN_005926b0(1);
      return;
    }
  } while( true );
}

