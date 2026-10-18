/* speed.exe 005fb710 FUN_005fb710; analysis pseudocode, not buildable source.
 * calls 005fab40 FUN_005fab40
 */

uint __thiscall FUN_005fb710(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  uVar2 = 0;
  if (param_1[1] + uVar4 != 0) {
    iVar3 = 0;
    do {
      if (uVar2 < uVar4) {
        uVar4 = param_1[3] + iVar3;
      }
      else {
        uVar4 = param_1[(uVar2 - uVar4) + 4];
      }
      iVar1 = FUN_005fab40();
      if (iVar1 == param_2) {
        return uVar4;
      }
      uVar4 = *param_1;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x14;
    } while (uVar2 < param_1[1] + uVar4);
  }
  return 0;
}

