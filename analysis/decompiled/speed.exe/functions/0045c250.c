/* speed.exe 0045c250 FUN_0045c250; analysis pseudocode, not buildable source.
 * calls 0045c350 FUN_0045c350
 * calls 004569d0 FUN_004569d0
 * calls 00457f10 FUN_00457f10
 * calls 00457db0 FUN_00457db0
 */

int __thiscall FUN_0045c250(int param_1,undefined4 *param_2,int *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086a00e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00457f10(*param_2,param_1);
  iVar5 = param_2[6];
  uVar2 = param_2[5];
  local_4 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(short *)(param_1 + 0x1a) = (short)uVar2;
  if (iVar5 != 0) {
    FUN_004569d0(iVar5);
  }
  local_4._0_1_ = 1;
  FUN_0045c350(param_2[1]);
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0x30) = param_2[3];
  *(int **)(param_1 + 0x34) = param_3;
  *param_3 = *param_3 + 1;
  uVar4 = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (*(short *)(*(int *)(param_1 + 8) + 0x2e) != 0) {
    iVar5 = 0;
    do {
      puVar3 = (undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x30) + iVar5);
      bVar1 = *(byte *)((int)puVar3 + 0xe);
      if (((bVar1 & 2) != 0) && ((bVar1 & 8) == 0)) {
        FUN_00457db0(*puVar3,puVar3[1],*(undefined2 *)(puVar3 + 2),0,(bVar1 & 1 | 8) << 1,1,0);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (uVar4 < *(ushort *)(*(int *)(param_1 + 8) + 0x2e));
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  ExceptionList = local_c;
  return param_1;
}

