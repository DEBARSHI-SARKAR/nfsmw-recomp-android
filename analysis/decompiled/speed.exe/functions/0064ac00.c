/* speed.exe 0064ac00 FUN_0064ac00; analysis pseudocode, not buildable source.
 * calls 00464080 FUN_00464080
 * calls 00465a70 FUN_00465a70
 */

void __thiscall FUN_0064ac00(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 == 0) {
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
    uVar5 = uVar5 | 0x40;
  }
  uVar1 = uVar5 & 0xf;
  if (param_2 == '\0') {
    if (uVar1 == 0) goto LAB_0064ac45;
    iVar4 = *(int *)(param_1 + 0x40);
    iVar2 = FUN_00464080(uVar5);
    if (iVar4 <= iVar2) goto LAB_0064ac45;
  }
  else {
    uVar5 = uVar5 | 0x40;
    if (uVar1 == 0) goto LAB_0064ac45;
  }
  uVar5 = uVar5 & 0xfffffff0;
LAB_0064ac45:
  uVar3 = FUN_00465a70(iVar4,uVar5);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  return;
}

