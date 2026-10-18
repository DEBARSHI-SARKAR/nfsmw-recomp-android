/* speed.exe 00547730 FUN_00547730; analysis pseudocode, not buildable source.
 * calls 00593910 thunk_FUN_005931b0
 * calls 00573140 FUN_00573140
 * calls 00590500 FUN_00590500
 * calls 006547a0 FUN_006547a0
 * calls 00588250 FUN_00588250
 * calls 005fb850 FUN_005fb850
 * calls 00516af0 FUN_00516af0
 * calls 00525220 FUN_00525220
 * calls 0045d3a0 FUN_0045d3a0
 * calls 005faa20 FUN_005faa20
 * calls 005252d0 FUN_005252d0
 * calls 005fc030 FUN_005fc030
 * calls 005b8550 FUN_005b8550
 * calls 0056e090 FUN_0056e090
 * calls 005fba00 FUN_005fba00
 * calls 00514cc0 FUN_00514cc0
 * calls 0056e560 FUN_0056e560
 * calls 007c4b80 FUN_007c4b80
 * calls 005fab40 FUN_005fab40
 * calls 005dca40 FUN_005dca40
 * calls 00527d40 FUN_00527d40
 * calls 0056bc10 FUN_0056bc10
 * calls 00514c70 FUN_00514c70
 * calls 00546400 FUN_00546400
 * calls 005fb920 FUN_005fb920
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00547730(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  undefined1 *puVar15;
  float local_4c;
  undefined1 local_40 [64];
  
  thunk_FUN_005931b0();
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x18) + 4;
  }
  uVar9 = *(undefined4 *)(param_1 + -0x1c);
  uVar7 = FUN_0045d3a0(iVar6);
  FUN_005252d0(uVar9,0x5a856a34,&DAT_0089d764,uVar7);
  uVar9 = *(undefined4 *)(param_1 + -0x1c);
  uVar7 = FUN_0045d3a0(0);
  FUN_005252d0(uVar9,0x2d4d22c8,&DAT_0089d764,uVar7);
  FUN_00525220(*(undefined4 *)(param_1 + -0x1c),0x78008599,
               (-(uint)(*(char *)(param_1 + 0x189) != '\0') & 0x64d3cc13) + 0x6475236d);
  uVar9 = *(undefined4 *)(param_1 + -0x1c);
  uVar7 = FUN_00590500();
  uVar7 = FUN_0056bc10(0xce6b99b1,uVar7);
  FUN_005252d0(uVar9,0xb514e2d8,"%s %$d",uVar7);
  uVar9 = *(undefined4 *)(param_1 + -0x1c);
  uVar7 = FUN_0056bc10(0x73b79e0,*(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb4));
  FUN_005252d0(uVar9,0xf91a59f6,"%s %$d",uVar7);
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18);
    uVar7 = *(undefined4 *)(param_1 + -0x1c);
    fVar14 = (float10)FUN_005fb920();
    FUN_005252d0(uVar7,0x13c45e,&DAT_0089e71c,(double)fVar14);
    if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\x01') {
      uVar7 = FUN_0056bc10(0x8569a26a);
      fVar14 = (float10)FUN_005fb850();
      fVar14 = fVar14 * (float10)_DAT_00890d60;
    }
    else {
      uVar7 = FUN_0056bc10(0x867dcfd9);
      fVar14 = (float10)FUN_005fb850();
      fVar14 = fVar14 * (float10)_DAT_00890d60 * (float10)_DAT_0089b054;
    }
    uVar3 = *(undefined4 *)(param_1 + -0x1c);
    uVar8 = FUN_005fba00();
    FUN_005252d0(uVar3,0x18b36f,&DAT_0089d764,uVar8);
    FUN_005252d0(*(undefined4 *)(param_1 + -0x1c),0x80c9daa,"%$0.1f %s",(double)(float)fVar14,uVar7)
    ;
    uVar9 = FUN_0056e560("TRACKNAME_",uVar9);
    FUN_00525220(*(undefined4 *)(param_1 + -0x1c),0xf2cd475,uVar9);
    cVar5 = FUN_005fc030();
    FUN_00525220(*(undefined4 *)(param_1 + -0x1c),0x9b21,
                 (-(uint)(cVar5 != '\0') & 0xee0bb002) + 0x73c615a3);
    if (((*(int *)(param_1 + -0x1c) == 0) ||
        (iVar6 = FUN_00516af0(*(int *)(param_1 + -0x1c)), iVar6 == 0)) ||
       (iVar6 = FUN_005b8550(0x1c8fc866), iVar6 == 0)) {
      iVar6 = 0;
    }
    FUN_00514c70(iVar6);
    if (((*(int *)(param_1 + -0x1c) == 0) ||
        (iVar6 = FUN_00516af0(*(int *)(param_1 + -0x1c)), iVar6 == 0)) ||
       (iVar6 = FUN_005b8550(0x7af67920), iVar6 == 0)) {
      iVar6 = 0;
    }
    FUN_00514c70(iVar6);
    if (((*(int *)(param_1 + -0x1c) == 0) ||
        (iVar6 = FUN_00516af0(*(int *)(param_1 + -0x1c)), iVar6 == 0)) ||
       (iVar6 = FUN_005b8550(0xbbf970cd), iVar6 == 0)) {
      iVar6 = 0;
    }
    FUN_00514c70(iVar6);
    uVar9 = FUN_005fab40();
    iVar6 = FUN_005dca40(uVar9);
    iVar10 = FUN_005faa20();
    if ((((iVar10 == 0) || (iVar10 = FUN_005faa20(), iVar10 == 1)) ||
        (iVar10 = FUN_005faa20(), iVar10 == 2)) ||
       ((iVar10 = FUN_005faa20(), iVar10 == 3 || (iVar10 = FUN_005faa20(), iVar10 == 4)))) {
      if (*(float *)(iVar6 + 8) == _DAT_00890968) {
        uVar9 = *(undefined4 *)(param_1 + -0x1c);
        puVar15 = (undefined1 *)0x472aa00a;
        puVar11 = (undefined *)FUN_0056bc10(0x472aa00a);
      }
      else {
        FUN_007c4b80();
        FUN_006547a0(local_40,0);
        uVar9 = *(undefined4 *)(param_1 + -0x1c);
        puVar15 = local_40;
        puVar11 = &DAT_008941f8;
      }
      FUN_005252d0(uVar9,0x8fd41bb4,puVar11,puVar15);
    }
    else {
      uVar9 = *(undefined4 *)(param_1 + -0x1c);
      uVar7 = FUN_0056bc10(0x472aa00a);
      FUN_005252d0(uVar9,0x8fd41bb4,&DAT_008941f8,uVar7);
    }
    if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\x01') {
      uVar9 = FUN_0056bc10(0x8569a25f);
      uVar1 = *(ushort *)(iVar6 + 0xe);
      iVar10 = FUN_00527d40();
      uVar2 = *(ushort *)(iVar6 + 0xc);
      local_4c = ((float)uVar1 / (float)iVar10) * _DAT_0089b050;
      iVar6 = FUN_00527d40();
      fVar4 = ((float)uVar2 / (float)iVar6) * _DAT_0089b050;
    }
    else {
      uVar9 = FUN_0056bc10(0x8569ab44);
      uVar1 = *(ushort *)(iVar6 + 0xe);
      iVar10 = FUN_00527d40();
      uVar2 = *(ushort *)(iVar6 + 0xc);
      local_4c = ((float)uVar1 / (float)iVar10) * _DAT_008967e0;
      iVar6 = FUN_00527d40();
      fVar4 = ((float)uVar2 / (float)iVar6) * _DAT_008967e0;
    }
    FUN_005252d0(*(undefined4 *)(param_1 + -0x1c),0xebd7f926,"%$0.2f %s",(double)local_4c,uVar9);
    FUN_005252d0(*(undefined4 *)(param_1 + -0x1c),0xde9145fb,"%$0.2f %s",(double)fVar4,uVar9);
    uVar9 = *(undefined4 *)(param_1 + -0x1c);
    fVar14 = (float10)FUN_005fb920();
    FUN_005252d0(uVar9,0x763f4b5b,"%$0.0f",(double)fVar14);
    iVar6 = *(int *)(param_1 + -0x1c);
    uVar9 = FUN_005faa20();
    iVar10 = FUN_0056e090(uVar9);
    if (((iVar6 != 0) && (iVar6 = FUN_00516af0(iVar6), iVar6 != 0)) &&
       ((iVar6 = FUN_005b8550(0xf97ec5d5), iVar6 != 0 &&
        ((*(int *)(iVar6 + 0x18) == 1 && (*(int *)(iVar6 + 0x24) != iVar10)))))) {
      *(int *)(iVar6 + 0x24) = iVar10;
      *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x2400000;
    }
    iVar10 = 0;
    iVar6 = FUN_0045d3a0(0);
    if (0 < iVar6) {
      do {
        iVar6 = FUN_00588250(*(int *)(param_1 + 0x1c) + iVar10);
        iVar10 = iVar10 + 1;
        uVar9 = FUN_00573140("MEDAL_THUMB_%d",iVar10);
        if ((((*(int *)(param_1 + -0x1c) != 0) &&
             (iVar12 = FUN_00516af0(*(int *)(param_1 + -0x1c)), iVar12 != 0)) &&
            (iVar12 = FUN_005b8550(uVar9), iVar12 != 0)) &&
           (*(uint *)(iVar12 + 0x1c) = *(uint *)(iVar12 + 0x1c) | 0x2400001,
           *(int *)(iVar12 + 0x18) == 5)) {
          iVar13 = *(int *)(iVar12 + 100);
          iVar12 = *(int *)(iVar12 + 0x60);
          if (0 < iVar12) {
            do {
              FUN_00514c70(iVar13);
              iVar13 = *(int *)(iVar13 + 4);
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
        }
        if (iVar6 != 0) {
          if (*(char *)(iVar6 + 0x16) == '\0') {
            if (*(char *)(iVar6 + 0x17) != '\0') {
              if (((*(int *)(param_1 + -0x1c) == 0) ||
                  (iVar6 = FUN_00516af0(*(int *)(param_1 + -0x1c)), iVar6 == 0)) ||
                 (iVar6 = FUN_005b8550(uVar9), iVar6 == 0)) {
                iVar6 = 0;
              }
              FUN_00514cc0(iVar6);
              if (((*(int *)(param_1 + -0x1c) != 0) &&
                  (iVar6 = FUN_00516af0(*(int *)(param_1 + -0x1c)), iVar6 != 0)) &&
                 ((iVar6 = FUN_005b8550(uVar9), iVar6 != 0 && (*(int *)(iVar6 + 0x18) == 1)))) {
                iVar12 = 0x28feadd;
                goto LAB_00547d9b;
              }
            }
          }
          else {
            if (((*(int *)(param_1 + -0x1c) == 0) ||
                (iVar6 = FUN_00516af0(*(int *)(param_1 + -0x1c)), iVar6 == 0)) ||
               (iVar6 = FUN_005b8550(uVar9), iVar6 == 0)) {
              iVar6 = 0;
            }
            FUN_00514cc0(iVar6);
            if (((*(int *)(param_1 + -0x1c) != 0) &&
                (iVar6 = FUN_00516af0(*(int *)(param_1 + -0x1c)), iVar6 != 0)) &&
               ((iVar6 = FUN_005b8550(uVar9), iVar6 != 0 && (*(int *)(iVar6 + 0x18) == 1)))) {
              iVar12 = 0x18ed48;
LAB_00547d9b:
              if (*(int *)(iVar6 + 0x24) != iVar12) {
                *(int *)(iVar6 + 0x24) = iVar12;
                *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x2400000;
              }
            }
          }
        }
        iVar6 = FUN_0045d3a0(0);
      } while (iVar10 < iVar6);
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x18) + 4;
    }
    iVar6 = FUN_0045d3a0(iVar6);
    if ((*(int *)(param_1 + 0x18c) != iVar6 + -1) && (*(int *)(param_1 + 0x18) != 0)) {
      FUN_00546400(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18),*(undefined4 *)(param_1 + 0x184)
                   ,0,0);
      if (*(int *)(param_1 + 0x18) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x18) + 4;
      }
      iVar6 = FUN_0045d3a0(iVar6);
      *(int *)(param_1 + 0x18c) = iVar6 + -1;
    }
  }
  return;
}

