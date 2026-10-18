/* speed.exe 005a6ec0 FUN_005a6ec0; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 * calls 00516c90 FUN_00516c90
 * calls 00524920 FUN_00524920
 * calls 005dbef0 FUN_005dbef0
 * calls 00586290 FUN_00586290
 * calls 005fba00 FUN_005fba00
 * calls 005dbed0 FUN_005dbed0
 * calls 005faa20 FUN_005faa20
 * calls 007c90a0 `eh_vector_constructor_iterator'
 * calls 005a19c0 FUN_005a19c0
 */

undefined4 * __thiscall FUN_005a6ec0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00873a0c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_008a1708;
  _eh_vector_constructor_iterator_
            (param_1 + 0xb,0x18,0x10,(_func_void_void_ptr *)&LAB_0058e0c0,FUN_0058c610);
  puVar7 = param_1 + 0x6c;
  param_1[0x6b] = &PTR_FUN_008a15bc;
  *puVar7 = puVar7;
  param_1[0x6d] = puVar7;
  param_1[0x6e] = 1;
  param_1[0x6f] = &DAT_00890978;
  param_1[0x70] = &DAT_00890978;
  param_1[0x71] = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar2 = FUN_005dbef0();
  param_1[0x73] = uVar2;
  param_1[0x74] = 0xffffffff;
  param_1[0x75] = 0xffffffff;
  uVar2 = FUN_005fba00();
  param_1[0x76] = uVar2;
  param_1[0x77] = 0;
  if (*(int *)(DAT_0091e000 + 0x1968) == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = FUN_005faa20();
  }
  param_1[0x78] = iVar3;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0xb;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  param_1[0x7c] = 0x6f2315c4;
  *(undefined1 *)(param_1 + 3) = 0;
  if (iVar3 == 4) {
    param_1[0x79] = 2;
  }
  iVar3 = 0;
  if (0 < (int)param_1[0x73]) {
    do {
      piVar4 = (int *)FUN_005dbed0(iVar3);
      if ((((*piVar4 != 0) &&
           (iVar5 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar4), iVar5 != 0))
          && (*(int *)(iVar5 + 4) != 0)) && (param_1[0x75] == -1)) {
        if ((*piVar4 == 0) ||
           (iVar5 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar4), iVar5 == 0))
        {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = *(int **)(iVar5 + 4);
        }
        cVar1 = (**(code **)(*piVar6 + 0x24))();
        if (cVar1 != '\0') {
          param_1[0x7a] = piVar4;
          param_1[0x75] = iVar3;
          break;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x73]);
  }
  puVar7 = param_1 + 0x10;
  iVar3 = 0x10;
  do {
    *puVar7 = param_1[4];
    puVar7 = puVar7 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x70] = param_1[4];
  FUN_005a19c0();
  if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) != 0) ||
     ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0)) {
    FUN_00516c90(0x5e5b26a1,param_1[4],0);
    FUN_00524920(param_1[4],0x7d913050,0x1ca7c0,0);
    FUN_00524920(param_1[4],0x77ce0364,0x3826a28,0);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

