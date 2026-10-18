/* speed.exe 005b2d80 FUN_005b2d80; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_005b2d80(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 8) < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xff;
    if (*(int *)(param_1 + 8) < 0x100) {
      uVar4 = (uint)param_1[8];
    }
  }
  if (*(int *)(param_1 + 4) < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xff;
    if (*(int *)(param_1 + 4) < 0x100) {
      uVar3 = (uint)param_1[4];
    }
  }
  if (*(int *)param_1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xff;
    if (*(int *)param_1 < 0x100) {
      uVar2 = (uint)*param_1;
    }
  }
  if (*(int *)(param_1 + 0xc) < 0) {
    return (uVar4 << 8 | uVar3) << 8 | uVar2;
  }
  uVar1 = 0xff;
  if (*(int *)(param_1 + 0xc) < 0x100) {
    uVar1 = (uint)param_1[0xc];
  }
  return ((uVar1 << 8 | uVar4) << 8 | uVar3) << 8 | uVar2;
}

