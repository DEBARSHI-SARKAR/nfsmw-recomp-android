/* speed.exe 0054dfa0 FUN_0054dfa0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00541f00 FUN_00541f00
 * calls 00515e20 FUN_00515e20
 * calls 005af1c0 FUN_005af1c0
 * calls 00541ea0 FUN_00541ea0
 * calls 00541e80 FUN_00541e80
 * calls 00541ff0 FUN_00541ff0
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 005b8400 FUN_005b8400
 * calls 00541e00 FUN_00541e00
 * calls 005252d0 FUN_005252d0
 */

void __thiscall FUN_0054dfa0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_20 [32];
  
  FUN_00515e20(local_20,0x20,"COLUMN3_%d",param_3);
  uVar1 = FUN_005af1c0(local_20);
  FUN_00515e20(local_20,0x20,"COLUMN4_%d",param_3);
  uVar2 = FUN_005af1c0(local_20);
  FUN_00515e20(local_20,0x20,"COLUMN5_%d",param_3);
  uVar3 = FUN_005af1c0(local_20);
  FUN_00515e20(local_20,0x20,"COLUMN6_%d",param_3);
  uVar4 = FUN_005af1c0(local_20);
  if (param_4 != 0) {
    if ((((*(int *)(param_1 + 0x10) != 0) &&
         (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 != 0)) &&
        (iVar5 = FUN_005b8550(uVar1), iVar5 != 0)) && (iVar5 = FUN_005b1360(param_4), iVar5 != 0)) {
      FUN_005b8400(iVar5,0);
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
    if (((*(int *)(param_1 + 0x10) != 0) &&
        (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 != 0)) &&
       ((iVar5 = FUN_005b8550(uVar2), iVar5 != 0 && (iVar5 = FUN_005b1360(param_4), iVar5 != 0)))) {
      FUN_005b8400(iVar5,0);
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
    if (((*(int *)(param_1 + 0x10) != 0) &&
        (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 != 0)) &&
       ((iVar5 = FUN_005b8550(uVar3), iVar5 != 0 && (iVar5 = FUN_005b1360(param_4), iVar5 != 0)))) {
      FUN_005b8400(iVar5,0);
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
    if ((((*(int *)(param_1 + 0x10) != 0) &&
         (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 != 0)) &&
        (iVar5 = FUN_005b8550(uVar4), iVar5 != 0)) && (iVar5 = FUN_005b1360(param_4), iVar5 != 0)) {
      FUN_005b8400(iVar5,0);
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
  }
  if (param_2 == 0) {
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),uVar1,&DAT_00890978);
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),uVar2,&DAT_00890978);
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),uVar3,&DAT_00890978);
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),uVar4,&DAT_00890978);
    if (((*(int *)(param_1 + 0x10) != 0) &&
        (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 != 0)) &&
       ((iVar5 = FUN_005b8550(uVar1), iVar5 != 0 && (iVar5 = FUN_005b1360(param_4), iVar5 != 0)))) {
      FUN_005b8400(iVar5,0);
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
    if (((*(int *)(param_1 + 0x10) != 0) &&
        (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 != 0)) &&
       ((iVar5 = FUN_005b8550(uVar2), iVar5 != 0 && (iVar5 = FUN_005b1360(param_4), iVar5 != 0)))) {
      FUN_005b8400(iVar5,0);
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
    if ((((*(int *)(param_1 + 0x10) != 0) &&
         (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 != 0)) &&
        (iVar5 = FUN_005b8550(uVar3), iVar5 != 0)) && (iVar5 = FUN_005b1360(param_4), iVar5 != 0)) {
      FUN_005b8400(iVar5,0);
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
    if (((*(int *)(param_1 + 0x10) != 0) &&
        (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 != 0)) &&
       ((iVar5 = FUN_005b8550(uVar4), iVar5 != 0 && (iVar5 = FUN_005b1360(param_4), iVar5 != 0)))) {
      FUN_005b8400(iVar5,0);
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
  }
  else {
    switch(*(undefined4 *)(param_1 + 0x3c)) {
    case 0:
      FUN_00541e00(uVar1,param_2);
      FUN_00541ff0(uVar2,*(undefined4 *)(param_2 + 0x10));
      FUN_00541ea0(uVar3,param_2);
      FUN_00541e80(uVar4,*(undefined4 *)(param_2 + 0x18));
      return;
    case 1:
      FUN_00541ff0(uVar1,*(undefined4 *)(param_2 + 0x10));
      FUN_00541ea0(uVar2,param_2);
      FUN_00541e80(uVar3,*(undefined4 *)(param_2 + 0x18));
      FUN_00541f00(uVar4,param_2);
      return;
    case 2:
      FUN_00541ea0(uVar1,param_2);
      FUN_00541e80(uVar2,*(undefined4 *)(param_2 + 0x18));
      FUN_00541f00(uVar3,param_2);
      FUN_00541e80(uVar4,*(int *)(param_2 + 8) + *(int *)(param_2 + 4));
      return;
    case 3:
      FUN_00541e80(uVar1,*(undefined4 *)(param_2 + 0x18));
      FUN_00541f00(uVar2,param_2);
      FUN_00541e80(uVar3,*(int *)(param_2 + 8) + *(int *)(param_2 + 4));
      FUN_00541e80(uVar4,*(undefined4 *)(param_2 + 4));
      return;
    case 4:
      FUN_00541f00(uVar1,param_2);
      FUN_00541e80(uVar2,*(int *)(param_2 + 8) + *(int *)(param_2 + 4));
      FUN_00541e80(uVar3,*(undefined4 *)(param_2 + 4));
      FUN_00541e80(uVar4,*(undefined4 *)(param_2 + 8));
      return;
    }
  }
  return;
}

