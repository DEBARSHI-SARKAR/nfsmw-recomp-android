/* speed.exe 005176d0 FUN_005176d0; analysis pseudocode, not buildable source.
 * calls 007f95c3 FUN_007f95c3
 * calls 007e9320 FUN_007e9320
 */

void __thiscall FUN_005176d0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar4 = *(int *)(param_2 + 8);
  if (iVar4 != 0) {
    iVar4 = iVar4 + param_2;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_007e9320();
    iVar1 = *(int *)(iVar1 + 0x18);
    iVar2 = FUN_007e9320();
    iVar5 = (*(int *)(iVar2 + 0x1c) + 0x60) * (iVar1 + 0x60) + iVar4;
    iVar1 = FUN_007e9320();
    iVar1 = *(int *)(iVar1 + 0x18);
    iVar2 = FUN_007e9320();
    iVar3 = *(int *)(iVar2 + 0x1c);
    iVar2 = FUN_007e9320();
    iVar4 = iVar4 + (*(int *)(iVar2 + 0x18) + 0x61) * 0x30;
    iVar2 = FUN_007e9320();
    iVar2 = (*(int *)(iVar2 + 0x18) / 2 + 0x31) * 0x18;
    iVar6 = iVar5 + iVar2;
    iVar2 = ((iVar3 + 0x60) / 2) * ((iVar1 + 0x60) / 2) + iVar5 + iVar2;
    iVar1 = FUN_007e9320();
    iVar1 = *(int *)(iVar1 + 0x18);
    if (*(int *)(param_3 + 8) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(int *)(param_3 + 8) + param_3;
    }
    iVar3 = FUN_007e9320();
    uVar8 = *(undefined4 *)(iVar3 + 0x1c);
    iVar3 = FUN_007e9320();
    uVar7 = *(undefined4 *)(iVar3 + 0x18);
    iVar3 = FUN_007e9320();
    iVar3 = *(int *)(iVar3 + 0x18) + 0x60;
  }
  else {
    iVar1 = FUN_007e9320();
    iVar1 = *(int *)(iVar1 + 0x18);
    iVar2 = FUN_007e9320();
    iVar6 = *(int *)(iVar2 + 0x1c) * iVar1 + iVar4;
    iVar1 = FUN_007e9320();
    iVar1 = *(int *)(iVar1 + 0x18);
    iVar2 = FUN_007e9320();
    iVar2 = (*(int *)(iVar2 + 0x1c) / 2) * (iVar1 / 2) + iVar6;
    iVar1 = FUN_007e9320();
    iVar1 = *(int *)(iVar1 + 0x18);
    if (*(int *)(param_3 + 8) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(int *)(param_3 + 8) + param_3;
    }
    iVar3 = FUN_007e9320();
    uVar8 = *(undefined4 *)(iVar3 + 0x1c);
    iVar3 = FUN_007e9320();
    uVar7 = *(undefined4 *)(iVar3 + 0x18);
    iVar3 = FUN_007e9320();
    iVar3 = *(int *)(iVar3 + 0x18);
  }
  FUN_007f95c3(iVar4,iVar6,iVar2,iVar3,uVar7,uVar8,param_3,iVar1 * 4,param_4);
  return;
}

