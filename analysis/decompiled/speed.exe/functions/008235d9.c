/* speed.exe 008235d9 FUN_008235d9; analysis pseudocode, not buildable source.
 * calls 00826131 FUN_00826131
 */

void FUN_008235d9(byte *param_1,undefined4 param_2)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    pbVar2 = param_1 + 4;
    do {
      FUN_00826131((int)*(short *)pbVar2,param_2);
      iVar1 = iVar1 + 1;
      pbVar2 = pbVar2 + 2;
    } while (iVar1 < (int)(uint)*param_1);
  }
  return;
}

