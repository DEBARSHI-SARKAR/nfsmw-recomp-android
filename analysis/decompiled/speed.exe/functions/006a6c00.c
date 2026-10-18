/* speed.exe 006a6c00 FUN_006a6c00; analysis pseudocode, not buildable source.
 * calls 00695ee0 FUN_00695ee0
 */

void FUN_006a6c00(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_40 [12];
  
  iVar3 = param_2;
  while( true ) {
    iVar2 = iVar3 * 2 + 2;
    if (param_3 <= iVar2) break;
    if (*(float *)(iVar2 * 0x30 + param_1 + -0x14) < *(float *)(iVar2 * 0x30 + 0x1c + param_1)) {
      iVar2 = iVar3 * 2 + 1;
    }
    puVar4 = (undefined4 *)(iVar2 * 0x30 + param_1);
    puVar5 = (undefined4 *)(iVar3 * 0x30 + param_1);
    for (iVar1 = 0xc; iVar3 = iVar2, iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if (iVar2 == param_3) {
    puVar4 = (undefined4 *)(param_3 * 0x30 + -0x30 + param_1);
    puVar5 = (undefined4 *)(iVar3 * 0x30 + param_1);
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar3 = param_3 + -1;
  }
  puVar4 = (undefined4 *)&stack0x00000010;
  puVar5 = auStack_40;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00695ee0(param_1,iVar3,param_2);
  return;
}

