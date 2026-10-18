/* speed.exe 005734e0 FUN_005734e0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 005157e0 FUN_005157e0
 */

/* WARNING: Removing unreachable block (ram,0x0057353f) */
/* WARNING: Removing unreachable block (ram,0x00573585) */
/* WARNING: Removing unreachable block (ram,0x005735ac) */
/* WARNING: Removing unreachable block (ram,0x005735c5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005734e0(uint param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x2c) == 0) {
    return;
  }
  uVar3 = FUN_007c4b80();
  if (*(char *)(param_1 + 0x20) == '\0') {
    param_1 = uVar3 & 0xff;
    if (param_1 == 0) {
      param_1 = 0;
    }
    else if (0xff < param_1) {
      param_1 = 0xff;
    }
  }
  else {
    param_1 = 0x96;
  }
  bVar2 = FUN_007c4b80();
  uVar4 = (uint)bVar2;
  bVar2 = FUN_007c4b80();
  uVar3 = FUN_007c4b80();
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 0) {
    uVar3 = 0;
LAB_00573660:
    uVar5 = uVar3;
  }
  else {
    uVar5 = 0xff;
    if (uVar3 < 0x100) goto LAB_00573660;
  }
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = 0xff;
    if (0xff < uVar4) goto LAB_0057367c;
  }
  uVar3 = uVar4;
LAB_0057367c:
  uVar4 = (uint)bVar2;
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else if (0xff < uVar4) {
    uVar4 = 0xff;
  }
  FUN_005157e0(iVar1,((param_1 * 0x100 + uVar5) * 0x100 + uVar3) * 0x100 + uVar4);
  return;
}

