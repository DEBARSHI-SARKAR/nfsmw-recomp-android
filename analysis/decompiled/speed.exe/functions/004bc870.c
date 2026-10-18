/* speed.exe 004bc870 FUN_004bc870; analysis pseudocode, not buildable source.
 * calls 004b7b00 FUN_004b7b00
 * calls 00653b10 FUN_00653b10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bc870(int *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_8;
  float local_4;
  
  iVar2 = param_1[10];
  if ((iVar2 == 0) || ((*(int *)(iVar2 + 0x38) != 3 && (*(int *)(iVar2 + 0x38) == 0)))) {
    iVar3 = param_1[0xb];
    if ((iVar3 == 0) || (*(int *)(iVar3 + 0x84) == 0)) {
      local_8 = *(float *)(param_1[6] + 100);
    }
    else {
      local_8 = *(float *)(iVar3 + 0x44);
    }
  }
  else {
    local_8 = *(float *)(iVar2 + 0x9c);
  }
  if ((((char)param_1[0x4e] != '\0') && (*(int *)(iVar2 + 0x38) != 3)) &&
     (*(int *)(iVar2 + 0x38) == 0)) {
    fVar4 = *(float *)(param_1[6] + 100);
    fVar5 = (float10)(**(code **)(*param_1 + 0x44))();
    fVar6 = fVar5 + (float10)_DAT_0089165c;
    if (((float10)fVar4 <= fVar6) &&
       (fVar6 = (float10)(float)fVar5 - (float10)_DAT_0089643c, fVar6 <= (float10)fVar4)) {
      fVar6 = (float10)fVar4;
    }
    local_8 = (float)fVar6;
  }
  param_1[0x47] = param_1[0x46];
  local_4 = local_8;
  fVar4 = local_8 + (float)param_1[0x50] + (float)param_1[0x71] + (float)param_1[0x50];
  param_1[0x46] = (int)fVar4;
  param_1[0x48] = (int)(fVar4 * _DAT_00890ea8 + (float)param_1[0x48] * _DAT_00896b58);
  iVar2 = *(int *)(param_1[10] + 0x38);
  if ((iVar2 == 2) || (iVar2 == 1)) {
    local_4 = *(float *)(param_1[10] + 0x160);
  }
  else if (*(int *)(param_1[0xb] + 0x84) == 1) {
    local_4 = *(float *)(param_1[6] + 100);
  }
  else if ((char)param_1[0x35] != '\0') {
    if ((char)param_1[0x44] == '\0') {
      fVar5 = (float10)FUN_004b7b00(param_1[0x45],0,0x42480000);
      param_1[0x45] = (int)(float)fVar5;
      if (fVar5 == (float10)_DAT_00890968) {
        *(undefined1 *)(param_1 + 0x44) = 1;
      }
    }
    else {
      fVar5 = (float10)FUN_004b7b00(param_1[0x45],0x43480000,0x42480000);
      param_1[0x45] = (int)(float)fVar5;
      if (fVar5 == (float10)_DAT_008970cc) {
        *(undefined1 *)(param_1 + 0x44) = 0;
        local_4 = local_8 - (float)param_1[0x45];
        goto LAB_004bca3c;
      }
    }
    local_4 = local_8 - (float)param_1[0x45];
  }
LAB_004bca3c:
  FUN_00653b10(local_4);
  (**(code **)(param_1[0x28] + 4))();
  iVar2 = *(int *)(param_1[5] + 0x34);
  fVar4 = ((float)param_1[0x2b] - _DAT_00896480) * _DAT_008970c8;
  if (*(int *)(iVar2 + 0x228) == 0) {
    if ((char)param_1[0x33] != '\0') {
      *(undefined4 *)(param_1[6] + 0x74) = *(undefined4 *)(iVar2 + 0x1dc);
      return;
    }
    if (_DAT_00890968 < (float)param_1[0x32]) {
      fVar1 = (float)param_1[0x32];
      param_1[0x32] = (int)(fVar1 - param_2);
      if (fVar1 - param_2 < _DAT_00890968) {
        param_1[0x32] = 0;
      }
      iVar2 = *(int *)(param_1[5] + 0x34);
      fVar4 = (fVar4 - *(float *)(iVar2 + 0x1dc)) *
              (_DAT_0089644c - (float)param_1[0x32]) * _DAT_008970c4 + *(float *)(iVar2 + 0x1dc);
    }
  }
  *(float *)(param_1[6] + 0x74) = fVar4;
  return;
}

