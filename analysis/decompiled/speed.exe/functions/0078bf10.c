/* speed.exe 0078bf10 FUN_0078bf10; analysis pseudocode, not buildable source.
 */

void FUN_0078bf10(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_0091cf90;
  uVar3 = *param_1;
  *param_1 = uVar3 & 0xfffffdff;
  if (*(char *)(iVar2 + 0x141) == '\x01') {
    *param_1 = uVar3 & 0xfffffdff | 0x200;
  }
  uVar3 = *param_1;
  *param_1 = uVar3 & 0xfffffbff;
  if (*(char *)(iVar2 + 0x143) == '\x01') {
    *param_1 = uVar3 & 0xfffffbff | 0x400;
  }
  uVar3 = *param_1;
  *param_1 = uVar3 & 0xffffdfff;
  if (*(char *)(iVar2 + 0x15f) == '\x01') {
    *param_1 = uVar3 & 0xffffdfff | 0x2000;
  }
  uVar3 = *param_1;
  *param_1 = uVar3 & 0xfffff7ff;
  if (*(char *)(iVar2 + 0x142) == '\x01') {
    *param_1 = uVar3 & 0xfffff7ff | 0x800;
  }
  uVar3 = *param_1;
  *param_1 = uVar3 & 0xffffefff;
  if (*(char *)(iVar2 + 0x191) == '\x01') {
    *param_1 = uVar3 & 0xffffefff | 0x1000;
  }
  uVar3 = *param_1 & 0x1fffffff;
  *param_1 = uVar3;
  iVar1 = *(int *)(iVar2 + 0x168);
  if (iVar1 == 1) {
    uVar3 = uVar3 | 0x80000000;
  }
  else if (iVar1 == 0) {
    uVar3 = uVar3 | 0x40000000;
  }
  else {
    if (iVar1 != 2) goto LAB_0078bfce;
    uVar3 = uVar3 | 0x20000000;
  }
  *param_1 = uVar3;
LAB_0078bfce:
  uVar3 = *param_1;
  *param_1 = uVar3 & 0xfffffffe;
  if (*(char *)(iVar2 + 0x173) == '\x01') {
    *param_1 = uVar3 & 0xfffffffe | 1;
  }
  uVar3 = *param_1;
  *param_1 = uVar3 & 0xffffbfff;
  if (*(char *)(iVar2 + 0x178) == '\x01') {
    *param_1 = uVar3 & 0xffffbfff | 0x4000;
  }
  uVar3 = *param_1 & 0xfc0fffff;
  *param_1 = uVar3;
  iVar2 = *(int *)(iVar2 + 0x160);
  if (iVar2 == 0) {
    *param_1 = uVar3 | 0x100000;
    return;
  }
  if (iVar2 == 1) {
    *param_1 = uVar3 | 0x200000;
    return;
  }
  if (iVar2 == 2) {
    *param_1 = uVar3 | 0x400000;
    return;
  }
  if (iVar2 == 3) {
    *param_1 = uVar3 | 0x800000;
    return;
  }
  if (iVar2 == 4) {
    *param_1 = uVar3 | 0x1000000;
    return;
  }
  if (iVar2 == 5) {
    *param_1 = uVar3 | 0x2000000;
  }
  return;
}

