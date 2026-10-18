/* speed.exe 00574e50 FUN_00574e50; analysis pseudocode, not buildable source.
 * calls 00515140 FUN_00515140
 * calls 005158b0 FUN_005158b0
 */

void __thiscall FUN_00574e50(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_8 = (float)param_1[3];
  local_4 = (float)param_1[4];
  FUN_00515140(param_1[0xc],&local_10,&local_c);
  local_10 = local_10 - local_8;
  local_c = local_c - local_4;
  cVar1 = FUN_005158b0(param_3,param_4,&local_8,&local_10);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 4))(param_2,0xc407210);
  }
  return;
}

