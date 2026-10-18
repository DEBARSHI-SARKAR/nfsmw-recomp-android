/* speed.exe 005c02b0 FUN_005c02b0; analysis pseudocode, not buildable source.
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

undefined4 * __fastcall FUN_005c02b0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008743e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0xabadcafe;
  param_1[2] = 0xabadcafe;
  local_4 = 0;
  *param_1 = &PTR_FUN_008a2f40;
  _eh_vector_constructor_iterator_
            (param_1 + 3,0x18,0x40,(_func_void_void_ptr *)&LAB_005ad740,FUN_005be440);
  param_1[0x183] = &PTR_LAB_008a2c18;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  param_1[0x184] = 0;
  param_1[0x187] = 0;
  piVar4 = param_1 + 5;
  iVar5 = 0x10;
  do {
    iVar2 = param_1[0x186];
    if (piVar4 != (int *)&DAT_00000008) {
      if (iVar2 == 0) {
        iVar3 = param_1[0x185];
        piVar4[-1] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar4 + -2;
        }
        *piVar4 = 0;
        param_1[0x185] = piVar4 + -2;
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
      if (param_1[0x186] == iVar2) {
        param_1[0x186] = piVar4 + -2;
      }
      param_1[0x184] = param_1[0x184] + 1;
    }
    iVar2 = param_1[0x186];
    piVar1 = piVar4 + 4;
    if (piVar1 != (int *)0x0) {
      if (iVar2 == 0) {
        iVar3 = param_1[0x185];
        piVar4[5] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[6] = 0;
        param_1[0x185] = piVar1;
      }
      else {
        iVar3 = *(int *)(iVar2 + 4);
        piVar4[5] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[6] = iVar2;
        *(int **)(iVar2 + 4) = piVar1;
      }
      if (param_1[0x186] == iVar2) {
        param_1[0x186] = piVar1;
      }
      param_1[0x184] = param_1[0x184] + 1;
    }
    iVar2 = param_1[0x186];
    piVar1 = piVar4 + 10;
    if (piVar1 != (int *)0x0) {
      if (iVar2 == 0) {
        iVar3 = param_1[0x185];
        piVar4[0xb] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[0xc] = 0;
        param_1[0x185] = piVar1;
      }
      else {
        iVar3 = *(int *)(iVar2 + 4);
        piVar4[0xb] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[0xc] = iVar2;
        *(int **)(iVar2 + 4) = piVar1;
      }
      if (param_1[0x186] == iVar2) {
        param_1[0x186] = piVar1;
      }
      param_1[0x184] = param_1[0x184] + 1;
    }
    iVar2 = param_1[0x186];
    piVar1 = piVar4 + 0x10;
    if (piVar1 != (int *)0x0) {
      if (iVar2 == 0) {
        iVar3 = param_1[0x185];
        piVar4[0x11] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[0x12] = 0;
        param_1[0x185] = piVar1;
      }
      else {
        iVar3 = *(int *)(iVar2 + 4);
        piVar4[0x11] = iVar3;
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        piVar4[0x12] = iVar2;
        *(int **)(iVar2 + 4) = piVar1;
      }
      if (param_1[0x186] == iVar2) {
        param_1[0x186] = piVar1;
      }
      param_1[0x184] = param_1[0x184] + 1;
    }
    piVar4 = piVar4 + 0x18;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  ExceptionList = local_c;
  return param_1;
}

