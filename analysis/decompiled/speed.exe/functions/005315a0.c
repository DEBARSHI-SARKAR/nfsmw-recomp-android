/* speed.exe 005315a0 FUN_005315a0; analysis pseudocode, not buildable source.
 * calls 0052f500 FUN_0052f500
 * calls 00652ad0 _malloc
 * calls 00511d90 FUN_00511d90
 * calls 005b8550 FUN_005b8550
 * calls 00516af0 FUN_00516af0
 */

void __thiscall FUN_005315a0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f644;
  local_c = ExceptionList;
  if (((((param_3 != 0) && (param_4 != 0)) && (*(int *)(param_1 + 0x10) != 0)) &&
      ((ExceptionList = &local_c, iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 != 0 &&
       (iVar2 = FUN_005b8550(param_3), iVar2 != 0)))) && (*(int *)(iVar2 + 0x18) == 1)) {
    local_1c = *(undefined4 *)(param_4 + 0x10);
    local_18 = *(undefined4 *)(param_4 + 0x14);
    local_14 = local_1c;
    local_10 = local_18;
    FUN_00511d90(&local_1c);
    pvVar3 = _malloc(0x38);
    local_4 = 0;
    if ((pvVar3 == (void *)0x0) ||
       (iVar2 = FUN_0052f500(param_2,iVar2,&local_1c,&local_14,0,param_4), iVar2 == 0)) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(iVar2 + 4);
    }
    puVar1 = *(undefined4 **)(param_1 + 0x158);
    *puVar1 = piVar4;
    *(int **)(param_1 + 0x158) = piVar4;
    piVar4[1] = (int)puVar1;
    *piVar4 = param_1 + 0x154;
  }
  ExceptionList = local_c;
  return;
}

