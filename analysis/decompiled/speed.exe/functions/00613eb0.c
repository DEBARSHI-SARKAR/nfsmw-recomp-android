/* speed.exe 00613eb0 FUN_00613eb0; analysis pseudocode, not buildable source.
 * calls 00613dc0 FUN_00613dc0
 */

void FUN_00613eb0(int param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  uVar3 = (param_3 >> 5) + 1;
  uVar4 = param_3;
  for (uVar2 = param_3; uVar3 <= uVar2; uVar2 = uVar2 - uVar3) {
    uVar4 = uVar4 ^ (uint)(byte)param_2[uVar2 - 1] + uVar4 * 0x20 + (uVar4 >> 2);
  }
  puVar1 = *(undefined4 **)
            (**(int **)(param_1 + 0x10) + ((*(int **)(param_1 + 0x10))[2] - 1U & uVar4) * 4);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      FUN_00613dc0(param_1,param_2,param_3);
      return;
    }
    if (puVar1[3] == param_3) {
      bVar7 = true;
      uVar2 = param_3;
      pcVar5 = param_2;
      pcVar6 = (char *)(puVar1 + 4);
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        bVar7 = *pcVar5 == *pcVar6;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        return;
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

