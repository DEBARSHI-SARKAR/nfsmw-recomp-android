/* speed.exe 00840530 FUN_00840530; analysis pseudocode, not buildable source.
 */

uint FUN_00840530(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  piVar3 = (int *)(param_1 + 0x18a0);
  do {
    if (*piVar3 == -1) {
      iVar1 = param_1 + uVar2 * 0xc;
      *(undefined4 *)(iVar1 + 0x18a0) = param_2;
      *(undefined4 *)(iVar1 + 0x18a4) = param_3;
      *(undefined4 *)(param_1 + (uVar2 * 3 + 0x62a) * 4) = param_4;
      return uVar2 | 0x1000;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 3;
  } while ((int)uVar2 < 0x20);
  return 0xffffffff;
}

