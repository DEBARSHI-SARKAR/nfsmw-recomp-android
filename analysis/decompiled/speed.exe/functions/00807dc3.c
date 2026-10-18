/* speed.exe 00807dc3 FUN_00807dc3; analysis pseudocode, not buildable source.
 * calls 008079c1 FUN_008079c1
 * calls 00807b55 FUN_00807b55
 * calls 0080710b FUN_0080710b
 */

void FUN_00807dc3(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0x1dc) == 0) {
    *(undefined4 *)(param_1 + 200) = 0;
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x6ec);
    if (3 < param_3) {
      if (*(int *)(param_1 + 200) == 0) {
        bVar3 = bVar3 + (char)((int)(0x100 - (uint)bVar3) >> 1);
      }
      else {
        bVar3 = bVar3 - (bVar3 >> 1);
      }
    }
    uVar4 = FUN_0080710b(param_1 + 0x150,bVar3);
    *(undefined4 *)(param_1 + 200) = uVar4;
  }
  if (*(char *)(param_1 + 0x1ac) == '\0') {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else {
    FUN_00807b55(param_1,param_2,param_3);
  }
  iVar1 = *(int *)(param_1 + 0x1b8);
  if (*(int *)(param_1 + 200) == 0) {
    param_1 = 8;
    *(int *)(iVar2 + 0x74) = iVar1;
  }
  else {
    param_1 = 1;
    *(int *)(iVar2 + 0x74) = iVar1 * 2;
  }
  *(int *)(iVar2 + 0xc4) = iVar2 + 0x124;
  *(int *)(iVar2 + 100) = param_2 * 0x10;
  iVar6 = param_3 * 0x10;
  iVar5 = param_2 * 0x10 * iVar1 + *(int *)(iVar2 + 0x21c) + iVar6;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(int *)(iVar2 + 0x70) = iVar5;
  iVar7 = param_3 * 0x20;
  *(int *)(iVar2 + 0xbc) = *(int *)(iVar2 + 0x10c) + iVar7;
  *(undefined4 *)(iVar2 + 0x7c) = 2;
  *(undefined4 *)(iVar2 + 0x80) = 3;
  *(int *)(iVar2 + 0x88) = iVar1;
  *(int *)(iVar2 + 0x68) = iVar6;
  *(int *)(iVar2 + 0xc0) = iVar2 + 0xcc;
  FUN_008079c1(iVar2,param_2,param_3,0);
  *(int *)(iVar2 + 0x70) = *(int *)(iVar2 + 0x70) + 8;
  *(int *)(iVar2 + 0x68) = *(int *)(iVar2 + 0x68) + 8;
  *(int *)(iVar2 + 0xbc) = *(int *)(iVar2 + 0x10c) + 0x10 + iVar7;
  *(int *)(iVar2 + 0xc0) = iVar2 + 0xcc;
  FUN_008079c1(iVar2,param_2,param_3,1);
  *(int *)(iVar2 + 0x68) = *(int *)(iVar2 + 0x68) + -8;
  *(int *)(iVar2 + 100) = *(int *)(iVar2 + 100) + param_1;
  *(int *)(iVar2 + 0x70) = *(int *)(iVar2 + 0x1b8) * param_1 + iVar5;
  *(int *)(iVar2 + 0xbc) = *(int *)(iVar2 + 0x10c) + iVar7;
  *(int *)(iVar2 + 0xc0) = iVar2 + 0xdc;
  FUN_008079c1(iVar2,param_2,param_3,2);
  *(int *)(iVar2 + 0x70) = *(int *)(iVar2 + 0x70) + 8;
  *(int *)(iVar2 + 0x68) = *(int *)(iVar2 + 0x68) + 8;
  *(int *)(iVar2 + 0xbc) = *(int *)(iVar2 + 0x10c) + 0x10 + iVar7;
  *(int *)(iVar2 + 0xc0) = iVar2 + 0xdc;
  FUN_008079c1(iVar2,param_2,param_3,3);
  iVar1 = *(int *)(iVar2 + 0x1bc);
  *(int *)(iVar2 + 0x88) = iVar1;
  *(int *)(iVar2 + 0x74) = iVar1;
  *(int *)(iVar2 + 100) = param_2 * 8;
  *(uint *)(iVar2 + 0x68) = param_3 * 8;
  *(uint *)(iVar2 + 0x70) = param_2 * 8 * iVar1 + *(int *)(iVar2 + 0x220) + param_3 * 8;
  *(int *)(iVar2 + 0xbc) = *(int *)(iVar2 + 0x110) + iVar6;
  *(int *)(iVar2 + 0xc0) = iVar2 + 0xec;
  *(undefined4 *)(iVar2 + 0x7c) = 3;
  *(undefined4 *)(iVar2 + 0x80) = 7;
  *(int *)(iVar2 + 0xc4) = iVar2 + 300;
  *(undefined4 *)(iVar2 + 0x78) = 1;
  FUN_008079c1(iVar2,param_2,param_3,4);
  *(int *)(iVar2 + 0xbc) = *(int *)(iVar2 + 0x114) + iVar6;
  *(int *)(iVar2 + 0xc0) = iVar2 + 0xfc;
  *(int *)(iVar2 + 0x70) =
       *(int *)(iVar2 + 0x74) * *(int *)(iVar2 + 100) + *(int *)(iVar2 + 0x224) +
       *(int *)(iVar2 + 0x68);
  *(int *)(iVar2 + 0xc4) = iVar2 + 0x134;
  *(undefined4 *)(iVar2 + 0x78) = 2;
  FUN_008079c1(iVar2,param_2,param_3,5);
  return;
}

