/* speed.exe 00591eb0 FUN_00591eb0; analysis pseudocode, not buildable source.
 * calls 00652ac0 _malloc
 * calls 00585ba0 FUN_00585ba0
 */

undefined4 FUN_00591eb0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872a5b;
  local_c = ExceptionList;
  if (*param_1 == 0x30201) {
    ExceptionList = &local_c;
    pvVar3 = _malloc(0x30);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_00585ba0(param_1);
    }
    iVar2 = (int)DAT_0091d904;
    puVar1 = (undefined4 *)((int)DAT_0091d904 + 4);
    DAT_0091d904 = piVar4;
    *puVar1 = piVar4;
    piVar4[1] = (int)&DAT_0091d904;
    *piVar4 = iVar2;
    ExceptionList = local_c;
    return 1;
  }
  return 0;
}

