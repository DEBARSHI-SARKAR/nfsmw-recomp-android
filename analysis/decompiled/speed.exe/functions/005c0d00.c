/* speed.exe 005c0d00 FUN_005c0d00; analysis pseudocode, not buildable source.
 * calls 005be3e0 FUN_005be3e0
 * calls 005b66c0 FUN_005b66c0
 * calls 005bccd0 FUN_005bccd0
 * calls 005baa70 FUN_005baa70
 * calls 00652ad0 _malloc
 * calls 005af1c0 FUN_005af1c0
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

void __thiscall FUN_005c0d00(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008744ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar3 = FUN_005af1c0(param_2);
  cVar2 = FUN_005be3e0(uVar3,param_3,param_4);
  if (cVar2 == '\0') {
    if (param_1[6] == param_1[7]) {
      FUN_005baa70(param_1[6] + 0x40);
    }
    iVar1 = *param_1;
    piVar4 = _malloc(iVar1 * 8 + 4);
    piVar6 = (int *)0x0;
    local_4 = 0;
    if (piVar4 != (int *)0x0) {
      piVar6 = piVar4 + 1;
      *piVar4 = iVar1;
      _eh_vector_constructor_iterator_(piVar6,8,iVar1,FUN_005b9170,FUN_005b3230);
    }
    *(int **)(param_1[6] * 0x1c + 0x18 + param_1[9]) = piVar6;
    local_4 = 0xffffffff;
    FUN_005bccd0(param_4);
    if ((char)param_1[5] != '\0') {
      puVar7 = (undefined4 *)(param_1[6] * 0x1c + param_1[9]);
      FUN_005b66c0();
      uVar5 = FUN_005af1c0(*puVar7);
      puVar7[5] = uVar5;
    }
    *(undefined4 *)(param_1[6] * 0x1c + 0x14 + param_1[9]) = uVar3;
    param_1[6] = param_1[6] + 1;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  ExceptionList = local_c;
  return;
}

