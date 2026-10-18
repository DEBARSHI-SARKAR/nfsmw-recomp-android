/* speed.exe 0057fc90 FUN_0057fc90; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

bool __fastcall FUN_0057fc90(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  
  pbVar1 = *(byte **)(param_1 + 0x124);
  if (pbVar1 == (byte *)0x0) {
    return false;
  }
  iVar2 = 0x8cc8;
  bVar6 = false;
  iVar3 = 0;
  bVar7 = true;
  pbVar4 = pbVar1;
  pbVar5 = (byte *)(*(int *)(param_1 + 0x10) + 0x414);
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *pbVar4 < *pbVar5;
    bVar7 = *pbVar4 == *pbVar5;
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
  } while (bVar7);
  if (!bVar7) {
    iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
  }
  FUN_004655f0(pbVar1);
  *(undefined4 *)(param_1 + 0x124) = 0;
  return iVar3 != 0;
}

