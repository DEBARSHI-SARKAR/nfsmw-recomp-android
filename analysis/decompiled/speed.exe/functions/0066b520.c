/* speed.exe 0066b520 FUN_0066b520; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 * calls 005ca910 FUN_005ca910
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0066b520(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar2 = (**(code **)(*(int *)(param_1 + -0xb0) + 0x40))();
  if (iVar2 != 0) {
    fStack_c = (float)(int)*(short *)(iVar2 + 0x18) * _DAT_00890d60;
    fStack_8 = (float)(int)*(short *)(iVar2 + 0x1a) * _DAT_00890d60;
    fStack_4 = (float)(int)*(short *)(iVar2 + 0x1c) * _DAT_00890d60;
    FUN_005ca910(*(undefined4 *)(param_1 + 0xc),param_2);
    pfVar1 = (float *)(param_2 + 0x30);
    FUN_00401670(&fStack_c,param_2,pfVar1);
    iVar2 = *(int *)(param_1 + 0xc);
    *pfVar1 = *pfVar1 + *(float *)(iVar2 + 0x10);
    *(float *)(param_2 + 0x34) = *(float *)(iVar2 + 0x14) + *(float *)(param_2 + 0x34);
    *(float *)(param_2 + 0x38) = *(float *)(iVar2 + 0x18) + *(float *)(param_2 + 0x38);
    return CONCAT31((int3)((uint)(iVar2 + 0x10) >> 8),1);
  }
  return 0;
}

