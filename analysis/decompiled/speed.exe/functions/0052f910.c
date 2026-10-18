/* speed.exe 0052f910 FUN_0052f910; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 0056e090 FUN_0056e090
 * calls 006547a0 FUN_006547a0
 * calls 00525220 FUN_00525220
 * calls 005b8550 FUN_005b8550
 * calls 007c4b80 FUN_007c4b80
 * calls 0056e560 FUN_0056e560
 * calls 005252d0 FUN_005252d0
 * calls 005fbad0 FUN_005fbad0
 * calls 005faa20 FUN_005faa20
 * calls 00516af0 FUN_00516af0
 * calls 0056e010 FUN_0056e010
 */

void __thiscall FUN_0052f910(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 local_40 [64];
  
  uVar1 = FUN_00573140("EVENT_ICON_%d",param_2);
  uVar2 = FUN_00573140("EVENT NAME_%d",param_2);
  uVar3 = FUN_00573140("DATA_%d",param_2);
  uVar4 = FUN_00573140("RIVAL_BEST_DATA_%d",param_2);
  iVar7 = *(int *)(param_1 + 0x10);
  uVar5 = FUN_005faa20();
  iVar6 = FUN_0056e090(uVar5);
  if (iVar7 != 0) {
    iVar7 = FUN_00516af0(iVar7);
    if (iVar7 != 0) {
      iVar7 = FUN_005b8550(uVar1);
      if (((iVar7 != 0) && (*(int *)(iVar7 + 0x18) == 1)) && (*(int *)(iVar7 + 0x24) != iVar6)) {
        *(int *)(iVar7 + 0x24) = iVar6;
        *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x2400000;
      }
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = FUN_005faa20();
  uVar5 = FUN_0056e010(uVar5);
  FUN_00525220(uVar1,uVar2,uVar5);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_0056e560("TRACKNAME_",param_3);
  FUN_00525220(uVar1,uVar3,uVar2);
  FUN_005fbad0();
  FUN_007c4b80();
  FUN_006547a0(local_40,0);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),uVar4,&DAT_008941f8,local_40);
  return;
}

