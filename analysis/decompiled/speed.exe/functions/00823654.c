/* speed.exe 00823654 FUN_00823654; analysis pseudocode, not buildable source.
 * calls 0082621f FUN_0082621f
 */

void FUN_00823654(byte *param_1,undefined4 param_2)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    pbVar2 = param_1 + 4;
    do {
      FUN_0082621f((int)*(short *)pbVar2,param_2);
      iVar1 = iVar1 + 1;
      pbVar2 = pbVar2 + 2;
    } while (iVar1 < (int)(uint)*param_1);
  }
  return;
}

