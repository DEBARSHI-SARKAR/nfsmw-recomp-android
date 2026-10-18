/* speed.exe 00793340 FUN_00793340; analysis pseudocode, not buildable source.
 * calls 00652af0 FUN_00652af0
 * calls 00790200 FUN_00790200
 */

int __thiscall
FUN_00793340(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,char param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882689;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_00652af0(0x2c,8);
  local_4 = 0;
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00790200(param_2,param_3,*(undefined1 *)(param_1 + 0x4c),param_4,param_5,
                                 param_6,param_7);
    if (piVar4 != (int *)0x0) {
      piVar1 = (int *)(param_1 + 0x30);
      if (param_8 == '\0') {
        puVar2 = *(undefined4 **)(param_1 + 0x34);
        *puVar2 = piVar4;
        *(int **)(param_1 + 0x34) = piVar4;
        piVar4[1] = (int)puVar2;
        *piVar4 = (int)piVar1;
        ExceptionList = local_c;
        return piVar4[8];
      }
      iVar3 = *piVar1;
      *piVar1 = (int)piVar4;
      *(int **)(iVar3 + 4) = piVar4;
      piVar4[1] = (int)piVar1;
      *piVar4 = iVar3;
      ExceptionList = local_c;
      return piVar4[8];
    }
  }
  ExceptionList = local_c;
  return -2;
}

