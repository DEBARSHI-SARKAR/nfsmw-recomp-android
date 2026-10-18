/* speed.exe 005484b0 FUN_005484b0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00516af0 FUN_00516af0
 * calls 00525220 FUN_00525220
 * calls 00514c70 FUN_00514c70
 * calls 00530240 FUN_00530240
 */

void __fastcall FUN_005484b0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_005484e5:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar2 == 0) goto LAB_005484e5;
    iVar2 = FUN_005b8550(0xc1f62308);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x18) != 1)) goto LAB_005484e5;
  }
  *(int *)(param_1 + 0x2c) = iVar2;
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_00548516:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar2 == 0) goto LAB_00548516;
    iVar2 = FUN_005b8550(0xf5a2a087);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x18) != 1)) goto LAB_00548516;
  }
  *(int *)(param_1 + 0x30) = iVar2;
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_00548547:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar2 == 0) goto LAB_00548547;
    iVar2 = FUN_005b8550(0x2cbe1dd0);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x18) != 1)) goto LAB_00548547;
  }
  *(int *)(param_1 + 0x34) = iVar2;
  cVar1 = *(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
  if (cVar1 == '\f') {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = 0x29e4b193;
  }
  else {
    if (cVar1 != '\b') goto LAB_0054858c;
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = 0x2b0bca2d;
  }
  FUN_00525220(uVar3,0xd6c0e097,uVar4);
LAB_0054858c:
  *(uint *)(param_1 + 0x48) = *(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0) + 1;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x34);
  FUN_00514c70(*(undefined4 *)(param_1 + 0x2c));
  FUN_00514c70(*(undefined4 *)(param_1 + 0x68));
  FUN_00514c70(*(undefined4 *)(param_1 + 0x6c));
  if (*(char *)(param_1 + 0x50) == '\0') {
    FUN_00530240();
    return;
  }
  return;
}

