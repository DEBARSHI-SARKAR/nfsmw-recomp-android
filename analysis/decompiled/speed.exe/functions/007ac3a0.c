/* speed.exe 007ac3a0 FUN_007ac3a0; analysis pseudocode, not buildable source.
 * calls 0056dbe0 FUN_0056dbe0
 */

void __thiscall FUN_007ac3a0(int *param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0) &&
     ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0)) {
    iVar2 = FUN_0056dbe0(0xb);
    bVar1 = *(byte *)(iVar2 + 4);
  }
  else {
    bVar1 = *(byte *)(DAT_0091cf90 + 400);
  }
  uVar3 = (uint)bVar1;
  if (param_3 == -0x6edfbf62) {
    uVar3 = uVar3 - 1;
    if ((int)uVar3 < 1) {
      uVar3 = 8;
    }
  }
  else if ((param_3 == -0x4a68e40f) && (uVar3 = uVar3 + 1, 8 < uVar3)) {
    uVar3 = 1;
  }
  if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0) &&
     ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0)) {
    iVar2 = FUN_0056dbe0(0xb);
    *(char *)(iVar2 + 4) = (char)uVar3;
  }
  else {
    *(char *)(DAT_0091cf90 + 400) = (char)uVar3;
  }
  *(undefined1 *)((int)param_1 + 0x2a) = 1;
  (**(code **)(*param_1 + 0x38))(param_3);
  (**(code **)(*param_1 + 0xc))();
  return;
}

