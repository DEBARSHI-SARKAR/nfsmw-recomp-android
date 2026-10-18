/* speed.exe 008332f6 FUN_008332f6; analysis pseudocode, not buildable source.
 */

bool __fastcall FUN_008332f6(undefined4 param_1,int param_2,undefined1 param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = (byte *)(param_2 + 0x91);
  bVar2 = *pbVar1;
  if (bVar2 < 200) {
    *(undefined1 *)(bVar2 + 0x92 + param_2) = param_3;
    *pbVar1 = *pbVar1 + 1;
  }
  return bVar2 < 200;
}

