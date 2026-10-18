/* speed.exe 0075eee0 FUN_0075eee0; analysis pseudocode, not buildable source.
 * calls 0075df10 FUN_0075df10
 * calls 0075ecb0 FUN_0075ecb0
 */

int * __thiscall FUN_0075eee0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008815db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_4 = 0;
  FUN_0075df10(0x14);
  piVar2 = param_3;
  if (param_3 != (int *)0x0) {
    do {
      iVar1 = *piVar2;
      if (iVar1 == *param_1) {
        param_2 = piVar2[1];
        FUN_0075ecb0(&param_2);
      }
      piVar2 = piVar2 + 2;
    } while (iVar1 != 0xffff);
  }
  ExceptionList = local_c;
  return param_1;
}

