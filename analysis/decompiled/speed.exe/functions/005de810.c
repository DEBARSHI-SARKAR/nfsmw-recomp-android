/* speed.exe 005de810 FUN_005de810; analysis pseudocode, not buildable source.
 */

float10 __fastcall FUN_005de810(short *param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int local_8;
  
  sVar3 = *param_1 << 0xb;
  iVar1 = (int)sVar3 >> 0xb;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar2 = 1;
  local_8 = 1;
  if (0 < iVar1) {
    do {
      iVar2 = iVar2 * 10;
      iVar1 = iVar1 + -1;
      local_8 = iVar2;
    } while (iVar1 != 0);
  }
  sVar4 = *param_1 >> 5;
  if (-1 < sVar3) {
    return (float10)(int)sVar4 * (float10)local_8;
  }
  return (float10)(int)sVar4 / (float10)local_8;
}

