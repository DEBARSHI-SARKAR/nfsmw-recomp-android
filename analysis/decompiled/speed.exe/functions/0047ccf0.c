/* speed.exe 0047ccf0 FUN_0047ccf0; analysis pseudocode, not buildable source.
 * calls 006bde60 FUN_006bde60
 * calls 0047b9f0 FUN_0047b9f0
 */

undefined4 __thiscall FUN_0047ccf0(int param_1,undefined4 param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 local_50 [76];
  
  FUN_006bde60(local_50,*(undefined4 *)(*(int *)(param_1 + 0x290) + 0x1c));
  FUN_0047b9f0(local_50,param_2);
  iVar1 = *(int *)(*(int *)(param_1 + 0x290) + 0x1c);
  fVar2 = *(float *)(iVar1 + 0x208);
  fVar3 = *(float *)(iVar1 + 0x200);
  *param_3 = -*(float *)(iVar1 + 0x204);
  param_3[1] = fVar2;
  param_3[2] = fVar3;
  return 1;
}

