/* speed.exe 006eee80 FUN_006eee80; analysis pseudocode, not buildable source.
 * calls 0067c310 FUN_0067c310
 * calls 004e4ea0 FUN_004e4ea0
 * calls 0045a430 FUN_0045a430
 */

void __thiscall FUN_006eee80(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ea28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004e4ea0(*param_1,0,0);
  local_4 = 0;
  cVar1 = FUN_0067c310(local_20,param_2);
  if (cVar1 == '\0') {
    param_1[3] = 0;
  }
  else {
    param_1[0x6a] = *param_2;
    param_1[0x6b] = param_2[1];
    param_1[0x6c] = param_2[2];
    param_1[3] = param_1 + 0x6a;
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}

