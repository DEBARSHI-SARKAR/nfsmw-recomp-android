/* speed.exe 006972d0 FUN_006972d0; analysis pseudocode, not buildable source.
 * calls 00696250 FUN_00696250
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006972d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  float fStack_18;
  undefined1 auStack_14 [20];
  
  iVar2 = **(int **)(param_1 + 0x78);
  if (((byte)*(ushort *)(iVar2 + 0x1c) >> 1 & 1) == 0) {
    if ((*(ushort *)(iVar2 + 0x1c) & 0x800) != 0) {
      local_3c = *(float *)(iVar2 + 0x30);
      local_38 = *(float *)(iVar2 + 0x34);
      local_34 = *(float *)(iVar2 + 0x38);
      piVar1 = (int *)(param_1 + 0x48);
      (**(code **)(*piVar1 + 0xa4))(&local_3c,0);
      fVar4 = (float10)FUN_005c5e80(*(float *)(param_1 + 0xe8) * *(float *)(param_1 + 0xe8) +
                                    *(float *)(param_1 + 0xe4) * *(float *)(param_1 + 0xe4));
      local_38 = (float)(fVar4 * (float10)*(float *)(param_1 + 0xe0) * (float10)_DAT_00890e98);
      fVar4 = (float10)FUN_005c5e80(*(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xe0) +
                                    *(float *)(param_1 + 0xe8) * *(float *)(param_1 + 0xe8));
      local_34 = (float)(fVar4 * (float10)*(float *)(param_1 + 0xe4) * (float10)_DAT_00890e98);
      fVar4 = (float10)FUN_005c5e80(*(float *)(param_1 + 0xe4) * *(float *)(param_1 + 0xe4) +
                                    *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xe0));
      fStack_28 = local_34;
      iVar3 = *(int *)(param_1 + 0x84);
      fStack_24 = (float)(fVar4 * (float10)*(float *)(param_1 + 0xe8) * (float10)_DAT_00890e98);
      local_2c = local_38;
      local_34 = *(float *)(iVar3 + 100);
      fStack_30 = *(float *)(iVar3 + 0x68);
      fStack_18 = local_3c;
      local_38 = *(float *)(iVar3 + 0x60);
      FUN_00696250(auStack_20,&local_38,&local_2c,0x3f9ccccd);
      (**(code **)(*piVar1 + 0xa0))(auStack_14,0);
      (**(code **)(*piVar1 + 0x94))(auStack_1c);
    }
    if ((*(byte *)(iVar2 + 0x1c) >> 5 & 1) != 0) {
      fStack_30 = *(float *)(iVar2 + 0x20);
      local_2c = *(float *)(iVar2 + 0x24);
      fStack_28 = *(float *)(iVar2 + 0x28);
      piVar1 = (int *)(param_1 + 0x48);
      local_3c = *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xe0) * _DAT_00890e98;
      local_38 = *(float *)(param_1 + 0xe4) * *(float *)(param_1 + 0xe4) * _DAT_00890e98;
      local_34 = *(float *)(param_1 + 0xe8) * *(float *)(param_1 + 0xe8) * _DAT_00890e98;
      (**(code **)(*piVar1 + 0xa4))(&fStack_30,0);
      iVar2 = *(int *)(param_1 + 0x84);
      local_2c = *(float *)(iVar2 + 0x10);
      fStack_28 = *(float *)(iVar2 + 0x14);
      fStack_18 = local_3c;
      fStack_24 = *(float *)(iVar2 + 0x18);
      local_3c = fStack_30;
      FUN_00696250(&stack0xffffffbc,&local_2c,auStack_20,0x3f9ccccd);
      (**(code **)(*piVar1 + 0xa0))(auStack_14,0);
      (**(code **)(*piVar1 + 0x8c))(auStack_1c);
    }
  }
  return;
}

