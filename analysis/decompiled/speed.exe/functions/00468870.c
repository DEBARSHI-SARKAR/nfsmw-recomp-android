/* speed.exe 00468870 FUN_00468870; analysis pseudocode, not buildable source.
 * calls 00467420 FUN_00467420
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00468870(int param_1,undefined4 param_2,float param_3,char param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  fVar8 = _DAT_008edf4c;
  uVar7 = DAT_008edf3c;
  uVar6 = _DAT_008edf38;
  uVar5 = _DAT_008edf34;
  if (_DAT_00890968 < param_3) {
    fVar2 = _DAT_008edf40 * param_3;
    iVar1 = *(int *)(param_1 + 0x1c);
    fVar3 = _DAT_008edf44 * param_3;
    fVar4 = _DAT_008edf48 * param_3;
    *(undefined4 *)(iVar1 + 0x70) = DAT_008edf30;
    *(undefined4 *)(iVar1 + 0x7c) = uVar7;
    *(undefined4 *)(iVar1 + 0x74) = uVar5;
    *(undefined4 *)(iVar1 + 0x78) = uVar6;
    iVar1 = *(int *)(param_1 + 0x1c);
    *(float *)(iVar1 + 0x80) = fVar2;
    *(float *)(iVar1 + 0x84) = fVar3;
    *(float *)(iVar1 + 0x88) = fVar4;
    *(float *)(iVar1 + 0x8c) = fVar8 * param_3;
    iVar1 = DAT_00925b14;
    if (param_4 != '\0') {
      iVar1 = DAT_00925ae8;
    }
    FUN_00467420(param_2,(float)iVar1 * _DAT_00890984,0x3f800000);
  }
  return;
}

