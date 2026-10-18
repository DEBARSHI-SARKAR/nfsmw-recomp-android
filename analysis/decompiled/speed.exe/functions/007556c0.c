/* speed.exe 007556c0 FUN_007556c0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00501480 FUN_00501480
 * calls 005d0370 FUN_005d0370
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 0045f2e0 FUN_0045f2e0
 */

void __fastcall FUN_007556c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00880f6f;
  pvStack_c = ExceptionList;
  local_4 = 3;
  local_14 = 0;
  ExceptionList = &pvStack_c;
  do {
    iVar3 = *(int *)(param_1 + 0x1628);
    if (iVar3 <= *(int *)(param_1 + 0x162c)) {
      puVar4 = (uint *)(param_1 + 0xb84 + (iVar3 + local_14 * 5) * 4);
      do {
        uVar5 = *puVar4 & 0xfffffffc;
        if ((uVar5 != 0) && (*(int *)(uVar5 + 8) != 0)) {
          FUN_00501480();
          FUN_0045f2e0(uVar5);
          *puVar4 = *puVar4 & 1;
        }
        *puVar4 = 0;
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 <= *(int *)(param_1 + 0x162c));
    }
    local_14 = local_14 + 1;
  } while (local_14 < 0x4c);
  if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x40))(1);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  local_4._0_1_ = 2;
  FUN_0045a430();
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_
            ((void *)(param_1 + 0xb84),4,0x17c,(_func_void_void_ptr *)&LAB_007374c0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x15c),8,0x1c,FUN_0074c6f0);
  piVar1 = *(int **)(param_1 + 0x104);
  local_4 = 0xffffffff;
  while (piVar1 != (int *)(param_1 + 0x104)) {
    iVar3 = *piVar1;
    piVar2 = (int *)piVar1[1];
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    FUN_005d0370(piVar1,0x30,0);
    piVar1 = *(int **)(param_1 + 0x104);
  }
  ExceptionList = pvStack_c;
  return;
}

