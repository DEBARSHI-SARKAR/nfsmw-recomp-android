/* speed.exe 006c7cf0 FUN_006c7cf0; analysis pseudocode, not buildable source.
 * calls 007e7d5e D3DXMatrixMultiply
 * calls 006bde60 FUN_006bde60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c7cf0(float param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  float *pfVar4;
  float fStack_138;
  int iStack_134;
  undefined4 uStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float fStack_dc;
  float fStack_cc;
  float fStack_bc;
  float fStack_ac;
  float afStack_a8 [3];
  undefined1 auStack_9c [12];
  undefined1 local_90 [28];
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [100];
  
  iVar1 = *param_2;
  local_f0 = DAT_008fae94;
  fStack_138 = param_1;
  local_120 = 0x3f800000;
  local_11c = 0;
  local_118 = 0.0;
  local_114 = 0;
  local_110 = 0;
  local_10c = 0x3f800000;
  local_108 = 0.0;
  local_104 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0x3f800000;
  local_f4 = 0;
  local_e8 = 0;
  local_e4 = 0x3f800000;
  local_ec = DAT_008fae98;
  iStack_134 = iVar1 + 0x80;
  D3DXMatrixMultiply(local_90);
  D3DXMatrixMultiply(auStack_9c,auStack_9c,&uStack_12c);
  if (*(char *)(DAT_00982c80 + 0x40) == '\0') {
    FUN_006bde60(auStack_68,(&DAT_009195e0)[*(int *)(DAT_00982a20 + 4) * 0x1c]);
    D3DXMatrixMultiply(&local_e8,iVar1 + 0x80,&fStack_138);
    D3DXMatrixMultiply(&local_f4,auStack_74,&local_f4);
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x98))
              (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x81c)
               ,&local_100);
    fStack_138 = fStack_dc * _DAT_00890ec4;
    iStack_134 = 0;
    uStack_12c = 0;
    uStack_124 = 0x3f800000;
    fStack_128 = fStack_cc * _DAT_00890ec4;
    local_120 = 0;
    local_11c = 0;
    local_114 = 0;
    local_110 = 0x3f800000;
    local_10c = 0;
    local_118 = fStack_bc * _DAT_00890ec4;
    local_104 = 0;
    local_100 = 0;
    local_fc = 0x3f800000;
    pfVar4 = &fStack_138;
    local_108 = fStack_ac * _DAT_00890ec4 + _DAT_008933d4;
    piVar2 = *(int **)(DAT_00982c80 + 0x48);
    uVar3 = *(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x77c);
  }
  else {
    piVar2 = *(int **)(DAT_00982c80 + 0x48);
    uVar3 = *(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x81c);
    pfVar4 = afStack_a8;
  }
  (**(code **)(*piVar2 + 0x98))(piVar2,uVar3,pfVar4);
  local_104 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x88))
            (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x7cc),
             &local_104);
  return;
}

