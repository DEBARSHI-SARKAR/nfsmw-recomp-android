/* speed.exe 006772c0 FUN_006772c0; analysis pseudocode, not buildable source.
 * calls 0041ad40 FUN_0041ad40
 * calls 005c5e80 FUN_005c5e80
 * calls 00669e30 FUN_00669e30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006772c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  iVar2 = (**(code **)(*(int *)(param_1 + -0x90) + 0x74))();
  if (iVar2 != 0) {
    fVar4 = (float10)FUN_005c5e80((float)param_2[10] * (float)param_2[10] +
                                  (float)param_2[9] * (float)param_2[9] +
                                  (float)param_2[8] * (float)param_2[8]);
    if ((float10)_DAT_0089096c <= fVar4) {
      uVar1 = param_2[1];
      uVar3 = param_2[2];
      *(undefined4 *)(param_1 + 0x80) = *param_2;
      *(undefined4 *)(param_1 + 0x84) = uVar1;
      *(undefined4 *)(param_1 + 0x88) = uVar3;
      *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
      if (param_2[0xf] == *(int *)(param_1 + -0x88)) {
        *(undefined4 *)(param_1 + 0x60) = param_2[0x14];
        *(undefined4 *)(param_1 + 100) = param_2[0x15];
        *(undefined4 *)(param_1 + 0x68) = param_2[0x16];
        iVar2 = param_2[7];
        uVar1 = param_2[0x17];
        uVar3 = FUN_0041ad40(param_2[0x13]);
        FUN_00669e30(uVar1,(float)fVar4,(iVar2 << 0x1d) >> 0x1d,uVar3);
        return;
      }
      if (param_2[0x13] == *(int *)(param_1 + -0x88)) {
        *(undefined4 *)(param_1 + 0x60) = param_2[0x18];
        *(undefined4 *)(param_1 + 100) = param_2[0x19];
        *(undefined4 *)(param_1 + 0x68) = param_2[0x1a];
        iVar2 = param_2[7];
        uVar1 = param_2[0x1b];
        uVar3 = FUN_0041ad40(param_2[0xf]);
        FUN_00669e30(uVar1,(float)fVar4,(iVar2 << 0x1d) >> 0x1d,uVar3);
      }
    }
  }
  return;
}

