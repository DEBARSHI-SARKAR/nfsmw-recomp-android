/* speed.exe 0076e8e0 FUN_0076e8e0; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_0076e8e0(byte *param_1,int param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_10;
  int local_c;
  
  uVar5 = (uint)param_1[1];
  iVar4 = 0;
  uVar6 = (uint)*param_1;
  local_c = 0;
  if (param_3 == '\0') {
    local_10 = uVar6 - uVar5;
    uVar3 = uVar5;
  }
  else {
    local_10 = uVar5;
    uVar3 = uVar6 - uVar5;
  }
  uVar1 = uVar5;
  if (0 < (int)uVar3) {
    do {
      uVar1 = uVar1 - 1;
      if (param_3 == '\0') {
        uVar2 = uVar1;
        if ((int)uVar1 < 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = uVar5 + iVar4;
        if ((int)uVar6 <= (int)(uVar5 + iVar4)) {
          uVar2 = uVar6 - 1;
        }
      }
    } while (((((byte)*(undefined4 *)(param_1 + uVar2 * 4 + 4) & 0xf) != 1) ||
             (bVar7 = param_2 != local_c, local_10 = uVar2, local_c = local_c + 1, bVar7)) &&
            (iVar4 = iVar4 + 1, iVar4 < (int)uVar3));
  }
  return local_10;
}

