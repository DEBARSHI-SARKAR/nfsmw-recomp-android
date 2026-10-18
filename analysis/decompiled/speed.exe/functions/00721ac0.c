/* speed.exe 00721ac0 FUN_00721ac0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00721ac0(int param_1,float *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar1 = *(short *)(param_1 + 0x10 + param_3 * 2);
  sVar2 = *(short *)(param_1 + 4);
  sVar3 = *(short *)(param_1 + 0x18 + param_3 * 2);
  *param_2 = (float)((int)*(short *)(param_1 + 8 + param_3 * 2) << 0xd) * _DAT_00890980;
  param_2[1] = (float)((int)sVar1 << 0xd) * _DAT_00890980;
  param_2[2] = (float)(((int)sVar3 + sVar2 * 0x100) * 0x100) * _DAT_00890980;
  return;
}

