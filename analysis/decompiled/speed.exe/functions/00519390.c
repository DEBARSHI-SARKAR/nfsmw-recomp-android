/* speed.exe 00519390 FUN_00519390; analysis pseudocode, not buildable source.
 */

void FUN_00519390(short *param_1,uint param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  
  sVar1 = *param_1;
  while (sVar1 != 0) {
    param_1 = param_1 + 1;
    sVar1 = *param_1;
  }
  if ((param_2 != 0) && (uVar3 = 0, param_2 != 0)) {
    do {
      psVar2 = *(short **)(param_3 + uVar3 * 4);
      sVar1 = *psVar2;
      while (sVar1 != 0) {
        psVar2 = psVar2 + 1;
        sVar1 = *psVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return;
}

