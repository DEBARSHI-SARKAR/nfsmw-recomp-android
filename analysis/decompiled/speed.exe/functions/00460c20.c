/* speed.exe 00460c20 FUN_00460c20; analysis pseudocode, not buildable source.
 */

int FUN_00460c20(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  
  bVar2 = *param_1;
  while (bVar2 != 0) {
    param_2 = param_2 * 0x21 + (uint)bVar2;
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar2 = *pbVar1;
  }
  return param_2;
}

