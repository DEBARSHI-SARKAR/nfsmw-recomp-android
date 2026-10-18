/* speed.exe 00459700 FUN_00459700; analysis pseudocode, not buildable source.
 * calls 004540e0 FUN_004540e0
 * calls 004542c0 FUN_004542c0
 * calls 00459700 FUN_00459700
 * calls 004569d0 FUN_004569d0
 * calls 00459410 FUN_00459410
 * calls 004532c0 FUN_004532c0
 * calls 00454210 FUN_00454210
 * calls 00458d20 FUN_00458d20
 * calls 00458e70 FUN_00458e70
 */

void FUN_00459700(int param_1,int param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_1c [2];
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar2 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00869dd8;
  local_c = ExceptionList;
  if (param_3 != 0) {
    ExceptionList = &local_c;
    if ((char)param_4 != '\0') {
      ExceptionList = &local_c;
      FUN_00459700(param_1,param_2,*(undefined4 *)(param_3 + 0x10),param_4);
    }
    uVar1 = *(ushort *)(*(int *)(*(int *)(uVar2 + 0x14) + 8) + 0x2c);
    if (uVar1 != 0) {
      puVar8 = *(undefined4 **)(param_2 + 8);
      puVar9 = *(undefined4 **)(param_1 + 0x18);
      for (uVar6 = (uint)(uVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    uVar6 = *(uint *)(uVar2 + 4);
    if ((*(uint *)(param_1 + 4) < uVar6) && (*(uint *)(param_1 + 8) < uVar6)) {
      FUN_004569d0(uVar6);
    }
    iVar5 = FUN_004532c0(uVar2,0xffffffff);
    if (iVar5 == 0) {
      iVar5 = FUN_004532c0(*(int *)(*(int *)(uVar2 + 0x14) + 8) + 0xc,0xffffffff);
      param_3 = CONCAT31(param_3._1_3_,1);
    }
    else {
      param_3 = param_3 & 0xffffff00;
    }
    while (iVar5 != 0) {
      FUN_004540e0(local_1c,param_2,iVar5);
      iVar10 = local_14;
      local_4 = 0;
      if (local_14 != 0) {
        bVar7 = ~(*(byte *)(local_14 + 0xb) >> 6);
        param_4 = CONCAT31(param_4._1_3_,bVar7) & 0xffffff01;
        if ((bVar7 & 1) != 0) {
          cVar3 = FUN_00454210(iVar5);
          if (cVar3 != '\0') {
            FUN_00459410(iVar5);
          }
          bVar7 = *(byte *)(iVar10 + 0xb) >> 4 & 1;
          if ((bVar7 == 0) && (*(int *)(iVar10 + 4) == iVar10)) {
            uVar4 = 0;
          }
          else if ((*(byte *)(iVar10 + 0xb) & 2) == 0) {
            uVar4 = 1;
          }
          else {
            iVar10 = *(int *)(iVar10 + 4);
            if (bVar7 != 0) {
              iVar10 = iVar10 + *(int *)(local_1c[0] + 8);
            }
            uVar4 = *(undefined2 *)(iVar10 + 2);
          }
          FUN_00458d20(iVar5,uVar4);
          FUN_00458e70(iVar5,uVar2);
        }
      }
      iVar5 = FUN_004542c0(iVar5,&param_3);
      local_4 = 0xffffffff;
      if (local_1c[0] != 0) {
        *(short *)(local_1c[0] + 0x12) = *(short *)(local_1c[0] + 0x12) + -1;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

