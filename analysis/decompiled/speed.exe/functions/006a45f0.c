/* speed.exe 006a45f0 FUN_006a45f0; analysis pseudocode, not buildable source.
 * calls 00627400 FUN_00627400
 * calls 006259a0 FUN_006259a0
 */

undefined4 __thiscall FUN_006a45f0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uStack_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087c9af;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar4 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x34) + 0x60))();
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  cVar3 = (**(code **)(**(int **)(param_1 + 0x48) + 0x68))(param_2,param_3);
  if (cVar3 != '\0') {
    iVar5 = FUN_00627400(0x24);
    pvStack_c = (void *)0x0;
    if (iVar5 != 0) {
      FUN_006259a0(*(undefined4 *)(*(int *)(param_1 + 0x34) + 8),uVar1,uVar2,uStack_18,*param_2,
                   param_2[1],param_2[2]);
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x54) = 0;
    pvStack_c = (void *)0xffffffff;
    if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xf0) + 0x10))(((char)param_2 == '\0') + '\x01',0x40000000);
    }
    ExceptionList = pvStack_14;
    return 1;
  }
  ExceptionList = pvStack_14;
  return 0;
}

