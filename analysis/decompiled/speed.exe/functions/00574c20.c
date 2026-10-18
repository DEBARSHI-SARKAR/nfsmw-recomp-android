/* speed.exe 00574c20 FUN_00574c20; analysis pseudocode, not buildable source.
 * calls 005158b0 FUN_005158b0
 */

void __thiscall FUN_00574c20(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_4 = param_1[4];
  local_8 = param_1[3];
  local_10 = param_1[5];
  local_c = param_1[6];
  cVar1 = FUN_005158b0(param_3,param_4,&local_8,&local_10);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 4))(param_2,0xc407210);
  }
  return;
}

