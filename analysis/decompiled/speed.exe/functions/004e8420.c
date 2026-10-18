/* speed.exe 004e8420 FUN_004e8420; analysis pseudocode, not buildable source.
 * calls 004e71c0 FUN_004e71c0
 * calls 007869c0 FUN_007869c0
 */

void __thiscall FUN_004e8420(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
  if ((*(int *)(iVar3 + 0x228) == 5) && (iVar3 = *(int *)(iVar3 + 0x238), iVar3 != 0)) {
    FUN_007869c0(iVar3);
    iVar3 = *(int *)(param_1 + 100);
    if (iVar3 != 0) {
      uVar1 = *(undefined4 *)(iVar3 + 0x34);
      uVar2 = *(undefined4 *)(iVar3 + 0x38);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar3 + 0x30);
      *(undefined4 *)(param_1 + 0x44) = uVar1;
      *(undefined4 *)(param_1 + 0x48) = uVar2;
      iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
      uVar1 = *(undefined4 *)(iVar3 + 0x54);
      uVar2 = *(undefined4 *)(iVar3 + 0x58);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar3 + 0x50);
      *(undefined4 *)(param_1 + 0x54) = uVar1;
      *(undefined4 *)(param_1 + 0x58) = uVar2;
    }
  }
  FUN_004e71c0(param_2);
  return;
}

