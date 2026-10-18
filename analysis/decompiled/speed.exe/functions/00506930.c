/* speed.exe 00506930 FUN_00506930; analysis pseudocode, not buildable source.
 * calls 0065f680 FUN_0065f680
 * calls 0064d8f0 FUN_0064d8f0
 * calls 0065aed0 FUN_0065aed0
 * calls 00466340 FUN_00466340
 * calls 00461970 FUN_00461970
 * calls 00661010 FUN_00661010
 * calls 00500b00 FUN_00500b00
 * calls 00465a70 FUN_00465a70
 */

int * __thiscall
FUN_00506930(int param_1,undefined4 param_2,int param_3,int param_4,undefined2 param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar2 = (int *)FUN_00500b00(param_2);
  if (piVar2 != (int *)0x0) {
    piVar2[0xe] = piVar2[0xe] + 1;
    return piVar2;
  }
  iVar3 = FUN_0065f680(param_2,1,1);
  if (iVar3 == 0) {
    return (int *)0x0;
  }
  iVar4 = FUN_0064d8f0(iVar3);
  FUN_0065aed0(iVar3);
  if (iVar4 < 0x41) {
    return (int *)0x0;
  }
  piVar5 = (int *)FUN_00465a70(0x10,0x40);
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  piVar5[2] = param_3;
  piVar5[3] = param_4;
  piVar6 = (int *)FUN_00466340(DAT_00915fb0);
  piVar2 = piVar6;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  iVar3 = FUN_00461970(param_2);
  piVar6[2] = iVar3;
  *(undefined2 *)(piVar6 + 3) = param_5;
  piVar6[6] = 0;
  piVar6[0xe] = 1;
  piVar6[4] = (int)piVar5;
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  *puVar1 = piVar6;
  *(int **)(param_1 + 0x1c) = piVar6;
  piVar6[1] = (int)puVar1;
  *piVar6 = param_1 + 0x18;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (0x7fff < iVar4) {
    iVar4 = 0x8000;
  }
  iVar3 = FUN_00465a70(iVar4,0x2040);
  piVar6[7] = iVar3;
  *piVar5 = iVar4;
  FUN_00661010(piVar6[7],piVar6[2],0,iVar4,&LAB_00504d80,param_1,piVar6,0);
  return piVar6;
}

