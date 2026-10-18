/* speed.exe 004cc3a0 FUN_004cc3a0; analysis pseudocode, not buildable source.
 * calls 004e6280 FUN_004e6280
 * calls 00460a10 FUN_00460a10
 * calls 004e5c30 FUN_004e5c30
 * calls 004e4000 FUN_004e4000
 * calls 004b8700 FUN_004b8700
 * calls 004c40c0 FUN_004c40c0
 * calls 004b43f0 FUN_004b43f0
 * calls 00465240 FUN_00465240
 * calls 004e3eb0 FUN_004e3eb0
 * calls 004e5bb0 FUN_004e5bb0
 * calls 004d9d10 FUN_004d9d10
 * calls 004d9d40 FUN_004d9d40
 * calls 00464a50 FUN_00464a50
 * calls 004d9740 FUN_004d9740
 * calls 004d9c10 FUN_004d9c10
 * calls 004d9b80 FUN_004d9b80
 * calls 004ae9a0 FUN_004ae9a0
 * calls 004caa10 FUN_004caa10
 * calls 00464080 FUN_00464080
 * calls 004fa0c0 FUN_004fa0c0
 * calls 004d9920 FUN_004d9920
 * calls 00465a70 FUN_00465a70
 * calls 004d9e30 FUN_004d9e30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cc3a0(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  DAT_00912848 = (-(uint)(DAT_008f86f8 != 0) & 0x563000) + 0x4000;
  local_4 = 0x2000;
  local_c = (char *)0x4cc3c3;
  puStack_8 = (undefined1 *)DAT_00912848;
  DAT_00912840 = FUN_00465a70();
  local_c = (char *)0x4cc3cd;
  DAT_008ee558 = (char *)FUN_00460a10();
  local_c = "Audio Memory Pool";
  FUN_00465240(DAT_008ee558,DAT_00912840,DAT_00912848);
  iVar5 = FUN_00464080(DAT_008ee558);
  if (iVar5 < 0xa8) {
    local_4 = 0x7fffffff;
    puStack_8 = (undefined1 *)0x0;
    local_c = DAT_008ee558;
    FUN_00464a50();
    iVar5 = FUN_00465a70(0xa8,0x1000);
  }
  else {
    local_4 = ((uint)DAT_008ee558 & 0xf) + 0x1000;
    puStack_8 = (undefined1 *)0xa8;
    local_c = (char *)0x4cc418;
    iVar5 = FUN_00465a70();
  }
  if (iVar5 == 0) {
    DAT_00911fa8 = 0;
  }
  else {
    local_4 = 0x4cc44d;
    DAT_00911fa8 = FUN_004ae9a0();
  }
  iVar5 = DAT_00911fa8;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086c39a;
  local_c = ExceptionList;
  if (DAT_008f86f8 != 0) {
    ExceptionList = &local_c;
    puVar2 = (undefined4 *)FUN_004b8700(0x1c,"EAXSND8Wrapper");
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = &PTR_FUN_00896acc;
      puVar2[1] = 0;
      puVar2[2] = 0;
      DAT_00911f58 = 0;
      DAT_00911f5c = 0x88;
    }
    *(undefined4 **)(iVar5 + 0x7c) = puVar2;
    cVar1 = FUN_004c40c0();
    if (cVar1 == '\0') {
      DAT_008f86f8 = 0;
      ExceptionList = local_c;
      return;
    }
    DAT_00912324 = 0xfffffffe;
    iVar3 = FUN_004b8700(0x74,"NFSMixMaster");
    local_4 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_004e3eb0();
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x84) = uVar4;
    iVar3 = FUN_004b8700(0x1c,"STICH_PlayBack");
    local_4 = 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_004caa10();
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x88) = uVar4;
    iVar5 = FUN_004b8700(0x98,"NISRevMan");
    if (iVar5 != 0) {
      FUN_004b43f0();
    }
    DAT_00911f60 = (int *)0x0;
    DAT_00911f64 = (int *)0x0;
    DAT_00911f68 = (int *)0x0;
    DAT_00911f6c = (int *)0x0;
    DAT_00911f70 = (int *)0x0;
    DAT_00911f74 = (int *)0x0;
    _DAT_00911f78 = (int *)0x0;
    DAT_00911f7c = (int *)0x0;
    DAT_00911f80 = (int *)0x0;
    _DAT_00911f84 = 0;
    _DAT_00911f88 = 0;
    DAT_00911f8c = (int *)0x0;
    DAT_00911f90 = (int *)0x0;
    iVar5 = FUN_00464080(DAT_008ee558);
    if (iVar5 < 0x1c) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      iVar5 = FUN_00465a70(0x1c,0x1000);
    }
    else {
      iVar5 = FUN_00465a70(0x1c,((uint)DAT_008ee558 & 0xf) + 0x1000);
    }
    local_4 = 2;
    if (iVar5 == 0) {
      DAT_00911f60 = (int *)0x0;
    }
    else {
      DAT_00911f60 = (int *)FUN_004d9b80();
    }
    local_4 = 0xffffffff;
    (**(code **)(*DAT_00911f60 + 4))(0);
    iVar5 = FUN_00464080(DAT_008ee558);
    if (iVar5 < 0x1c) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      iVar5 = FUN_00465a70(0x1c,0x1000);
    }
    else {
      iVar5 = FUN_00465a70(0x1c,((uint)DAT_008ee558 & 0xf) + 0x1000);
    }
    puStack_8 = (undefined1 *)0x3;
    if (iVar5 == 0) {
      DAT_00911f64 = (int *)0x0;
    }
    else {
      DAT_00911f64 = (int *)FUN_004d9d10();
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*DAT_00911f64 + 4))(1);
    iVar5 = FUN_00464080(DAT_008ee558);
    if (iVar5 < 0x1c) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      iVar5 = FUN_00465a70(0x1c,0x1000);
    }
    else {
      iVar5 = FUN_00465a70(0x1c,((uint)DAT_008ee558 & 0xf) + 0x1000);
    }
    local_c = (char *)0x4;
    if (iVar5 == 0) {
      DAT_00911f68 = (int *)0x0;
    }
    else {
      DAT_00911f68 = (int *)FUN_004d9740();
    }
    local_c = (char *)0xffffffff;
    (**(code **)(*DAT_00911f68 + 4))(2);
    iVar5 = FUN_00464080(DAT_008ee558);
    if (iVar5 < 0x24) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      iVar5 = FUN_00465a70(0x24,0x1000);
    }
    else {
      iVar5 = FUN_00465a70(0x24,((uint)DAT_008ee558 & 0xf) + 0x1000);
    }
    if (iVar5 == 0) {
      DAT_00911f6c = (int *)0x0;
    }
    else {
      DAT_00911f6c = (int *)FUN_004e5c30();
    }
    (**(code **)(*DAT_00911f6c + 4))(3);
    iVar5 = FUN_00464080(DAT_008ee558);
    if (iVar5 < 0x28) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      iVar5 = FUN_00465a70(0x28,0x1000);
    }
    else {
      iVar5 = FUN_00465a70(0x28,((uint)DAT_008ee558 & 0xf) + 0x1000);
    }
    if (iVar5 == 0) {
      DAT_00911f70 = (int *)0x0;
    }
    else {
      DAT_00911f70 = (int *)FUN_004d9e30();
    }
    (**(code **)(*DAT_00911f70 + 4))(4);
    iVar5 = FUN_00464080(DAT_008ee558);
    if (iVar5 < 0x24) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      iVar5 = FUN_00465a70(0x24,0x1000);
    }
    else {
      iVar5 = FUN_00465a70(0x24,((uint)DAT_008ee558 & 0xf) + 0x1000);
    }
    if (iVar5 == 0) {
      DAT_00911f74 = (int *)0x0;
    }
    else {
      DAT_00911f74 = (int *)FUN_004e5bb0();
    }
    (**(code **)(*DAT_00911f74 + 4))(5);
    iVar5 = FUN_00464080(DAT_008ee558);
    if (iVar5 < 0x28) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      iVar5 = FUN_00465a70(0x28,0x1000);
    }
    else {
      iVar5 = FUN_00465a70(0x28,((uint)DAT_008ee558 & 0xf) + 0x1000);
    }
    if (iVar5 == 0) {
      _DAT_00911f78 = (int *)0x0;
    }
    else {
      _DAT_00911f78 = (int *)FUN_004fa0c0();
    }
    (**(code **)(*_DAT_00911f78 + 4))(6);
    iVar5 = FUN_00464080(DAT_008ee558);
    if (iVar5 < 0x1c) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      iVar5 = FUN_00465a70(0x1c,0x1000);
    }
    else {
      iVar5 = FUN_00465a70(0x1c,((uint)DAT_008ee558 & 0xf) + 0x1000);
    }
    if (iVar5 == 0) {
      DAT_00911f7c = (int *)0x0;
    }
    else {
      DAT_00911f7c = (int *)FUN_004d9920();
    }
    (**(code **)(*DAT_00911f7c + 4))(7);
    iVar5 = FUN_00464080(DAT_008ee558);
    if (iVar5 < 0x20) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      iVar5 = FUN_00465a70(0x20,0x1000);
    }
    else {
      iVar5 = FUN_00465a70(0x20,((uint)DAT_008ee558 & 0xf) + 0x1000);
    }
    if (iVar5 == 0) {
      DAT_00911f80 = (int *)0x0;
    }
    else {
      DAT_00911f80 = (int *)FUN_004d9c10();
    }
    (**(code **)(*DAT_00911f80 + 4))(8);
    iVar5 = FUN_00464080(DAT_008ee558);
    if (iVar5 < 0x1c) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      iVar5 = FUN_00465a70(0x1c,0x1000);
    }
    else {
      iVar5 = FUN_00465a70(0x1c,((uint)DAT_008ee558 & 0xf) + 0x1000);
    }
    if (iVar5 == 0) {
      DAT_00911f8c = (int *)0x0;
    }
    else {
      DAT_00911f8c = (int *)FUN_004d9d40();
    }
    (**(code **)(*DAT_00911f8c + 4))(0xb);
    iVar5 = FUN_00464080(DAT_008ee558);
    if (iVar5 < 0x24) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      iVar5 = FUN_00465a70(0x24,0x1000);
    }
    else {
      iVar5 = FUN_00465a70(0x24,((uint)DAT_008ee558 & 0xf) + 0x1000);
    }
    if (iVar5 == 0) {
      DAT_00911f90 = (int *)0x0;
    }
    else {
      DAT_00911f90 = (int *)FUN_004e6280();
    }
    (**(code **)(*DAT_00911f90 + 4))(0xc);
    FUN_004e4000(&LAB_004b8ed0,&LAB_004b8ef0,&LAB_004b8f40,&LAB_004aea70,&LAB_004c75e0);
  }
  ExceptionList = local_c;
  return;
}

