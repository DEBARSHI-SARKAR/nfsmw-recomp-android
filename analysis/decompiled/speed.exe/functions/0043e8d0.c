/* speed.exe 0043e8d0 FUN_0043e8d0; analysis pseudocode, not buildable source.
 * calls 00602770 FUN_00602770
 * calls 00411240 FUN_00411240
 * calls 005d59f0 FUN_005d59f0
 * calls 0041ecd0 FUN_0041ecd0
 * calls 00430e60 FUN_00430e60
 * calls 004269a0 FUN_004269a0
 * calls 00434240 FUN_00434240
 * calls 005cc240 FUN_005cc240
 * calls 005eda20 FUN_005eda20
 * calls 005fbe70 FUN_005fbe70
 * calls 004059c0 FUN_004059c0
 * calls 005d0370 FUN_005d0370
 * calls 0041ba30 FUN_0041ba30
 * calls 0043e770 FUN_0043e770
 * calls 0041c4e0 FUN_0041c4e0
 * calls 0065faf0 FUN_0065faf0
 * calls 0043dd30 FUN_0043dd30
 */

void __fastcall FUN_0043e8d0(int param_1)

{
  bool bVar1;
  bool bVar2;
  void **ppvVar3;
  char cVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 uStack_5c;
  int iStack_58;
  int *local_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 auStack_44 [2];
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00869528;
  pvStack_c = ExceptionList;
  puVar14 = *(undefined4 **)(param_1 + 200);
  local_50 = (int *)0x0;
  ExceptionList = &pvStack_c;
  ppvVar3 = &pvStack_c;
  if (puVar14 != puVar14 + *(int *)(param_1 + 0xd0)) {
    do {
      piVar7 = (int *)*puVar14;
      cVar4 = (**(code **)(*piVar7 + 0x7c))();
      cVar5 = (**(code **)(*piVar7 + 0x88))();
      if ((cVar5 == '\0') || (cVar4 != '\0')) {
        bVar1 = false;
        piVar6 = (int *)(**(code **)(*piVar7 + 0xac))();
        piVar6 = (int *)(**(code **)(*piVar6 + 0xa0))();
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)(**(code **)(*piVar7 + 0xac))();
          iVar8 = (**(code **)(*piVar6 + 0xa4))();
          if (iVar8 != 0) {
            if (cVar4 != '\0') {
              piVar6 = (int *)(**(code **)(*piVar7 + 0xac))();
              piVar6 = (int *)(**(code **)(*piVar6 + 0xa4))();
              piVar6 = (int *)(**(code **)(*piVar6 + 0x1c))();
              if (piVar6 != (int *)0x0) {
                (**(code **)(*piVar6 + 0x9c))(piVar7);
              }
            }
            piVar6 = (int *)(**(code **)(*piVar7 + 0xac))();
            piVar6 = (int *)(**(code **)(*piVar6 + 0xa4))();
            (**(code **)(*piVar6 + 0xc))(piVar7);
            goto LAB_0043e9da;
          }
        }
        else {
          (**(code **)(*piVar6 + 0x7c))(piVar7);
LAB_0043e9da:
          bVar1 = true;
        }
        if (((DAT_0091e000 == 0) || (*(int *)(DAT_0091e000 + 0x1960) != 1)) ||
           ((*(int *)(DAT_0091e000 + 0x1968) != 0 && (cVar5 = FUN_005fbe70(), cVar5 != '\0')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (((cVar4 != '\0') && (bVar1)) && (bVar2)) {
          iVar8 = *(int *)(param_1 + 0xa8) + 1;
          *(int *)(param_1 + 0xa8) = iVar8;
          FUN_005eda20("cops_destroyed",(float)iVar8);
        }
      }
      else {
        piVar6 = (int *)(**(code **)(*piVar7 + 0x44))();
        if (*piVar6 == DAT_0092c4f4) {
          local_50 = piVar7;
        }
      }
      puVar14 = puVar14 + 1;
      ppvVar3 = ExceptionList;
    } while (puVar14 != (undefined4 *)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0) * 4));
  }
  ExceptionList = ppvVar3;
  piVar7 = (int *)FUN_0041ba30();
  uStack_38 = 0;
  uStack_4 = 0;
  iStack_58 = 0;
  piStack_3c = piVar7;
  if ((*(int *)(param_1 + 0xc0) != 0) &&
     (piVar6 = (int *)FUN_005d59f0(&LAB_004038e0), piVar6 != (int *)0x0)) {
    iStack_58 = (**(code **)(*piVar6 + 0x2c))();
  }
  piVar6 = (int *)**(int **)(param_1 + 0x128);
  uStack_5c = (uint)(uint3)uStack_5c;
  if (piVar6 != *(int **)(param_1 + 0x128)) {
    do {
      piVar12 = (int *)piVar6[2];
      piStack_4c = piVar12;
      if (((*(int *)(param_1 + 0xc0) != 0) && (iStack_58 != 0)) &&
         (cVar4 = (**(code **)(*piVar12 + 4))(iStack_58), cVar4 != '\0')) {
        (**(code **)(*piVar12 + 0x78))(*(undefined4 *)(param_1 + 0xc0));
        *(undefined4 *)(param_1 + 0xc0) = 0;
      }
      cVar4 = (**(code **)(*piVar12 + 0x70))();
      if (cVar4 == '\0') {
        FUN_0043e770(piVar12);
        if (*(int *)(param_1 + 0x94) < *(int *)(param_1 + 0x98)) {
          if (*(int *)(param_1 + 0xbc) == 0) {
            iVar8 = (**(code **)(*piVar12 + 0x50))();
            piVar7 = piStack_3c;
            if (iVar8 != 0) {
              iVar9 = FUN_005cc240(iVar8);
              iVar10 = FUN_005cc240("copheli");
              if (iVar9 == iVar10) {
                FUN_004269a0(piVar12);
                piVar7 = piStack_3c;
              }
              else {
                iVar8 = FUN_0041ecd0(iVar8);
                piVar7 = piStack_3c;
                if (iVar8 != 0) {
                  FUN_00430e60(piVar12,iVar8);
                  piVar7 = piStack_3c;
                }
              }
            }
            goto LAB_0043ebe3;
          }
        }
        else {
LAB_0043ebe3:
          if ((*(int *)(param_1 + 0xbc) == 0) &&
             (iVar8 = (**(code **)(*piVar12 + 0x84))(), 0 < iVar8)) {
            *(int *)(param_1 + 0xb8) = iVar8;
            *(int **)(param_1 + 0xbc) = piVar12;
          }
        }
        if ((*(int **)(param_1 + 0xbc) == piVar12) &&
           (iVar8 = (**(code **)(*piVar12 + 0x3c))(), iVar8 == 0)) {
          uStack_5c = CONCAT13(1,(uint3)uStack_5c);
          cVar4 = FUN_0043dd30(piVar12,*(undefined4 *)(param_1 + 0xb8),local_50,0);
          if (cVar4 == '\x01') {
            uVar11 = FUN_005cc240("Created");
            FUN_004059c0(&uStack_48);
            uStack_34 = uStack_48;
            uStack_2c = 0x14;
            uStack_28 = 0;
            uStack_24 = 1;
            uStack_30 = uVar11;
            FUN_0065faf0();
            *(undefined4 *)(param_1 + 0xbc) = 0;
            *(undefined4 *)(param_1 + 0xb8) = 0;
          }
          else {
            uVar11 = FUN_005cc240("Created");
            FUN_004059c0(auStack_44);
            uStack_20 = auStack_44[0];
            uStack_18 = 0x14;
            uStack_14 = 0;
            uStack_10 = 0;
            uStack_1c = uVar11;
            FUN_0065faf0();
          }
        }
      }
      else {
        iVar8 = FUN_0041c4e0(piStack_3c,piVar7[1],&piStack_4c);
        FUN_00434240(1);
        piVar7[1] = iVar8;
        **(int **)(iVar8 + 4) = iVar8;
        cVar4 = (**(code **)(*piVar12 + 0x74))();
        if (cVar4 != '\0') {
          *(undefined4 *)(param_1 + 0xa4) = 0;
          FUN_00602770(0);
        }
        cVar4 = (**(code **)(*piVar12 + 0x74))();
        if (cVar4 == '\0') {
          (**(code **)(*(int *)(param_1 + 0x54) + 0x10))(piVar12);
        }
        FUN_00411240(piVar12);
        piVar7 = piStack_3c;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)(param_1 + 0x128));
    if (uStack_5c._3_1_ != '\0') goto LAB_0043ecf3;
  }
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
LAB_0043ecf3:
  piVar6 = (int *)*piVar7;
  if (piVar6 != piVar7) {
    do {
      piVar7 = (int *)piVar6[2];
      (**(code **)(*(int *)(param_1 + 0x2c) + 0xc))(piVar7);
      iVar8 = (**(code **)(*piVar7 + 8))();
      if ((*(char *)(iVar8 + 0x2c) != '\0') &&
         (piVar12 = (int *)FUN_005d59f0(&LAB_00402820), piVar12 != (int *)0x0)) {
        iVar8 = (**(code **)(*piVar7 + 8))();
        (**(code **)(*piVar12 + 8))(*(undefined4 *)(iVar8 + 0x1c));
      }
      puVar14 = *(undefined4 **)(param_1 + 200);
      if (puVar14 != puVar14 + *(int *)(param_1 + 0xd0)) {
        do {
          piVar12 = (int *)*puVar14;
          piVar13 = (int *)(**(code **)(*piVar12 + 0xac))();
          iVar8 = (**(code **)(*piVar13 + 0xa0))();
          if ((iVar8 != 0) && (*(int *)(iVar8 + 4) == piVar7[1])) {
            (**(code **)(*piVar7 + 0x7c))(piVar12);
            piVar12 = (int *)FUN_005d59f0(&LAB_004038e0);
            if (piVar12 != (int *)0x0) {
              (**(code **)(*piVar12 + 0xc))();
            }
          }
          puVar14 = puVar14 + 1;
        } while (puVar14 != (undefined4 *)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0) * 4));
      }
      piVar7 = (int *)FUN_005d59f0(&LAB_004028f0);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))();
      }
      piVar6 = (int *)*piVar6;
      piVar7 = piStack_3c;
    } while (piVar6 != piStack_3c);
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    iVar8 = FUN_005cc240("AIPursuit");
    for (piVar6 = DAT_0092c668; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
      if (*piVar6 == iVar8) {
        (*(code *)piVar6[1])(0,0,0);
        break;
      }
    }
    piVar6 = (int *)FUN_005d59f0(&LAB_004038c0);
    (**(code **)(*(int *)(param_1 + 0x2c) + 8))(piVar6);
    if ((*(int *)(uStack_5c + 0x1c) != 0) &&
       (piVar12 = (int *)FUN_005d59f0(&LAB_00402820), piVar12 != (int *)0x0)) {
      (**(code **)(*piVar12 + 4))(piVar6);
    }
    piVar12 = (int *)FUN_005d59f0(&LAB_00402820);
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 4))(*(undefined4 *)(uStack_5c + 0x1c));
    }
    (**(code **)(*piVar6 + 0x78))(*(undefined4 *)(param_1 + 0xc0));
  }
  piVar6 = (int *)*piVar7;
  *piVar7 = (int)piVar7;
  uStack_4 = 0xffffffff;
  piVar7[1] = (int)piVar7;
  while (piVar6 != piVar7) {
    piVar12 = (int *)*piVar6;
    FUN_005d0370(piVar6,0xc,0);
    piVar6 = piVar12;
  }
  FUN_005d0370(piVar7,0xc,0);
  ExceptionList = pvStack_c;
  return;
}

