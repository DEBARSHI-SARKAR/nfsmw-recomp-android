/* speed.exe 006c8000 FUN_006c8000; analysis pseudocode, not buildable source.
 * calls 007e7d64 D3DXVec4Transform
 * calls 007e7d5e D3DXMatrixMultiply
 * calls 006bde60 FUN_006bde60
 * calls 0045f490 FUN_0045f490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c8000(undefined *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [12];
  undefined1 auStack_d0 [52];
  undefined1 auStack_9c [12];
  undefined1 local_90 [52];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [76];
  
  if (DAT_00982cb4 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(char *)(DAT_00982cb4 + 0x50) != '\0';
  }
  DAT_00987b14 = DAT_00987b14 + 1;
  if (param_1 == &DAT_00987ab0) {
    _DAT_00987b20 = _DAT_00987b20 + 1;
  }
  if (((param_1 != DAT_00988554) || (DAT_00982c80 != DAT_00988550)) || (DAT_008fae9c != param_2)) {
    iVar1 = (&DAT_009195e0)[param_2 * 0x1c];
    if (bVar4) {
      iVar3 = iVar1 + 0xc0;
      iVar2 = iVar1 + 0x100;
    }
    else {
      iVar3 = iVar1 + 0x40;
      iVar2 = iVar1 + 0x80;
    }
    if (param_2 == DAT_008fae9c) {
      if ((DAT_00982c80 != DAT_00988550) && (*(char *)(DAT_00982c80 + 0x40) == '\0')) {
        (**(code **)(*DAT_00982bdc + 0xb0))(DAT_00982bdc,2,iVar1);
        (**(code **)(*DAT_00982bdc + 0xb0))(DAT_00982bdc,3,iVar3);
      }
    }
    else {
      if (*(char *)(DAT_00982c80 + 0x40) == '\0') {
        (**(code **)(*DAT_00982bdc + 0xb0))(DAT_00982bdc,2,iVar1);
        (**(code **)(*DAT_00982bdc + 0xb0))(DAT_00982bdc,3,iVar3);
      }
      DAT_00987b1c = DAT_00987b1c + 1;
      DAT_008fae9c = param_2;
    }
    _DAT_00987b18 = _DAT_00987b18 + 1;
    DAT_00988554 = param_1;
    DAT_00988550 = DAT_00982c80;
    if (*(int *)(*(int *)(DAT_00982c80 + 0x44) + 0xfc4) != 0) {
      D3DXMatrixMultiply(local_90,param_1,iVar1);
      (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x98))
                (*(int **)(DAT_00982c80 + 0x48),
                 *(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0xfc4),auStack_9c);
    }
    iVar1 = *(int *)(*(int *)(DAT_00982c80 + 0x44) + 0xf4c);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x98))
                (*(int **)(DAT_00982c80 + 0x48),iVar1,param_1);
    }
    if ((*(char *)(DAT_00982c80 + 0x40) != '\0') ||
       ((**(code **)(*DAT_00982bdc + 0xb0))(DAT_00982bdc,0x100,param_1),
       *(char *)(DAT_00982c80 + 0x40) != '\0')) {
      D3DXMatrixMultiply(auStack_50,param_1,iVar2);
      (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x98))
                (*(int **)(DAT_00982c80 + 0x48),
                 *(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0xfec),auStack_5c);
    }
    bVar4 = *(int *)(*(int *)(DAT_00982c80 + 0x44) + 0x8e4) != 0;
    bVar5 = *(int *)(*(int *)(DAT_00982c80 + 0x44) + 0x90c) != 0;
    if ((bVar4) || (bVar5)) {
      iVar1 = *(int *)(&DAT_00919620 + param_2 * 0x70);
      uStack_100 = *(undefined4 *)(iVar1 + 0x40);
      uStack_fc = *(undefined4 *)(iVar1 + 0x44);
      uStack_f8 = *(undefined4 *)(iVar1 + 0x48);
      uStack_f4 = 0x3f800000;
      FUN_006bde60(auStack_d0,param_1);
      D3DXVec4Transform(auStack_e0,&uStack_100,auStack_d0);
      if (bVar4) {
        (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x88))
                  (*(int **)(DAT_00982c80 + 0x48),
                   *(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x8e4),auStack_e0);
      }
      if (bVar5) {
        D3DXVec4Transform(auStack_f0,DAT_009b392c + 0x180,auStack_d0);
        FUN_0045f490(&uStack_fc,&uStack_fc);
        (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x88))
                  (*(int **)(DAT_00982c80 + 0x48),
                   *(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x90c),&uStack_fc);
      }
    }
    switch(*(undefined4 *)(DAT_00982c80 + 4)) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 0x12:
      D3DXMatrixMultiply(auStack_d0,param_1,DAT_00919c70 + 0x40);
      (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x98))
                (*(int **)(DAT_00982c80 + 0x48),
                 *(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0xc54),auStack_dc);
    }
  }
  return;
}

