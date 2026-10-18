/* speed.exe 0054f7d0 FUN_0054f7d0; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 00652b00 thunk_FUN_007c7250
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0054f7d0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008707a3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0089eaa8;
  param_1[0xc] = 0;
  *(undefined4 *)(DAT_0091cb20 + 0xcc) = 0;
  uVar4 = DAT_0091cbc4;
  local_4 = 1;
  if ((DAT_0091cbac & 0x1000) != 0) {
    if (DAT_0091cbbc != (code *)0x0) {
      (*DAT_0091cbbc)(DAT_0091cbc0);
    }
    DAT_0091cbac = 0;
    DAT_0091cbb8 = 0;
    DAT_0091cbb4 = 0;
    DAT_0091cbb0 = 0;
    DAT_0091cbbc = (code *)0x0;
    DAT_0091cbc0 = 0;
    _DAT_0091cbd0 = 0;
    _DAT_0091cbd4 = 0;
    DAT_0091cbdc = 0;
    DAT_0091cbc8 = 0;
    DAT_0091cbcc = 0;
  }
  piVar1 = (int *)param_1[0x1f];
  DAT_0091cbc4 = uVar4;
  while (piVar1 != param_1 + 0x1f) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)param_1[0x1f];
  }
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_0089b660;
  FUN_00572360();
  ExceptionList = pvStack_c;
  return;
}

