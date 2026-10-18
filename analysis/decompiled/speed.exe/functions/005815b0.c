/* speed.exe 005815b0 FUN_005815b0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 004e4ea0 FUN_004e4ea0
 * calls 0051e1a0 FUN_0051e1a0
 */

void __fastcall FUN_005815b0(int *param_1)

{
  void *pvVar1;
  uint uVar2;
  int local_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar1 = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)((int)param_1 + 0x11) = 0xff;
  param_1[3] = 0;
  if (*param_1 == -1) {
    ExceptionList = pvVar1;
    return;
  }
  FUN_004e4ea0(param_1[2],0,0);
  local_4 = 0;
  FUN_0051e1a0(param_1[1],0,0);
  switch(*(undefined4 *)(local_2c + 0x38)) {
  case 0:
    uVar2 = param_1[3] | 0x10000;
    break;
  case 1:
    uVar2 = param_1[3] | 0x20000;
    break;
  case 2:
    uVar2 = param_1[3] | 0x40000;
    break;
  case 3:
    uVar2 = param_1[3] | 0x80000;
    break;
  default:
    goto switchD_00581619_default;
  }
  param_1[3] = uVar2;
switchD_00581619_default:
  if ((*(int *)(local_2c + 0x38) == 3) || (*(char *)(local_2c + 0x58) == '\0')) {
    uVar2 = param_1[3] | 0x20;
  }
  else {
    uVar2 = param_1[3] | 1;
  }
  param_1[3] = uVar2;
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}

