/* speed.exe 00783b80 FUN_00783b80; analysis pseudocode, not buildable source.
 * calls 00763110 FUN_00763110
 * calls 0077a740 FUN_0077a740
 * calls 007822c0 FUN_007822c0
 */

void __thiscall
FUN_00783b80(uint *param_1,int param_2,undefined4 param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  float local_24 [2];
  float local_1c;
  undefined4 local_18;
  int *local_14;
  uint local_10;
  int local_c;
  bool local_8;
  undefined1 local_7;
  undefined4 local_4;
  
  iVar5 = param_2;
  fVar2 = *param_4;
  fVar3 = param_4[2];
  DAT_009b38a4 = DAT_009b38a4 + 1;
  piVar8 = *(int **)(param_2 + 4);
  param_4 = (float *)DAT_009b38a8;
  if (piVar8 != piVar8 + *(int *)(param_2 + 0xc)) {
    do {
      local_14 = *(int **)(*(int *)((int)param_4 + 0x20) + *piVar8 * 4);
      if (local_14 != (int *)0x0) {
        local_10 = (uint)*(byte *)(local_14 + 2);
        local_18 = 0;
        local_c = 0;
        local_7 = 0;
        local_4 = 0;
        if (local_10 != 0) {
          local_c = *(ushort *)(local_14 + 3) + 0x14 + (int)local_14;
        }
        iVar7 = *local_14;
        if (iVar7 != 0) {
          local_4 = **(undefined4 **)(iVar7 + 4);
        }
        local_8 = iVar7 != 0 || local_10 != 0;
        puVar6 = (uint *)FUN_0077a740();
        while (puVar6 != (uint *)0x0) {
          uVar4 = *puVar6;
          if (((ushort)(uVar4 >> 0x10) < 0xa8c) &&
             (iVar7 = *(int *)(DAT_009b38a0 + (uVar4 >> 0x10) * 4), iVar7 != 0)) {
            iVar7 = (uVar4 & 0xffff) * 0x40 + *(int *)(iVar7 + 8);
          }
          else {
            iVar7 = 0;
          }
          param_2 = iVar7;
          if (((iVar7 != 0) &&
              (((*(ushort *)(iVar7 + 0x18) == 0 ||
                (*(char *)((int)&DAT_00902160 + (uint)*(ushort *)(iVar7 + 0x18)) != '\0')) &&
               (*(int *)(iVar7 + 0x1c) != 0)))) &&
             (((*param_1 & (uint)*(ushort *)(iVar7 + 0x12)) == 0 &&
              (*(short *)(iVar7 + 0x10) != DAT_009b38a4)))) {
            *(short *)(iVar7 + 0x10) = DAT_009b38a4;
            FUN_00763110(local_24);
            fVar1 = *(float *)(iVar7 + 0x3c);
            if ((*(byte *)(iVar7 + 0x12) & 3) != 0) {
              if (fVar1 <= *(float *)(iVar7 + 0x2c)) {
                fVar1 = *(float *)(iVar7 + 0x2c);
              }
              else {
                fVar1 = *(float *)(iVar7 + 0x3c);
              }
              if (fVar1 <= *(float *)(iVar7 + 0x14)) {
                fVar1 = *(float *)(iVar7 + 0x14);
              }
              if (fVar1 <= *(float *)(iVar7 + 0xc)) {
                fVar1 = *(float *)(iVar7 + 0xc);
              }
            }
            if ((local_1c - fVar3) * (local_1c - fVar3) +
                (local_24[0] - fVar2) * (local_24[0] - fVar2) <
                (fVar1 + param_5) * (fVar1 + param_5)) {
              FUN_007822c0(&param_2);
            }
          }
          puVar6 = (uint *)FUN_0077a740();
        }
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != (int *)(*(int *)(iVar5 + 4) + *(int *)(iVar5 + 0xc) * 4));
  }
  return;
}

