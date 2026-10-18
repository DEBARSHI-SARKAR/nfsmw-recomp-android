/* speed.exe 0064c590 FUN_0064c590; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064c590(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  iVar4 = param_1 * 0x20;
  fVar3 = *param_2 * _DAT_00890da8;
  (&DAT_00925ab0)[param_1 * 8] = &PTR_DAT_008f83d0;
  *(undefined4 *)(&DAT_00925ab4 + iVar4) = 0;
  *(undefined4 *)(&DAT_00925ab8 + iVar4) = 0x3f19999a;
  *(float *)(&DAT_00925aa0 + iVar4) = fVar3;
  *(undefined4 *)(&DAT_00925abc + iVar4) = 0x413be1e5;
  *(float *)(&DAT_00925aa4 + iVar4) = fVar1 * _DAT_00890da8;
  *(float *)(&DAT_00925aa8 + iVar4) = fVar2 * _DAT_00890da8;
  return;
}

