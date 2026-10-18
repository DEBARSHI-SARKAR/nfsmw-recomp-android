/* speed.exe 004bfa30 FUN_004bfa30; analysis pseudocode, not buildable source.
 * calls 004b0790 FUN_004b0790
 * calls 0045dd10 FUN_0045dd10
 * calls 0045f340 FUN_0045f340
 * calls 0045f490 FUN_0045f490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004bfa30(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float10 fVar8;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_18;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if ((iVar7 != 0) && (*(char *)(iVar7 + 0x94) == '\x01')) {
    uVar2 = *(undefined4 *)(iVar7 + 0x34);
    pfVar1 = (float *)(param_1 + 0x30);
    uVar3 = *(undefined4 *)(iVar7 + 0x38);
    *pfVar1 = *(float *)(iVar7 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    *(undefined4 *)(param_1 + 0x38) = uVar3;
    puVar4 = *(undefined4 **)(param_1 + 0x28);
    uVar2 = puVar4[1];
    uVar3 = puVar4[2];
    *(undefined4 *)(param_1 + 0x40) = *puVar4;
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    *(undefined4 *)(param_1 + 0x48) = uVar3;
    iVar7 = *(int *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(iVar7 + 0x40);
    uVar2 = *(undefined4 *)(iVar7 + 0x48);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar7 + 0x44);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    iVar7 = FUN_004b0790(pfVar1,0,&local_44);
    if (iVar7 != 0) {
      fVar8 = (float10)FUN_0045f340(pfVar1,(float *)(iVar7 + 0x40));
      *(float *)(param_1 + 100) = (float)fVar8;
      fVar6 = _DAT_0089096c;
      fVar5 = *(float *)(*(int *)(param_1 + 0x28) + 0x70) * _DAT_00897188;
      *(float *)(param_1 + 0x60) = fVar5;
      if (fVar5 <= fVar6) {
        if (fVar5 < _DAT_008910f0) {
          *(undefined4 *)(param_1 + 0x60) = 0x3f000000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
      }
      *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) * _DAT_00897184;
      local_18 = *(float *)(iVar7 + 0x48);
      local_40 = *(float *)(iVar7 + 0x40) - *pfVar1;
      local_3c = *(float *)(iVar7 + 0x44) - *(float *)(param_1 + 0x34);
      local_38 = local_18 - *(float *)(param_1 + 0x38);
      FUN_0045f490(&local_30,&local_40);
      local_44 = local_30 * *(float *)(param_1 + 0x40) +
                 local_28 * *(float *)(param_1 + 0x48) + local_2c * *(float *)(param_1 + 0x44);
      iVar7 = FUN_0045dd10(local_44);
      *(uint *)(param_1 + 0x68) = (0x4000U - iVar7 & 0xffff) >> 6;
    }
  }
  return;
}

