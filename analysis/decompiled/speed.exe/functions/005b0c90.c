/* speed.exe 005b0c90 FUN_005b0c90; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b0c90(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)(param_1 + 0x514c);
  iVar2 = 0x20;
  do {
    if (*piVar1 == param_2) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(int *)(param_1 + 0x514c + *(int *)(param_1 + 0x5148) * 8) = param_2;
  *(undefined4 *)(param_1 + 0x5150 + *(int *)(param_1 + 0x5148) * 8) = param_3;
  uVar3 = *(int *)(param_1 + 0x5148) + 1U & 0x8000001f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
  }
  *(uint *)(param_1 + 0x5148) = uVar3;
  return;
}

