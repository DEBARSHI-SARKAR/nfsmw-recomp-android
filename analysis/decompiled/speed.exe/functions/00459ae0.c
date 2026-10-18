/* speed.exe 00459ae0 FUN_00459ae0; analysis pseudocode, not buildable source.
 * calls 00458690 FUN_00458690
 * calls 004548c0 FUN_004548c0
 * calls 00659250 FUN_00659250
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00459ae0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00869e1f;
  local_c = ExceptionList;
  piVar4 = DAT_0090dccc;
  if (DAT_0090dccc == (int *)0x0) {
    DAT_0090dcd4 = DAT_0090dcd4 + 0xc;
    if (DAT_0090dcd0 < DAT_0090dcd4) {
      DAT_0090dcd0 = DAT_0090dcd4;
    }
    uVar5 = 0xc;
    ExceptionList = &local_c;
    iVar3 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0xc,0);
    local_c = (void *)0x0;
    if (iVar3 == 0) {
      DAT_0090dccc = (int *)0x0;
    }
    else {
      DAT_0090dccc = (int *)FUN_004548c0(3);
    }
    DAT_0090dcd4 = DAT_0090dcd4 + 4;
    local_c = (void *)0xffffffff;
    if (DAT_0090dcd0 < DAT_0090dcd4) {
      DAT_0090dcd0 = DAT_0090dcd4;
    }
    DAT_0090dcc0 = (undefined4 *)(*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(4,0,uVar5,iVar3);
    if (DAT_0090dcc0 == (undefined4 *)0x0) {
      DAT_0090dcc0 = (undefined4 *)0x0;
    }
    else {
      *DAT_0090dcc0 = &PTR_FUN_00893c40;
    }
    DAT_0090dcd4 = DAT_0090dcd4 + 4;
    if (DAT_0090dcd0 < DAT_0090dcd4) {
      DAT_0090dcd0 = DAT_0090dcd4;
    }
    DAT_0090dcc4 = (undefined4 *)(*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(4,0);
    if (DAT_0090dcc4 == (undefined4 *)0x0) {
      DAT_0090dcc4 = (undefined4 *)0x0;
    }
    else {
      *DAT_0090dcc4 = &PTR_LAB_00893c50;
    }
    DAT_0090dcd4 = DAT_0090dcd4 + 4;
    if (DAT_0090dcd0 < DAT_0090dcd4) {
      DAT_0090dcd0 = DAT_0090dcd4;
    }
    _DAT_0090dcc8 = (undefined4 *)(*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(4,0);
    if (_DAT_0090dcc8 == (undefined4 *)0x0) {
      _DAT_0090dcc8 = (undefined4 *)0x0;
    }
    else {
      *_DAT_0090dcc8 = &PTR_LAB_00893c60;
    }
    piVar4 = DAT_0090dccc;
    puVar1 = (undefined4 *)(*DAT_0090dccc + DAT_0090dccc[2] * 8);
    DAT_0090dccc[2] = DAT_0090dccc[2] + 1;
    *puVar1 = DAT_0090dce0;
    puVar1[1] = DAT_0090dcc0;
    puVar1 = (undefined4 *)(*piVar4 + piVar4[2] * 8);
    piVar4[2] = piVar4[2] + 1;
    *puVar1 = DAT_0090dce4;
    puVar1[1] = DAT_0090dcc4;
    puVar1 = (undefined4 *)(*piVar4 + piVar4[2] * 8);
    piVar4[2] = piVar4[2] + 1;
    uVar5 = DAT_0090dce8;
    puVar1[1] = _DAT_0090dcc8;
    *puVar1 = uVar5;
    iVar2 = *piVar4;
    iVar3 = iVar2 + piVar4[2] * 8;
    FUN_00458690(iVar2,iVar3,iVar3 - iVar2 >> 3);
  }
  ExceptionList = local_c;
  return piVar4;
}

