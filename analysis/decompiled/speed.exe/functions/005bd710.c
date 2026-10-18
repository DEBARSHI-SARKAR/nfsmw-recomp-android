/* speed.exe 005bd710 FUN_005bd710; analysis pseudocode, not buildable source.
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

undefined4 * __fastcall FUN_005bd710(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874238;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0xabadcafe;
  param_1[2] = 0xabadcafe;
  local_4 = 0;
  *param_1 = &PTR_FUN_008a2e18;
  _eh_vector_constructor_iterator_
            (param_1 + 3,0x20,0x100,(_func_void_void_ptr *)&LAB_005ad540,FUN_005ad560);
  param_1[0x803] = &PTR_LAB_008a2c18;
  param_1[0x805] = 0;
  param_1[0x806] = 0;
  param_1[0x804] = 0;
  param_1[0x807] = 0;
  piVar4 = param_1 + 5;
  iVar5 = 0x40;
  do {
    iVar2 = param_1[0x806];
    if (piVar4 != (int *)&DAT_00000008) {
      if (iVar2 == 0) {
        iVar3 = param_1[0x805];
        piVar4[-1] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar4 + -2;
        }
        *piVar4 = 0;
        param_1[0x805] = piVar4 + -2;
      }
      else {
        iVar3 = *(int *)(iVar2 + 4);
        piVar4[-1] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar4 + -2;
        }
        *piVar4 = iVar2;
        *(int **)(iVar2 + 4) = piVar4 + -2;
      }
      if (param_1[0x806] == iVar2) {
        param_1[0x806] = piVar4 + -2;
      }
      param_1[0x804] = param_1[0x804] + 1;
    }
    iVar2 = param_1[0x806];
    piVar1 = piVar4 + 6;
    if (piVar1 != (int *)0x0) {
      if (iVar2 == 0) {
        iVar3 = param_1[0x805];
        piVar4[7] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[8] = 0;
        param_1[0x805] = piVar1;
      }
      else {
        iVar3 = *(int *)(iVar2 + 4);
        piVar4[7] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[8] = iVar2;
        *(int **)(iVar2 + 4) = piVar1;
      }
      if (param_1[0x806] == iVar2) {
        param_1[0x806] = piVar1;
      }
      param_1[0x804] = param_1[0x804] + 1;
    }
    iVar2 = param_1[0x806];
    piVar1 = piVar4 + 0xe;
    if (piVar1 != (int *)0x0) {
      if (iVar2 == 0) {
        iVar3 = param_1[0x805];
        piVar4[0xf] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[0x10] = 0;
        param_1[0x805] = piVar1;
      }
      else {
        iVar3 = *(int *)(iVar2 + 4);
        piVar4[0xf] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[0x10] = iVar2;
        *(int **)(iVar2 + 4) = piVar1;
      }
      if (param_1[0x806] == iVar2) {
        param_1[0x806] = piVar1;
      }
      param_1[0x804] = param_1[0x804] + 1;
    }
    iVar2 = param_1[0x806];
    piVar1 = piVar4 + 0x16;
    if (piVar1 != (int *)0x0) {
      if (iVar2 == 0) {
        iVar3 = param_1[0x805];
        piVar4[0x17] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[0x18] = 0;
        param_1[0x805] = piVar1;
      }
      else {
        iVar3 = *(int *)(iVar2 + 4);
        piVar4[0x17] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[0x18] = iVar2;
        *(int **)(iVar2 + 4) = piVar1;
      }
      if (param_1[0x806] == iVar2) {
        param_1[0x806] = piVar1;
      }
      param_1[0x804] = param_1[0x804] + 1;
    }
    piVar4 = piVar4 + 0x20;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  ExceptionList = local_c;
  return param_1;
}

