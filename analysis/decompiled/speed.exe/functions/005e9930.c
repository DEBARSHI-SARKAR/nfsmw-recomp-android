/* speed.exe 005e9930 FUN_005e9930; analysis pseudocode, not buildable source.
 * calls 005e3a70 FUN_005e3a70
 */

void __thiscall FUN_005e9930(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar3 = 0;
  if (param_1[1] + uVar1 != 0) {
    iVar2 = 0;
    do {
      if (uVar3 < uVar1) {
        uVar1 = param_1[3] + iVar2;
      }
      else {
        uVar1 = param_1[(uVar3 - uVar1) + 4];
      }
      if (*(int *)(uVar1 + 0xc) == param_2) {
        FUN_005e3a70();
      }
      uVar1 = *param_1;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x14;
    } while (uVar3 < param_1[1] + uVar1);
  }
  return;
}

