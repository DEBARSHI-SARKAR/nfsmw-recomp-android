/* speed.exe 0077cd10 FUN_0077cd10; analysis pseudocode, not buildable source.
 * calls 0077a8b0 FUN_0077a8b0
 */

uint __thiscall FUN_0077cd10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  if ((*(uint *)(param_1 + 0x88) & 4) != 0) {
    in_EAX = 0;
    if (*(int *)(param_1 + 0x50) != 0) {
      in_EAX = (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50)) / 0x28;
      if (in_EAX != 0) {
        iVar3 = param_1 + 0x4c;
      }
    }
  }
  if ((*(uint *)(param_1 + 0x88) & 8) != 0) {
    iVar1 = param_1 + 0x3c;
    if (((*(int *)(param_1 + 0x40) != 0) &&
        (in_EAX = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2, in_EAX != 0)) &&
       (iVar4 = iVar1, iVar1 != 0)) goto LAB_0077cd73;
  }
  if (iVar3 == 0) {
    return in_EAX & 0xffffff00;
  }
LAB_0077cd73:
  uVar2 = FUN_0077a8b0(iVar4,iVar3,param_2,param_3);
  return uVar2;
}

