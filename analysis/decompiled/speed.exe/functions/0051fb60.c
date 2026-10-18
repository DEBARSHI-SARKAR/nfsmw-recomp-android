/* speed.exe 0051fb60 FUN_0051fb60; analysis pseudocode, not buildable source.
 * calls 00651550 FUN_00651550
 * calls 00579840 FUN_00579840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051fb60(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fStack_10;
  float fStack_c;
  undefined1 auStack_8 [8];
  
  uVar6 = (**(code **)(*(int *)*DAT_0092d87c + 4))();
  FUN_00579840(&fStack_10,auStack_8,uVar6);
  iVar1 = *(int *)(param_1 + 0x13c);
  fVar3 = (fStack_10 - *(float *)(iVar1 + 0xac)) / *(float *)(iVar1 + 0xb4);
  iVar2 = *(int *)(param_1 + 0x168);
  fVar4 = (*(float *)(iVar1 + 0xb0) - fStack_c) / *(float *)(iVar1 + 0xb4) + _DAT_0089096c;
  fVar5 = _DAT_00890d3c;
  if (((iVar2 != 1) && (fVar5 = _DAT_0089b1f0, iVar2 != 2)) && (fVar5 = _DAT_0089096c, iVar2 == 3))
  {
    fVar5 = _DAT_00890da4;
  }
  fStack_c = (_DAT_0089096c / fVar5) * _DAT_008933d4;
  fVar5 = _DAT_0089096c - fStack_c;
  fStack_10 = fStack_c;
  if (fStack_c < fVar3) {
    fStack_10 = fVar3;
  }
  if (fVar5 < fStack_10) {
    fStack_10 = fVar5;
  }
  if (fStack_c < fVar4) {
    fStack_c = fVar4;
  }
  if (fVar5 < fStack_c) {
    fStack_c = fVar5;
  }
  iVar1 = *(int *)(param_1 + 0x160);
  FUN_00651550(&fStack_10);
  *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(iVar1 + 0x7c);
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar1 + 0x80);
  *(undefined2 *)(iVar1 + 0x9c) = 0;
  *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(iVar1 + 0xa8);
  *(undefined4 *)(iVar1 + 0xa4) = *(undefined4 *)(iVar1 + 0xac);
  *(undefined2 *)(iVar1 + 200) = 0;
  return;
}

