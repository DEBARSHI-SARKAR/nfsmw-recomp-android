/* speed.exe 00530f40 FUN_00530f40; analysis pseudocode, not buildable source.
 * calls 0052f500 FUN_0052f500
 * calls 0045ded0 FUN_0045ded0
 * calls 00652ad0 _malloc
 * calls 00511d90 FUN_00511d90
 * calls 005b8550 FUN_005b8550
 * calls 00516af0 FUN_00516af0
 * calls 00579840 FUN_00579840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00530f40(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  int *piVar7;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0086f5c4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((((*(int *)(param_1 + 0x10) == 0) ||
       (ExceptionList = &pvStack_c, iVar4 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar4 == 0)) ||
      (iVar4 = FUN_005b8550(0xdd9ef5ff), iVar4 == 0)) || (*(int *)(iVar4 + 0x18) != 1)) {
    iVar4 = 0;
  }
  uVar5 = (**(code **)(*(int *)*DAT_0092d87c + 4))();
  FUN_00579840(&uStack_24,&uStack_1c,uVar5);
  uStack_14 = uStack_24;
  uStack_10 = uStack_20;
  FUN_00511d90(&uStack_24);
  uVar3 = FUN_0045ded0(uStack_18,uStack_1c);
  fVar2 = (float)uVar3 * _DAT_00894958;
  pvVar6 = _malloc(0x38);
  uStack_4 = 0;
  if ((pvVar6 == (void *)0x0) ||
     (iVar4 = FUN_0052f500(1,iVar4,&uStack_24,&uStack_14,fVar2,0), iVar4 == 0)) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)(iVar4 + 4);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x158);
  *puVar1 = piVar7;
  *(int **)(param_1 + 0x158) = piVar7;
  *piVar7 = param_1 + 0x154;
  piVar7[1] = (int)puVar1;
  ExceptionList = pvStack_c;
  return;
}

