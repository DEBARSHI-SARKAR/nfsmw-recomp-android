/* speed.exe 004626b0 FUN_004626b0; analysis pseudocode, not buildable source.
 * calls 00462540 FUN_00462540
 * calls 00652ad0 _malloc
 */

undefined4 * __thiscall FUN_004626b0(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086a05b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00462540(param_2);
  param_1[0xb4] = param_3;
  local_4 = 0;
  *param_1 = &PTR_FUN_00894274;
  param_1[0xb5] = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  pvVar2 = _malloc(param_3 * 0x7fc);
  param_1[0xb7] = pvVar2;
  iVar3 = 0;
  if (0 < (int)param_1[0xb4]) {
    iVar5 = 0;
    do {
      *(undefined2 *)(iVar5 + param_1[0xb7]) = 0;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x7fc;
    } while (iVar3 < (int)param_1[0xb4]);
  }
  pcVar4 = local_8c;
  iVar3 = 0x7f;
  param_2 = param_2 - (int)pcVar4;
  do {
    cVar1 = pcVar4[param_2];
    iVar3 = iVar3 + -1;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      ExceptionList = local_c;
      return param_1;
    }
    pcVar4 = pcVar4 + 1;
  } while (iVar3 != 0);
  ExceptionList = local_c;
  return param_1;
}

