/* speed.exe 00823739 FUN_00823739; analysis pseudocode, not buildable source.
 * calls 00822dbd FUN_00822dbd
 */

undefined4 FUN_00823739(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    pbVar2 = param_1 + 4;
    do {
      FUN_00822dbd((int)*(short *)pbVar2);
      iVar1 = iVar1 + 1;
      pbVar2 = pbVar2 + 2;
    } while (iVar1 < (int)(uint)*param_1);
  }
  return 0;
}

