/* speed.exe 00513650 FUN_00513650; analysis pseudocode, not buildable source.
 * calls 00586050 FUN_00586050
 */

int __thiscall FUN_00513650(int param_1,char *param_2)

{
  float10 fVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  float10 fVar6;
  float local_8;
  int local_4;
  
  iVar4 = 0;
  local_8 = 0.0;
  local_4 = 0;
  sVar2 = (short)*param_2;
  sVar3 = 0;
  if (*param_2 != 0) {
    while( true ) {
      sVar5 = sVar2;
      param_2 = param_2 + 1;
      if (sVar5 == 0x20) {
        local_4 = iVar4;
      }
      fVar6 = (float10)FUN_00586050(sVar5,sVar3,*(undefined4 *)(param_1 + 0x70));
      fVar1 = (float10)local_8;
      local_8 = (float)(fVar6 + fVar1);
      if ((float10)*(int *)(param_1 + 0x6c) <= fVar6 + fVar1) break;
      iVar4 = iVar4 + 1;
      sVar2 = (short)*param_2;
      sVar3 = sVar5;
      if (*param_2 == 0) {
        return iVar4;
      }
    }
    if (0 < local_4) {
      return local_4;
    }
  }
  return iVar4;
}

