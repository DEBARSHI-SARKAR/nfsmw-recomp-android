/* speed.exe 007f88ef FUN_007f88ef; analysis pseudocode, not buildable source.
 * calls 00404db0 FUN_00404db0
 * calls 007f84b0 FUN_007f84b0
 */

void __thiscall
FUN_007f88ef(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)FUN_007f84b0(param_2 * 0x34 + 4);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar1 + 1;
    *piVar1 = param_2;
    FUN_00404db0(piVar2,0x34,param_2,&LAB_007f87fa);
  }
  uVar4 = 0;
  *param_1 = (int)piVar2;
  param_1[1] = param_2;
  if (param_2 != 0) {
    piVar2[5] = 0;
  }
  if (param_1[1] != 0) {
    iVar3 = 0;
    do {
      *(undefined4 *)(iVar3 + *param_1) = param_3;
      *(undefined4 *)(iVar3 + 4 + *param_1) = param_4;
      *(undefined4 *)(iVar3 + 8 + *param_1) = param_5;
      *(undefined4 *)(iVar3 + 0xc + *param_1) = param_6;
      *(uint *)(iVar3 + 0x10 + *param_1) = uVar4;
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x34;
    } while (uVar4 < (uint)param_1[1]);
  }
  return;
}

