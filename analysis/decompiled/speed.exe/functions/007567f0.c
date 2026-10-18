/* speed.exe 007567f0 FUN_007567f0; analysis pseudocode, not buildable source.
 * calls 0074c650 FUN_0074c650
 * calls 00747760 FUN_00747760
 * calls 007513a0 FUN_007513a0
 */

void __fastcall FUN_007567f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00880fcb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b50ac;
  local_4 = 0;
  FUN_00747760();
  iVar2 = param_1[0x3c];
  if (iVar2 != 0) {
    iVar3 = param_1[4];
    piVar4 = (int *)param_1[5];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    param_1[0x3c] = 0;
    piVar4 = (int *)(iVar2 + 0xe8);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      FUN_007513a0();
      puVar1 = (undefined4 *)(iVar2 + 0x10);
      *DAT_009b0bcc = puVar1;
      puVar5 = puVar1;
      *(undefined4 **)(iVar2 + 0x14) = DAT_009b0bcc;
      DAT_009b0bcc = puVar5;
      *puVar1 = &DAT_009b0bc8;
    }
  }
  local_4 = 0xffffffff;
  FUN_0074c650();
  ExceptionList = local_c;
  return;
}

