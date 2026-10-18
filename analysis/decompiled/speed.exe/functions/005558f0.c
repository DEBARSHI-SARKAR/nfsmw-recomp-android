/* speed.exe 005558f0 FUN_005558f0; analysis pseudocode, not buildable source.
 * calls 00794f80 FUN_00794f80
 * calls 00572360 FUN_00572360
 * calls 0079a9e0 FUN_0079a9e0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00838360 FUN_00838360
 * calls 007ec567 FUN_007ec567
 * calls 0056c6e0 FUN_0056c6e0
 * calls 0079bac0 FUN_0079bac0
 * calls 0078bad0 FUN_0078bad0
 * calls 00790970 FUN_00790970
 * calls 00794860 FUN_00794860
 * calls 0078c730 FUN_0078c730
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005558f0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00870b3e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0089ec78;
  local_4 = 1;
  if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
    iVar3 = FUN_0078c730();
    iVar3 = *(int *)(iVar3 + 0xf8);
    if ((iVar3 != 0) && (iVar4 = 0, 0 < DAT_0091c1a8)) {
      do {
        FUN_00838360(iVar3,(&DAT_0091c1ac)[iVar4],2,0,0);
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_0091c1a8);
    }
    puVar5 = &DAT_0091c1ac;
    do {
      thunk_FUN_007c7250(*puVar5);
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while ((int)puVar5 < 0x91c22c);
    DAT_0091c1a8 = 0;
  }
  if (param_1[0x45a] != 0) {
    FUN_0056c6e0(param_1[0x45a]);
    param_1[0x45a] = 0;
  }
  if (1 < *(int *)(DAT_0091cf90 + 0x19c)) {
    uVar7 = 0;
    uVar6 = 0;
    FUN_0079a9e0(0,0);
    FUN_0078bad0(uVar6,uVar7);
    uVar7 = 0;
    uVar6 = 0;
    FUN_0079bac0(0,0);
    FUN_00790970(uVar6,uVar7);
    FUN_00794f80();
    FUN_00794860();
  }
  _DAT_0091ca98 = 0;
  *(undefined1 *)(DAT_0091cf90 + 0x16c) = 0;
  DAT_0091ca78 = 0;
  FUN_007ec567(&LAB_0054af60);
  param_1[0xc] = &PTR_FUN_0089d34c;
  piVar1 = (int *)param_1[0x10];
  local_4._0_1_ = 2;
  while (piVar1 != param_1 + 0x10) {
    iVar3 = *piVar1;
    piVar2 = (int *)piVar1[1];
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    if (piVar1 + -1 != (int *)0x0) {
      (**(code **)piVar1[-1])(1);
    }
    piVar1 = (int *)param_1[0x10];
  }
  piVar1 = (int *)param_1[0xe];
  local_4 = (uint)local_4._1_3_ << 8;
  while (piVar1 != param_1 + 0xe) {
    iVar3 = *piVar1;
    piVar2 = (int *)piVar1[1];
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    if (piVar1 + -1 != (int *)0x0) {
      (**(code **)piVar1[-1])(1);
    }
    piVar1 = (int *)param_1[0xe];
  }
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = pvStack_c;
  return;
}

