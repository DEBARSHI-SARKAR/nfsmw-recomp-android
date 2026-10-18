/* speed.exe 007f9173 FUN_007f9173; analysis pseudocode, not buildable source.
 */

void FUN_007f9173(byte *param_1,byte *param_2,undefined1 *param_3,int *param_4,int *param_5)

{
  byte *pbVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  
  do {
    uVar2 = *param_3;
    param_3 = param_3 + 1;
    pbVar1 = param_1 + 1;
    bVar3 = *param_2;
    param_2 = param_2 + 1;
    bVar4 = *param_1;
    param_1 = param_1 + 2;
    *param_4 = ((uint)CONCAT11(uVar2,*pbVar1) * 0x100 + (uint)bVar3) * 0x100 + (uint)bVar4;
    param_4 = param_4 + 1;
  } while (param_4 != param_5);
  return;
}

