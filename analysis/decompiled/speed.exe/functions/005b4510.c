/* speed.exe 005b4510 FUN_005b4510; analysis pseudocode, not buildable source.
 * calls 005af1c0 FUN_005af1c0
 */

uint __thiscall
FUN_005b4510(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  uVar2 = *(uint *)(param_1 + 0x68) & 4;
  if ((uVar2 == 0) || (param_6 < param_5)) {
    if ((*(uint *)(param_1 + 0x68) & 2) == 0) goto LAB_005b45a7;
    if (uVar2 == 0) {
      uVar2 = param_4 + param_2;
      if ((int)uVar2 < 0) goto LAB_005b4598;
    }
    else {
      uVar2 = param_3 + param_2;
      if ((int)uVar2 < 0) {
LAB_005b4598:
        pcVar4 = "CLB AT MIN";
        goto LAB_005b4575;
      }
      param_5 = param_5 - param_6;
    }
    if ((int)uVar2 < param_5) {
LAB_005b45a7:
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  else {
    iVar1 = **(int **)(param_1 + 0x5c);
    uVar3 = FUN_005af1c0("CLB AT MIN",param_1,0xff,0);
    (**(code **)(iVar1 + 0x18))(uVar3);
  }
  pcVar4 = "CLB AT MAX";
LAB_005b4575:
  iVar1 = **(int **)(param_1 + 0x5c);
  uVar3 = FUN_005af1c0(pcVar4,param_1,0xff,0);
  uVar2 = (**(code **)(iVar1 + 0x18))(uVar3);
  return uVar2 & 0xffffff00;
}

