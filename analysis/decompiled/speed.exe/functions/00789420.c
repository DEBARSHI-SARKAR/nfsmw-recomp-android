/* speed.exe 00789420 FUN_00789420; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00771eb0 FUN_00771eb0
 * calls 00771e00 FUN_00771e00
 */

undefined4 * __fastcall FUN_00789420(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008824e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  pvVar1 = _malloc(0xc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    iVar2 = FUN_00771e00();
    *(int *)((int)pvVar1 + 4) = iVar2;
    *(undefined1 *)(iVar2 + 0x15) = 1;
    *(int *)(*(int *)((int)pvVar1 + 4) + 4) = *(int *)((int)pvVar1 + 4);
    *(undefined4 *)*(undefined4 *)((int)pvVar1 + 4) = *(undefined4 *)((int)pvVar1 + 4);
    *(int *)(*(int *)((int)pvVar1 + 4) + 8) = *(int *)((int)pvVar1 + 4);
    *(undefined4 *)((int)pvVar1 + 8) = 0;
  }
  local_4 = 0xffffffff;
  param_1[2] = pvVar1;
  param_1[3] = 0x8000;
  param_1[4] = 0;
  param_1[5] = 0;
  pvVar1 = _malloc(0xc);
  local_4 = 1;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    iVar2 = FUN_00771eb0();
    *(int *)((int)pvVar1 + 4) = iVar2;
    *(undefined1 *)(iVar2 + 0x15) = 1;
    *(int *)(*(int *)((int)pvVar1 + 4) + 4) = *(int *)((int)pvVar1 + 4);
    *(undefined4 *)*(undefined4 *)((int)pvVar1 + 4) = *(undefined4 *)((int)pvVar1 + 4);
    *(int *)(*(int *)((int)pvVar1 + 4) + 8) = *(int *)((int)pvVar1 + 4);
    *(undefined4 *)((int)pvVar1 + 8) = 0;
  }
  param_1[6] = pvVar1;
  param_1[7] = 0x8000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_4 = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[4] = 0;
  DAT_009b38a0 = _malloc(0x2a30);
  iVar2 = 0;
  do {
    *(undefined4 *)(iVar2 + (int)DAT_009b38a0) = 0;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x2a30);
  ExceptionList = local_c;
  return param_1;
}

