/* speed.exe 0063ae80 FUN_0063ae80; analysis pseudocode, not buildable source.
 * calls 00633fc0 FUN_00633fc0
 */

void __fastcall FUN_0063ae80(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879448;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7280;
  local_4 = 0;
  if (((int *)param_1[2] != (int *)0x0) && (*(int *)param_1[2] != 0)) {
    puVar3 = &DAT_0091f170;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    uVar1 = DAT_00901ad0 * DAT_00901acc;
    DAT_00901acc = uVar1 & 0xffff;
    FUN_00633fc0(param_1[2],(int)(((int)uVar1 >> 8 & 0xffffU) * *(int *)param_1[2]) >> 0x10,0);
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

