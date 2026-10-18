/* speed.exe 0083f420 FUN_0083f420; analysis pseudocode, not buildable source.
 * calls 0078af30 FUN_0078af30
 * calls 0084bcc0 FUN_0084bcc0
 */

int * FUN_0083f420(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined2 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)FUN_0078af30(0x1dc);
  piVar4 = piVar1;
  for (iVar3 = 0x77; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  *piVar1 = param_1;
  piVar1[1] = param_2;
  if (param_3 < 0x1000) {
    param_3 = 0x1000;
  }
  iVar3 = FUN_0078af30(param_3);
  piVar1[0x65] = iVar3;
  piVar1[0x67] = param_3;
  piVar1[7] = 0;
  piVar1[8] = 0;
  iVar3 = (**(code **)(param_1 + 0x28))(param_1);
  piVar1[0xd] = iVar3;
  piVar1[0x14] = iVar3;
  piVar1[0x15] = iVar3;
  piVar1[0x11] = iVar3;
  piVar1[0x10] = iVar3;
  piVar1[0x19] = iVar3;
  *(undefined1 *)(piVar1 + 0x1e) = 0;
  *(undefined1 *)((int)piVar1 + 0x79) = 0;
  puVar2 = (undefined2 *)((int)piVar1 + 0x86);
  iVar3 = 0x20;
  do {
    puVar2[-1] = 200;
    *puVar2 = 200;
    puVar2[1] = 200;
    puVar2[2] = 1;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_0084bcc0(piVar1 + 0x68);
  *(int **)(param_1 + 0x44) = piVar1;
  (**(code **)(param_1 + 0x20))(param_1,&LAB_0083f3a0);
  piVar1[0x76] = 1;
  return piVar1;
}

