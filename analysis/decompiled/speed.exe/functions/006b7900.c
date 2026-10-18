/* speed.exe 006b7900 FUN_006b7900; analysis pseudocode, not buildable source.
 * calls 006b5990 FUN_006b5990
 * calls 006b5850 FUN_006b5850
 */

void __thiscall FUN_006b7900(int *param_1,int *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  iVar5 = *(int *)param_1[0x1e];
  *(byte *)(iVar5 + 0x1c) = *(byte *)(iVar5 + 0x1c) & 0xf3;
  cVar4 = (**(code **)(*param_1 + 0x54))();
  iVar3 = param_1[0x40];
  if (cVar4 == '\0') {
    if (iVar3 != 0) {
      FUN_006b5850();
      param_1[0x40] = 0;
      return;
    }
  }
  else {
    if (iVar3 == 0) {
      iVar5 = FUN_006b5990(*(undefined1 *)(iVar5 + 0x5e),param_1,iVar5 + 0x10,param_1[0x46]);
      param_1[0x40] = iVar5;
      return;
    }
    fVar1 = (float)param_1[0x46];
    fVar2 = *(float *)(iVar5 + 0x10);
    *(float *)(iVar3 + 8) = fVar2 - fVar1;
    *(float *)(iVar3 + 0x20) = fVar2 + fVar1;
    fVar2 = *(float *)(iVar5 + 0x18);
    *(float *)(iVar3 + 0x3c) = fVar2 - fVar1;
    *(float *)(iVar3 + 0x54) = fVar2 + fVar1;
    if (*(int *)(param_1[0x40] + 4) != param_1[0x40] + 0x18) {
      *param_2 = *param_2 + 1;
    }
    if (*(int *)(param_1[0x40] + 0x38) != param_1[0x40] + 0x4c) {
      *param_3 = *param_3 + 1;
    }
  }
  return;
}

