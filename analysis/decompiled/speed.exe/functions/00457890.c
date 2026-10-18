/* speed.exe 00457890 FUN_00457890; analysis pseudocode, not buildable source.
 * calls 00456830 FUN_00456830
 */

uint __thiscall FUN_00457890(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    piVar2 = *(int **)(param_1 + 4);
    uVar5 = *(uint *)(*(int *)(param_1 + 0x2c) + 8 + param_2 * 0x10);
    if (uVar5 < (uint)piVar2[2]) {
      piVar4 = *(int **)(*piVar2 + 4 + uVar5 * 8);
    }
    else {
      piVar4 = (int *)0x0;
    }
    if (uVar5 < (uint)piVar2[2]) {
      local_c = *(undefined4 *)(*piVar2 + uVar5 * 8);
    }
    else {
      local_c = 0;
    }
  }
  else {
    local_c = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10 + param_2 * 0x14);
    iVar1 = **(int **)(param_1 + 4);
    uVar5 = iVar1 + (*(int **)(param_1 + 4))[2] * 8;
    local_4 = 0;
    local_8 = local_c;
    uVar3 = FUN_00456830(iVar1,uVar5,&local_8,0);
    if (uVar5 <= uVar3) goto LAB_0045793a;
    piVar4 = *(int **)(uVar3 + 4);
  }
  uVar3 = 0;
  if (piVar4 != (int *)0x0) {
    uVar5 = (**(code **)(*piVar4 + 4))(param_1,&local_c,*(int *)(param_1 + 0x30) + param_2 * 4);
    return uVar5;
  }
LAB_0045793a:
  return uVar3 & 0xffffff00;
}

