/* speed.exe 0050c510 FUN_0050c510; analysis pseudocode, not buildable source.
 * calls 0050b3e0 FUN_0050b3e0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0050b260 FUN_0050b260
 * calls 0050a600 FUN_0050a600
 * calls 005d0370 FUN_005d0370
 * calls 007c8f50 `eh_vector_destructor_iterator'
 */

void __fastcall FUN_0050c510(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086e0d0;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0x39c);
  local_4 = 4;
  ExceptionList = &local_c;
  if (iVar2 != 0) {
    ExceptionList = &local_c;
    FUN_005d0370(iVar2,(*(int *)(param_1 + 0x3a4) - iVar2 >> 3) << 3,0);
  }
  piVar1 = (int *)(param_1 + 0x380);
  *(undefined4 *)(param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x3a4) = 0;
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    iVar2 = *piVar3;
    piVar4 = (int *)piVar3[1];
    *piVar4 = iVar2;
    *(int **)(iVar2 + 4) = piVar4;
    thunk_FUN_007c7250(piVar3);
    piVar3 = (int *)*piVar1;
  }
  local_4._1_3_ = (undefined3)(local_4 >> 8);
  local_4._0_1_ = 2;
  FUN_0050a600();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0050b3e0(local_10,**(undefined4 **)(param_1 + 0x370),*(undefined4 **)(param_1 + 0x370));
  if (*(int *)(param_1 + 0x370) != 0) {
    FUN_005d0370(*(int *)(param_1 + 0x370),0x18,0);
  }
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x374) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_0050b260(local_10,**(undefined4 **)(param_1 + 0x364),*(undefined4 **)(param_1 + 0x364));
  if (*(int *)(param_1 + 0x364) != 0) {
    FUN_005d0370(*(int *)(param_1 + 0x364),0x18,0);
  }
  *(undefined4 *)(param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x368) = 0;
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x10c),8,0x42,FUN_00507e60);
  ExceptionList = local_c;
  return;
}

