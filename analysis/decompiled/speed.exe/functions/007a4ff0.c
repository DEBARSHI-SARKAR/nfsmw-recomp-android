/* speed.exe 007a4ff0 FUN_007a4ff0; analysis pseudocode, not buildable source.
 * calls 005769c0 FUN_005769c0
 * calls 00576800 FUN_00576800
 * calls 005768a0 FUN_005768a0
 * calls 00575b00 FUN_00575b00
 */

void FUN_007a4ff0(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    uVar3 = FUN_005768a0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc));
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    if ((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) {
      cVar1 = FUN_00575b00();
      FUN_00576800((-(cVar1 != '\0') & 8U) + 2,uVar3,uVar2);
      return;
    }
    if (((*(uint *)(DAT_0091cf90 + 300) & 8) == 0) ||
       (uVar4 = 4, (*(uint *)(DAT_0091cf90 + 300) & 0x20) == 0)) {
      uVar4 = 1;
    }
    FUN_00576800(uVar4,uVar3,uVar2);
    return;
  }
  uVar2 = FUN_005769c0(*(undefined4 *)(param_1 + 0x18));
  if ((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) {
    cVar1 = FUN_00575b00();
    FUN_00576800((-(cVar1 != '\0') & 8U) + 2,uVar2,param_2);
    return;
  }
  if (((*(uint *)(DAT_0091cf90 + 300) & 8) == 0) ||
     (uVar3 = 4, (*(uint *)(DAT_0091cf90 + 300) & 0x20) == 0)) {
    uVar3 = 1;
  }
  FUN_00576800(uVar3,uVar2,param_2);
  return;
}

