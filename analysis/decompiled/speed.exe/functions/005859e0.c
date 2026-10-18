/* speed.exe 005859e0 FUN_005859e0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00585400 FUN_00585400
 */

void FUN_005859e0(undefined4 param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872304;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = _malloc(0x38);
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    iVar3 = FUN_00585400(param_1);
    if (iVar3 != 0) {
      piVar4 = (int *)(iVar3 + 4);
      goto LAB_00585a26;
    }
  }
  piVar4 = (int *)0x0;
LAB_00585a26:
  iVar3 = DAT_0091d21c;
  piVar1 = *(int **)(DAT_0091d21c + 8);
  iVar5 = DAT_0091d21c + 4;
  *piVar1 = (int)piVar4;
  *(int **)(iVar3 + 8) = piVar4;
  *piVar4 = iVar5;
  piVar4[1] = (int)piVar1;
  ExceptionList = local_c;
  return;
}

