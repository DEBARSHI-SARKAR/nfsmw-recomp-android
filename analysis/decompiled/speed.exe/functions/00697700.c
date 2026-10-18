/* speed.exe 00697700 FUN_00697700; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 * calls 00697050 FUN_00697050
 */

void __thiscall FUN_00697700(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_18;
  float local_14;
  float local_10;
  
  iVar5 = **(int **)(param_1 + 0x30);
  if (*(char *)(iVar5 + 0x5d) != '\x02') {
    *(byte *)(iVar5 + 0x1c) = *(byte *)(iVar5 + 0x1c) | 0x40;
    *(undefined1 *)(iVar5 + 0x5d) = 0;
    FUN_00697050();
    FUN_00401670(param_1 + 0xa8,iVar5 + 0x70,&local_18);
    fVar6 = *param_3 - (local_18 + *(float *)(iVar5 + 0x10));
    fVar7 = param_3[1] - (local_14 + *(float *)(iVar5 + 0x14));
    fVar8 = param_3[2] - (local_10 + *(float *)(iVar5 + 0x18));
    fVar1 = *param_2;
    fVar2 = param_2[2];
    fVar3 = param_2[1];
    fVar4 = *param_2;
    *(float *)(iVar5 + 0x60) = (fVar7 * param_2[2] - fVar8 * param_2[1]) + *(float *)(iVar5 + 0x60);
    *(float *)(iVar5 + 100) = (fVar8 * fVar1 - fVar6 * fVar2) + *(float *)(iVar5 + 100);
    *(float *)(iVar5 + 0x68) = (fVar6 * fVar3 - fVar7 * fVar4) + *(float *)(iVar5 + 0x68);
  }
  return;
}

