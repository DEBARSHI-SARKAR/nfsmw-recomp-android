/* speed.exe 005f1780 FUN_005f1780; analysis pseudocode, not buildable source.
 * calls 005ef130 FUN_005ef130
 */

int FUN_005f1780(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = param_2;
  if (param_2 < 2) {
    return 0;
  }
  iVar4 = 0x20 - param_3;
  uVar7 = (1 << ((byte)param_3 & 0x1f)) + -1 << ((byte)iVar4 & 0x1f);
  uVar6 = 0xffffffff;
  if (-1 < iVar4) {
    iVar1 = param_2 * 4;
    param_2 = iVar4;
    do {
      uVar5 = 0;
      if (uVar3 != 0) {
        do {
          puVar2 = (uint *)(param_1 + uVar5 * 4);
          *puVar2 = *puVar2 & uVar6;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
      }
      FUN_005ef130(param_1,param_1 + uVar3 * 4,iVar1 >> 2);
      uVar5 = 1;
      if (uVar3 < 2) {
        return param_2;
      }
      while ((*(uint *)(param_1 + uVar5 * 4) & uVar7) !=
             (*(uint *)(param_1 + -4 + uVar5 * 4) & uVar7)) {
        uVar5 = uVar5 + 1;
        if (uVar3 <= uVar5) {
          return param_2;
        }
      }
      uVar6 = uVar6 >> 1;
      uVar7 = uVar7 >> 1;
      param_2 = param_2 + -1;
    } while (-1 < (int)param_2);
  }
  return 0;
}

