/* speed.exe 0052ffc0 FUN_0052ffc0; analysis pseudocode, not buildable source.
 * calls 00516be0 FUN_00516be0
 * calls 0056de70 FUN_0056de70
 * calls 00525220 FUN_00525220
 * calls 005b8550 FUN_005b8550
 * calls 00593910 thunk_FUN_005931b0
 * calls 005252d0 FUN_005252d0
 * calls 005e47c0 FUN_005e47c0
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00516af0 FUN_00516af0
 * calls 0057fe20 FUN_0057fe20
 * calls 00573140 FUN_00573140
 * calls 0056bc10 FUN_0056bc10
 * calls 00590500 FUN_00590500
 * calls 00514c70 FUN_00514c70
 * calls 00588250 FUN_00588250
 */

void __fastcall FUN_0052ffc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  thunk_FUN_005931b0();
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18) + 4;
  }
  uVar3 = *(undefined4 *)(param_1 + -0x1c);
  uVar2 = FUN_0045d3a0(iVar1);
  FUN_005252d0(uVar3,0x5a856a34,&DAT_0089d764,uVar2);
  uVar3 = *(undefined4 *)(param_1 + -0x1c);
  uVar2 = FUN_0045d3a0(0);
  FUN_005252d0(uVar3,0x2d4d22c8,&DAT_0089d764,uVar2);
  uVar3 = *(undefined4 *)(param_1 + -0x1c);
  uVar2 = FUN_00590500();
  uVar2 = FUN_0056bc10(0xce6b99b1,uVar2);
  FUN_005252d0(uVar3,0xb514e2d8,"%s %$d",uVar2);
  uVar3 = *(undefined4 *)(param_1 + -0x1c);
  uVar2 = FUN_0056bc10(0x73b79e0,*(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb4));
  FUN_005252d0(uVar3,0xf91a59f6,"%s %$d",uVar2);
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18) + 4;
  }
  iVar1 = FUN_0045d3a0(iVar1);
  uVar3 = FUN_005e47c0(iVar1 + -1);
  iVar1 = *(int *)(param_1 + -0x1c);
  iVar4 = FUN_0056de70(uVar3);
  if (iVar1 != 0) {
    iVar1 = FUN_00516af0(iVar1);
    if (iVar1 != 0) {
      iVar1 = FUN_005b8550(0xf97ec5d5);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 1)) && (*(int *)(iVar1 + 0x24) != iVar4)) {
        *(int *)(iVar1 + 0x24) = iVar4;
        *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x2400000;
      }
    }
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x18) + 0x16) == '\0') {
      uVar3 = 0x38091fa1;
    }
    else {
      uVar3 = 0xc5dd9d68;
    }
    FUN_00516be0(uVar3,*(undefined4 *)(param_1 + -0x1c),0xfffffffc,0xff);
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x18) + 4;
    }
    uVar3 = *(undefined4 *)(param_1 + -0x1c);
    uVar2 = FUN_0045d3a0(iVar1);
    uVar2 = FUN_0057fe20(uVar2);
    FUN_00525220(uVar3,0x28049d6,uVar2);
    iVar4 = 0;
    iVar1 = FUN_0045d3a0(0);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_00588250(*(int *)(param_1 + 0x1c) + iVar4);
        iVar4 = iVar4 + 1;
        uVar3 = FUN_00573140("CHECK_%d",iVar4);
        if (*(int *)(param_1 + -0x1c) != 0) {
          iVar5 = FUN_00516af0(*(int *)(param_1 + -0x1c));
          if (iVar5 != 0) {
            iVar5 = FUN_005b8550(uVar3);
            if (((iVar5 != 0) && (*(int *)(iVar5 + 0x18) == 1)) &&
               (*(int *)(iVar5 + 0x24) != 0x18ed48)) {
              *(undefined4 *)(iVar5 + 0x24) = 0x18ed48;
              *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x2400000;
            }
          }
        }
        if (iVar1 != 0) {
          if (*(int *)(param_1 + -0x1c) == 0) {
LAB_005301fc:
            iVar1 = 0;
          }
          else {
            iVar1 = FUN_00516af0(*(int *)(param_1 + -0x1c));
            if (iVar1 == 0) goto LAB_005301fc;
            iVar1 = FUN_005b8550(uVar3);
            if (iVar1 == 0) goto LAB_005301fc;
          }
          FUN_00514c70(iVar1);
        }
        iVar1 = FUN_0045d3a0(0);
      } while (iVar4 < iVar1);
    }
  }
  return;
}

