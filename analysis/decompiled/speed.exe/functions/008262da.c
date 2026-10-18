/* speed.exe 008262da FUN_008262da; analysis pseudocode, not buildable source.
 * calls 0081f026 FUN_0081f026
 */

void FUN_008262da(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_34 [12];
  
  local_34[0] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  local_34[3] = 0;
  local_34[4] = 0;
  local_34[5] = 0;
  local_34[6] = 0;
  local_34[7] = 0;
  local_34[8] = 0;
  local_34[9] = 0;
  local_34[10] = 0;
  local_34[0xb] = 0;
  cVar1 = *(char *)(param_1 + 3);
  if (0 < cVar1) {
    iVar2 = *(int *)(param_1 + 0x68);
    piVar3 = (int *)(param_1 + 0x80);
    iVar4 = 0;
    do {
      local_34[iVar4] = piVar3[-6] + param_2;
      iVar5 = iVar4 + 1;
      local_34[iVar4 + 6] = *piVar3 + iVar2 + param_2;
      piVar3 = piVar3 + 1;
      iVar4 = iVar5;
    } while (iVar5 < cVar1);
  }
  FUN_0081f026(param_3,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),0,0,param_5,
               param_6,local_34,local_34 + 6,param_1 + 0x98,*(undefined4 *)(param_1 + 200),
               (int)*(char *)(param_1 + 2));
  return;
}

