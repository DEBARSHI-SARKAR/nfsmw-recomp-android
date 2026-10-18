/* speed.exe 0052fb70 FUN_0052fb70; analysis pseudocode, not buildable source.
 * calls 00527ee0 FUN_00527ee0
 * calls 005e54f0 FUN_005e54f0
 * calls 005b8550 FUN_005b8550
 * calls 007c4b80 FUN_007c4b80
 * calls 005e55a0 FUN_005e55a0
 * calls 0056dff0 FUN_0056dff0
 * calls 00593910 thunk_FUN_005931b0
 * calls 005252d0 FUN_005252d0
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00516af0 FUN_00516af0
 * calls 0056e090 FUN_0056e090
 * calls 00573140 FUN_00573140
 * calls 00514cc0 FUN_00514cc0
 * calls 0056bc10 FUN_0056bc10
 * calls 005e56c0 FUN_005e56c0
 * calls 004647e0 FUN_004647e0
 * calls 0057fe60 FUN_0057fe60
 * calls 00590500 FUN_00590500
 * calls 00514c70 FUN_00514c70
 * calls 0056dea0 FUN_0056dea0
 * calls 00588250 FUN_00588250
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0052fb70(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  undefined1 auStack_20 [32];
  
  thunk_FUN_005931b0();
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x18) + 4;
  }
  uVar7 = *(undefined4 *)(param_1 + -0x1c);
  uVar6 = FUN_0045d3a0(iVar5);
  FUN_005252d0(uVar7,0x5a856a34,&DAT_0089d764,uVar6);
  uVar7 = *(undefined4 *)(param_1 + -0x1c);
  uVar6 = FUN_0045d3a0(0);
  FUN_005252d0(uVar7,0x2d4d22c8,&DAT_0089d764,uVar6);
  uVar7 = *(undefined4 *)(param_1 + -0x1c);
  uVar6 = FUN_00590500();
  uVar6 = FUN_0056bc10(0xce6b99b1,uVar6);
  FUN_005252d0(uVar7,0xb514e2d8,"%s %$d",uVar6);
  uVar7 = *(undefined4 *)(param_1 + -0x1c);
  uVar6 = FUN_0056bc10(0x73b79e0,*(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb4));
  FUN_005252d0(uVar7,0xf91a59f6,"%s %$d",uVar6);
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar1 + 8))();
    uVar7 = *(undefined4 *)(param_1 + -0x1c);
    if (iVar5 == 0) {
      puVar2 = (undefined4 *)piVar1[6];
      uVar6 = FUN_0056dea0(*puVar2,1);
      FUN_00527ee0(uVar7,0xf97ec5d5,uVar6);
      uVar7 = *(undefined4 *)(param_1 + -0x1c);
      fVar11 = (float10)FUN_005e54f0();
      FUN_005252d0(uVar7,0xb21d69bd,"%$0.0f",(double)fVar11);
      fVar3 = (float)puVar2[3];
      cVar4 = FUN_0056dff0(*puVar2);
      if (cVar4 != '\0') {
        fVar3 = fVar3 * _DAT_008970f0;
      }
      FUN_004647e0(auStack_20,0x20,"%$0.0f",(double)fVar3);
      uVar7 = *(undefined4 *)(param_1 + -0x1c);
      uVar6 = FUN_005e55a0(auStack_20,auStack_20);
      uVar6 = FUN_0057fe60(uVar6);
      uVar6 = FUN_0056bc10(uVar6);
      FUN_005252d0(uVar7,0x28049d6,uVar6);
    }
    else {
      uVar6 = FUN_0056e090(5);
      FUN_00527ee0(uVar7,0xf97ec5d5,uVar6);
      uVar7 = *(undefined4 *)(param_1 + -0x1c);
      fVar11 = (float10)FUN_005e56c0();
      FUN_005252d0(uVar7,0xb21d69bd,"%$0.0f",(double)fVar11);
      if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\x01') {
        iVar5 = FUN_007c4b80();
        uVar7 = 0x8569a25f;
      }
      else {
        iVar5 = FUN_007c4b80();
        uVar7 = 0x8569ab44;
      }
      uVar7 = FUN_0056bc10(uVar7);
      FUN_004647e0(auStack_20,0x20,"%$0.0f %s",(double)iVar5,uVar7);
      uVar7 = *(undefined4 *)(param_1 + -0x1c);
      uVar6 = FUN_0056bc10(0xb14018bd,auStack_20);
      FUN_005252d0(uVar7,0x28049d6,uVar6);
    }
    iVar10 = 0;
    iVar5 = FUN_0045d3a0(0);
    if (0 < iVar5) {
      do {
        iVar5 = FUN_00588250(*(int *)(param_1 + 0x1c) + iVar10);
        iVar10 = iVar10 + 1;
        uVar7 = FUN_00573140("MEDAL_THUMB_%d",iVar10);
        if ((((*(int *)(param_1 + -0x1c) != 0) &&
             (iVar8 = FUN_00516af0(*(int *)(param_1 + -0x1c)), iVar8 != 0)) &&
            (iVar8 = FUN_005b8550(uVar7), iVar8 != 0)) &&
           (*(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 0x2400001,
           *(int *)(iVar8 + 0x18) == 5)) {
          iVar9 = *(int *)(iVar8 + 100);
          iVar8 = *(int *)(iVar8 + 0x60);
          if (0 < iVar8) {
            do {
              FUN_00514c70(iVar9);
              iVar9 = *(int *)(iVar9 + 4);
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
        }
        if (iVar5 == 0) {
          iVar8 = *(int *)(param_1 + -0x1c);
LAB_0052ff6a:
          if (((iVar8 == 0) || (iVar5 = FUN_00516af0(iVar8), iVar5 == 0)) ||
             (iVar5 = FUN_005b8550(uVar7), iVar5 == 0)) {
            iVar5 = 0;
          }
          FUN_00514c70(iVar5);
        }
        else if (*(char *)(iVar5 + 0x16) == '\0') {
          iVar8 = *(int *)(param_1 + -0x1c);
          if (*(char *)(iVar5 + 0x17) == '\0') goto LAB_0052ff6a;
          if (((iVar8 == 0) || (iVar5 = FUN_00516af0(iVar8), iVar5 == 0)) ||
             (iVar5 = FUN_005b8550(uVar7), iVar5 == 0)) {
            iVar5 = 0;
          }
          FUN_00514cc0(iVar5);
          if ((((*(int *)(param_1 + -0x1c) != 0) &&
               (iVar5 = FUN_00516af0(*(int *)(param_1 + -0x1c)), iVar5 != 0)) &&
              (iVar5 = FUN_005b8550(uVar7), iVar5 != 0)) && (*(int *)(iVar5 + 0x18) == 1)) {
            iVar8 = 0x28feadd;
            goto LAB_0052ff56;
          }
        }
        else {
          if (((*(int *)(param_1 + -0x1c) == 0) ||
              (iVar5 = FUN_00516af0(*(int *)(param_1 + -0x1c)), iVar5 == 0)) ||
             (iVar5 = FUN_005b8550(uVar7), iVar5 == 0)) {
            iVar5 = 0;
          }
          FUN_00514cc0(iVar5);
          if (((*(int *)(param_1 + -0x1c) != 0) &&
              (iVar5 = FUN_00516af0(*(int *)(param_1 + -0x1c)), iVar5 != 0)) &&
             ((iVar5 = FUN_005b8550(uVar7), iVar5 != 0 && (*(int *)(iVar5 + 0x18) == 1)))) {
            iVar8 = 0x18ed48;
LAB_0052ff56:
            if (*(int *)(iVar5 + 0x24) != iVar8) {
              *(int *)(iVar5 + 0x24) = iVar8;
              *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x2400000;
            }
          }
        }
        iVar5 = FUN_0045d3a0(0);
      } while (iVar10 < iVar5);
    }
  }
  return;
}

