/* speed.exe 00852d60 FUN_00852d60; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00852d60(undefined4 param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  bVar2 = *param_2;
  while (bVar2 != 0) {
    if (' ' < (char)bVar2) {
      uVar3 = (bVar2 & 0x5f) + uVar3 * 0x83;
    }
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  return (int)((longlong)(ulonglong)(uVar3 & 0x7fffffff) % (longlong)*(int *)(param_3 + 0x10));
}

