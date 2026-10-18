/* speed.exe 0052e0c0 FUN_0052e0c0; analysis pseudocode, not buildable source.
 * calls 005913b0 FUN_005913b0
 * calls 0056db00 FUN_0056db00
 * calls 006547a0 FUN_006547a0
 * calls 00573140 FUN_00573140
 * calls 0056bc10 FUN_0056bc10
 * calls 00591d90 FUN_00591d90
 * calls 005b8550 FUN_005b8550
 * calls 00590500 FUN_00590500
 * calls 00514c70 FUN_00514c70
 * calls 005252d0 FUN_005252d0
 * calls 00572070 FUN_00572070
 * calls 00516af0 FUN_00516af0
 */

void __fastcall FUN_0052e0c0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 local_10 [16];
  
  iVar6 = *(int *)(DAT_0091cf90 + 0x10);
  uVar10 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_0056bc10(0xe21d083c,iVar6 + 0x314);
  FUN_005252d0(uVar10,0x1232703a,uVar2);
  uVar10 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_0056db00();
  uVar2 = FUN_0056bc10(0x6031106e,uVar2);
  FUN_005252d0(uVar10,0xe3da78e7,uVar2);
  uVar10 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_00590500();
  uVar2 = FUN_0056bc10(0x364e4525,uVar2);
  FUN_005252d0(uVar10,0xe3da78e8,uVar2);
  iVar9 = 1;
  do {
    iVar3 = (iVar9 - 1U & 0xffff) * 0x38 + 0x9b0c + iVar6;
    if (*(int *)(iVar3 + 0x14) == 0) {
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      iVar3 = FUN_00573140("BUTTON_%d",iVar9);
      FUN_00572070(uVar10);
      iVar4 = FUN_00591d90(uVar10);
      if (iVar4 != 0) {
        iVar8 = *(int *)(iVar4 + 0x94);
        iVar7 = 0;
        if (iVar8 != 0) {
          piVar5 = *(int **)(iVar4 + 0x90);
          do {
            if (*(int *)(*piVar5 + 0x10) == iVar3) {
              iVar7 = *piVar5;
            }
            piVar5 = piVar5 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          if (iVar7 != 0) {
            *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x4000000;
          }
        }
      }
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_0056bc10(0xe3274304);
      uVar2 = FUN_00573140("CAR_USED_%d",iVar9,uVar2);
      FUN_005252d0(uVar10,uVar2);
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_00573140("BOUNTY_%d",iVar9,&DAT_00890978);
      FUN_005252d0(uVar10,uVar2);
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_00573140("PURSUIT_ID_%d",iVar9,&DAT_00890978);
      FUN_005252d0(uVar10,uVar2);
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_00573140("PURSUIT_LENGTH_%d",iVar9,&DAT_00890978);
      FUN_005252d0(uVar10,uVar2);
    }
    else {
      FUN_006547a0(local_10,0);
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_005913b0(*(undefined4 *)(iVar3 + 0xc));
      uVar2 = FUN_0056bc10(uVar2);
      uVar2 = FUN_0056bc10(0x69eab50f,uVar2);
      uVar2 = FUN_00573140("CAR_USED_%d",iVar9,uVar2);
      FUN_005252d0(uVar10,uVar2);
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_0056bc10(0x60c058a,*(undefined4 *)(iVar3 + 0x10));
      uVar2 = FUN_00573140("BOUNTY_%d",iVar9,uVar2);
      FUN_005252d0(uVar10,uVar2);
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_0056bc10(0x41474fb1,iVar3);
      uVar2 = FUN_00573140("PURSUIT_ID_%d",iVar9,uVar2);
      FUN_005252d0(uVar10,uVar2);
      uVar10 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_0056bc10(0x36175146,local_10);
      uVar2 = FUN_00573140("PURSUIT_LENGTH_%d",iVar9,uVar2);
      FUN_005252d0(uVar10,uVar2);
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
    }
    bVar1 = iVar9 < 5;
    iVar9 = iVar9 + 1;
  } while (bVar1);
  if (*(int *)(param_1 + 300) == 0) {
    if ((((*(int *)(param_1 + 0x10) != 0) &&
         (iVar6 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar6 != 0)) &&
        (iVar6 = FUN_005b8550(0xeb5e7757), iVar6 != 0)) &&
       (*(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x2400001, *(int *)(iVar6 + 0x18) == 5))
    {
      iVar9 = *(int *)(iVar6 + 100);
      iVar6 = *(int *)(iVar6 + 0x60);
      if (0 < iVar6) {
        do {
          FUN_00514c70(iVar9);
          iVar9 = *(int *)(iVar9 + 4);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    if (((*(int *)(param_1 + 0x10) != 0) &&
        (iVar6 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar6 != 0)) &&
       ((iVar6 = FUN_005b8550(0x73dcb662), iVar6 != 0 &&
        (*(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x2400001, *(int *)(iVar6 + 0x18) == 5)
        ))) {
      iVar9 = *(int *)(iVar6 + 100);
      iVar6 = *(int *)(iVar6 + 0x60);
      if (0 < iVar6) {
        do {
          FUN_00514c70(iVar9);
          iVar9 = *(int *)(iVar9 + 4);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  return;
}

