/* speed.exe 004b1a10 FUN_004b1a10; analysis pseudocode, not buildable source.
 * calls 006e9e40 FUN_006e9e40
 * calls 00444fe0 FUN_00444fe0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b1a10(int param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  char cVar6;
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086b448;
  local_c = ExceptionList;
  if ((DAT_00911fa8 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    local_18 = &PTR_LAB_00896860;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    cVar6 = FUN_006e9e40(&local_18);
    if (cVar6 == '\0') {
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x94) = 0;
      ExceptionList = local_c;
      return;
    }
    DAT_009120d8 = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x94) = 1;
    FUN_00444fe0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
    iVar3 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar3 + 0x40);
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(iVar3 + 0x48);
    puVar4 = *(undefined4 **)(param_1 + 0x20);
    uVar1 = puVar4[1];
    iVar3 = *(int *)(param_1 + 0x14);
    uVar2 = puVar4[2];
    *(undefined4 *)(iVar3 + 0x40) = *puVar4;
    *(undefined4 *)(iVar3 + 0x44) = uVar1;
    *(undefined4 *)(iVar3 + 0x48) = uVar2;
    iVar3 = *(int *)(param_1 + 0x14);
    *(float *)(iVar3 + 0x60) = *(float *)(iVar3 + 0x40) - *(float *)(iVar3 + 0x50);
    *(float *)(iVar3 + 100) = *(float *)(iVar3 + 0x44) - *(float *)(iVar3 + 0x54);
    *(float *)(iVar3 + 0x68) = *(float *)(iVar3 + 0x48) - *(float *)(iVar3 + 0x58);
    iVar3 = *(int *)(param_1 + 0x14);
    param_2 = _DAT_0089096c / param_2;
    *(float *)(iVar3 + 0x60) = param_2 * *(float *)(iVar3 + 0x60);
    *(float *)(iVar3 + 100) = *(float *)(iVar3 + 100) * param_2;
    *(float *)(iVar3 + 0x68) = *(float *)(iVar3 + 0x68) * param_2;
    pfVar5 = *(float **)(param_1 + 0x20);
    *(float *)(*(int *)(param_1 + 0x14) + 0x70) =
         SQRT(pfVar5[2] * pfVar5[2] + pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5);
    ExceptionList = local_c;
    return;
  }
  if (DAT_009120d8 == '\0') {
    DAT_009120d8 = '\x01';
  }
  return;
}

