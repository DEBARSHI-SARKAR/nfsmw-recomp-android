/* speed.exe 0076e980 FUN_0076e980; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_0076e980(byte *param_1,int param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint local_c;
  int local_8;
  
  uVar3 = (uint)*param_1;
  uVar4 = (uint)param_1[1];
  local_8 = 0;
  if (param_3 == '\0') {
    local_c = uVar3 - uVar4;
    uVar2 = uVar4;
  }
  else {
    local_c = uVar4;
    uVar2 = uVar3 - uVar4;
  }
  iVar5 = uVar2 - 1;
  if (-1 < iVar5) {
    uVar2 = (uVar4 - iVar5) - 1;
    do {
      if (param_3 == '\0') {
        uVar1 = uVar2;
        if ((int)uVar2 < 0) {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = uVar4 + iVar5;
        if ((int)uVar3 <= (int)(uVar4 + iVar5)) {
          uVar1 = uVar3 - 1;
        }
      }
      if ((((byte)*(undefined4 *)(param_1 + uVar1 * 4 + 4) & 0xf) == 1) &&
         (bVar6 = param_2 == local_8, local_c = uVar1, local_8 = local_8 + 1, bVar6)) {
        return uVar1;
      }
      iVar5 = iVar5 + -1;
      uVar2 = uVar2 + 1;
    } while (-1 < iVar5);
  }
  return local_c;
}

