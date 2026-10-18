/* speed.exe 005af190 FUN_005af190; analysis pseudocode, not buildable source.
 */

int FUN_005af190(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = -1;
  if (param_1 != (byte *)0x0) {
    bVar2 = *param_1;
    while (bVar2 != 0) {
      iVar3 = iVar3 * 0x21 + (uint)bVar2;
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      bVar2 = *pbVar1;
    }
  }
  return iVar3;
}

